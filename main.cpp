#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "CoffeeModel.h"
#include "ApplicationFlowModel.h"
#include <QDebug>
#include <QDirIterator>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.addImportPath(":/imports");

    CoffeeModel coffeeModel;
    ApplicationFlowModel applicationFlowModel;

    // Expose models to QML
    engine.rootContext()->setContextProperty("coffeeModel", &coffeeModel);
    engine.rootContext()->setContextProperty("applicationFlowModel", &applicationFlowModel);

    const QUrl url(QStringLiteral("qrc:/qt/qml/TryingCoffee/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
        &app, [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
