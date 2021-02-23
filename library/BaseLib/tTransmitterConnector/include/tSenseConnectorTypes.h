#ifndef TSENSE_CONNECTOR_TYPES
#define TSENSE_CONNECTOR_TYPES

#include <QtCore/QObject>
#include "senseConnectorTypes.h"

namespace Tsmok::Sensory {
class TSenseConnectorTypes : public QObject, public SenseConnectorTypes
{
    Q_OBJECT
    Q_ENUM(FiveBase)
    Q_ENUM(HumanCeption)
    Q_ENUM(Internal)
    Q_ENUM(NoHuman)
    Q_ENUM(NoSpecific)
public:
    TSenseConnectorTypes() = default;
};
}

#endif //TSENSE_CONNECTOR_TYPES_
