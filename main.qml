import QtQuick 2.15
import QtQuick.Controls
import QtQuick.Layouts
// import QtQuick.Window 2.15
import TryingCoffee 1.0

// Window {
//     visible: true
//     width: 640
//     height: 480
//     title: qsTr("Coffee Insight")

//     // SideBar {
//     //     anchors.fill: parent
//     // }

//     Text {
//         text: "Hello, World!"
//         font.family: CoffeeConstants.Constants.fontFamily
//         font.pixelSize: 24
//         anchors.centerIn: parent
//     }

//     Component.onCompleted: {
//         console.log("Font family onCompleted:", CoffeeConstants.Constants.fontFamily);
//     }
// }


ApplicationWindow {
    visible: true
    width: 1024
    height: 768
    title: qsTr("Coffee Machine")


    // ChoosingCoffee {
    //     id: choosingCoffee
    //     anchors.fill: parent
    //     // Bind properties and signals to the model
    //     onCoffeeSelected: applicationFlowModel.setState("selection")
    // }

    // EmptyCupForm {
    //     id: emptyCup
    //     // Bind properties and signals to the model
    //     onContinueClicked: applicationFlowModel.setState("brewing")
    // }

    // Brewing {
    //     id: brewing
    //     // Bind properties and signals to the model
    //     onFinished: applicationFlowModel.setState("finished")
    // }

    SideBar {
        id: sideBar
        width: 354
        height: parent.height
        anchors.left: parent.left

        Component.onCompleted: {
            console.log("SideBar width:", sideBar.width)
            console.log("SideBar height:", sideBar.height)
        }
    }

    Rectangle {
         color: "lightgray"
         opacity: 0.5
         anchors.top: parent.top
         anchors.bottom: parent.bottom
         anchors.left: sideBar.right
         anchors.right: parent.right
         z: 1
     }

    // CupForm {
    //     id: cup
    //     anchors.centerIn: parent
    //     questionVisible: applicationFlowModel.questionVisible
    //     coffeeLabel: applicationFlowModel.coffeeLabel
    //     sugarAmount: applicationFlowModel.sugarAmount
    //     milkAmount: applicationFlowModel.milkAmount
    //     coffeeAmount: applicationFlowModel.coffeeAmount
    // }

    // SideBar {
    //     anchors.fill: parent
    // }


}
