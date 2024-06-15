// SideBar.qml
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
        boundsBehavior: Flickable.StopAtBounds
        clip: true

        Rectangle {
            id: background
            width: sideBar.width
            height: flickable.contentHeight
            color: "#eec1a2"
        }

        ListView {
            id: coffeeListView
            width: parent.width
            height: parent.height
            model: coffeeModel
            delegate: coffeeDelegateComponent
            spacing: 64  // Adjust the spacing between items
        }
    }

    Component {
        id: coffeeDelegateComponent
        Item {
            width: coffeeListView.width
            height: 120  // Ensure each delegate item has a defined height
            CoffeeDelegate {
                anchors.fill: parent
                text: model.name
                source: model.imagePath
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
