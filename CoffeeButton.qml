import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 2.15
import TryingCoffee
import QtInsightTracker
import "qrc:/imports/Coffee" as CoffeeConstants

Item {
    id: root
    width: parent.width
    height: 64
    source: "qrc:/images/icons/coffees/cappucino.png"  // Default image source
    signal clicked

    property alias text: label.text
    // property alias source: root.source
    property alias source: coffeeImage.source
    property int duration: 250  // Explicitly define the duration property

    MouseArea {
        anchors.fill: parent
        onClicked: {
            root.clicked()
            InsightTracker.interaction(root.text, root.InsightCategory.category);
        }
        onPressed: {
            glow.visible = true
            animation1.start()
            animation2.start()
        }
    }

    Image {
        id: coffeeImage
        // anchors.centerIn: parent
        // width: 250
        // height: 250
        width: parent.width * 0.8
        height: parent.height * 0.8
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top
        fillMode: Image.PreserveAspectFit
        source: ""


        onSourceChanged: {
            console.log("Image source:", coffeeImage.source)
        }
        onStatusChanged: {
            if (status == Image.Error) {
                console.log("Failed to load image:", coffeeImage.source)
                source = "qrc:/images/icons/coffees/fallback.png"
            }
        }
    }

    Rectangle {
        id: glow
        visible: false
        width: coffeeImage.width
        height: coffeeImage.height
        color: "#00000000"
        // radius: 125
        radius: Math.min(coffeeImage.width, coffeeImage.height) / 2
        scale: 1.05
        border.color: "#ffffff"
    }

    Label {
        id: label
        text: qsTr("Label")
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: coffeeImage.bottom
        anchors.topMargin: 5
        color: "#443224"
        font.family: CoffeeConstants.Constants.fontFamily
        font.pixelSize: 28
    }

    PropertyAnimation {
        target: glow
        id: animation1
        duration: root.duration
        loops: 1
        from: 1.05
        to: 1.2
        property: "scale"
    }

    ParallelAnimation {
        id: animation2
        SequentialAnimation {
            PropertyAnimation {
                target: glow
                duration: root.duration
                loops: 1
                from: 0.2
                to: 1.0
                property: "opacity"
            }
            PropertyAnimation {
                target: glow
                duration: root.duration
                loops: 1
                from: 1.0
                to: 0.0
                property: "opacity"
            }

            PropertyAction {
                target: glow
                property: "visible"
                value: false
            }
        }

        SequentialAnimation {
            PropertyAction {
                target: glow
                property: "border.width"
                value: 20
            }

            PauseAnimation {
                duration: 200
            }

            PropertyAnimation {
                target: glow
                duration: root.duration
                loops: 1
                from: 20
                to: 10
                property: "border.width"
            }
        }
    }
}
