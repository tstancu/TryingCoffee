import QtQuick 2.15
import QtQuick.Layouts 1.3

Item {
    id: sideBar
    width: 354
    height: 768

    property string currentCoffee: qsTr("Cappuccino")
    signal coffeeSelected
    property real currentMilk: 0
    property real currentCoffeeAmount: 4

    Behavior on currentMilk {
        NumberAnimation { duration: 250 }
    }

    Behavior on currentCoffeeAmount {
        NumberAnimation { duration: 250 }
    }

    Flickable {
        id: flickable
        width: parent.width
        height: parent.height
        contentWidth: parent.width
        boundsBehavior: Flickable.StopAtBound
        clip: true

        Rectangle {
            id: background
            width: sideBar.width
            // height: flickable.contentHeight
            // width: 354
            height: 1506
            color: "#eec1a2"
        }

        ListView {
            id: coffeeListView
            width: parent.width
            height: parent.height
            model: coffeeModel
            delegate: coffeeDelegateComponent
            spacing: 64  // Spacing between items
            z: 1
        }
    }

    Component {
        id: coffeeDelegateComponent
        Item {
            width: coffeeListView.width
            height: 64  // Each delegate has its own height set
            RowLayout {
                anchors.fill: parent
                spacing: 10

                CoffeeButton {
                    text: model.name
                    source: model.imageSource
                    onClicked: {
                        sideBar.currentCoffee = model.name
                        sideBar.currentMilk = model.milk
                        sideBar.currentCoffeeAmount = model.coffeeAmount
                        sideBar.coffeeSelected()
                    }
                }
            }
        }
    }

    // Component.onCompleted: {
    //     console.log("sideBar.width onCompleted:", sideBar.width)
    // }

    // onWidthChanged: {
    //     console.log("sideBar.width changed:", sideBar.width)
    // }
}
