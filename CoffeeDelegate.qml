// CoffeeDelegate.qml
import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 2.15
import TryingCoffee
import QtInsightTracker
import "qrc:/imports/Coffee" as CoffeeConstants

Item {
    id: root
    width: parent.width
    height: 120  // Set a specific height for the delegate
    signal clicked

    property alias text: label.text
    property alias source: coffeeImage.source
    property int duration: 250

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
        anchors.centerIn: parent
        width: 64
        height: 64
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
        width: 250
        height: 250
        color: "#00000000"
        radius: 125
        scale: 1.05
        border.color: "#ffffff"
    }

    Label {
        id: label
        text: qsTr("Label")
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
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
