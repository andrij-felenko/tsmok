#include <optional>
#include <QtCore/QCoreApplication>
#include "brain.h"
#include "brain2.h"

int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);

    std::optional <int> be;
    be = std::nullopt;

    return app.exec();
}
