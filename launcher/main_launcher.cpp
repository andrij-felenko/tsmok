#include <optional>
#include <QtCore/QCoreApplication>
//#include <QtCore/QProcess>
#include <QtCore/QDebug>

int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);

    std::optional <int> be;
    be = std::nullopt;
//    QProcess process;
//    process.start("Brain", QStringList { "-try", "rew" });

    qDebug() << QString::number(0xFFFFFF, 10);
    qDebug() << QString::number(INT_MAX, 16);
    qDebug() << QString::number(UINT_MAX, 16);
    qDebug() << QString::number(UINT8_MAX, 16);

    return app.exec();
}
