#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    int max;
    int max2;
    int max3;

    int* abc =nullptr;
    *abc = 0;






    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/untitled34/Main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
