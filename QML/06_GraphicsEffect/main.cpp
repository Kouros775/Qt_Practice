#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    //engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    //engine.load(QUrl(QStringLiteral("qrc:/QML/effect1.qml")));
    //engine.load(QUrl(QStringLiteral("qrc:/QML/effect2.qml")));
    //engine.load(QUrl(QStringLiteral("qrc:/QML/effect3.qml")));
    engine.load(QUrl(QStringLiteral("qrc:/QML/effect4.qml")));


    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
