pragma Singleton
import QtQuick 2.15

QtObject {
    property FontLoader fontLoader: FontLoader {
        id: fontLoader
        source: "qrc:/imports/Coffee/TitilliumWeb-Regular.ttf"
        onStatusChanged: {
            if (status === FontLoader.Ready) {
                console.log("Font loaded successfully:", fontLoader.name);
            } else if (status === FontLoader.Error) {
                console.log("Failed to load font:", fontLoader.source);
            }
        }
    }
    readonly property alias fontFamily: fontLoader.name

    readonly property int width: 1024
    readonly property int height: 768
    readonly property int leftSideBarWidth: 366
    readonly property int defaultX: 0

    readonly property color backgroundColor: "#443224"
    readonly property int defaultMargin: 8
}
