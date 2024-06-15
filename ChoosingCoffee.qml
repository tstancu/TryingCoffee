import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.3
import TryingCoffee 1.0
import "qrc:/imports/Coffee" as CoffeeConstants

Item {
    id: choosingCoffee

    width: Constants.width + Constants.leftSideBarWidth
    height: Constants.height

    property alias milkSlider: milkSlider
    property alias sugarSlider: sugarSlider
    property alias brewButtonSelection: brewButtonSelection
    property bool selected: false
    property alias brewButton: brewButton
    property alias sideBar: sideBar
    property alias backButton: backButton
    property alias questionVisible: cup.questionVisible
    property real coffeeAmount: 5
    property bool inSettings: false

    state: "initial state"

    Rectangle {
        id: rectangle
        color: Constants.backgroundColor
        anchors.fill: parent
    }

    SideBar {
        id: sideBar
        width: Constants.leftSideBarWidth
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        onCoffeeSelected: {
            applicationFlowModel.setState("selection")
        }
    }

    CupForm {
        id: cup
        width: parent.width - sideBar.width
        height: parent.height
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        milkAmount: sideBar.currentMilk
        coffeeAmount: sideBar.currentCoffeeAmount
        coffeeLabel: sideBar.currentCoffee
        questionVisible: true
    }

    Rectangle {
        id: rightSideBar
        x: 658
        y: 0
        width: Constants.leftSideBarWidth
        height: 768
        color: "#eec1a2"
        visible: false
        anchors.right: parent.right

        Column {
            spacing: 32
            anchors.bottom: brewButton.top
            anchors.bottomMargin: 100
            anchors.horizontalCenter: parent.horizontalCenter

            Slider {
                id: milkSlider
                width: 256
                height: 48
                to: 10
                value: applicationFlowModel.milkAmount
                onValueChanged: applicationFlowModel.setMilkAmount(value)

                Image {
                    x: 48
                    y: -12
                    source: "images/icons/contents/milk.png"
                }
            }

            Slider {
                id: sugarSlider
                width: 256
                height: 48
                to: 10
                stepSize: 1
                value: applicationFlowModel.sugarAmount
                onValueChanged: applicationFlowModel.setSugarAmount(value)

                Image {
                    x: 48
                    y: -12
                    source: "images/icons/contents/sugar.png"
                }
            }
        }

        NavigationButton {
            id: brewButton
            text: "Brew"
            anchors.bottom: parent.bottom
            anchors.right: parent.right
            anchors.rightMargin: Constants.defaultMargin
            anchors.bottomMargin: Constants.defaultMargin
            onClicked: applicationFlowModel.startBrew()
        }
    }

    NavigationButton {
        id: backButton
        text: "Back"
        opacity: 0
        anchors.leftMargin: Constants.defaultMargin
        anchors.bottom: parent.bottom
        anchors.left: sideBar.right
        anchors.bottomMargin: Constants.defaultMargin
        forward: false
    }

    NavigationButton {
        id: brewButtonSelection
        anchors.left: sideBar.right
        anchors.leftMargin: Constants.defaultMargin
        anchors.bottom: parent.bottom
        anchors.bottomMargin: Constants.defaultMargin
        visible: false
    }

    states: [
        State {
            name: "initial state"
            when: !root.selected && !root.inSettings
        },
        State {
            name: "selected state"
            when: root.selected

            PropertyChanges {
                target: cup
                questionVisible: false
                visible: true
            }

            PropertyChanges {
                target: brewButton
                visible: true
            }

            PropertyChanges {
                target: brewButtonSelection
                visible: true
            }
        },
        State {
            name: "settings"
            when: root.inSettings
            PropertyChanges {
                target: cup
                x: 354
                y: 0
                questionVisible: false
                visible: true
                milkAmount: milkSlider.value
                sugarAmount: sugarSlider.value
            }

            PropertyChanges {
                target: brewButton
                visible: true
            }

            PropertyChanges {
                target: backButton
                opacity: 1
            }

            PropertyChanges {
                target: rightSideBar
                visible: true
            }
        }
    ]
}
