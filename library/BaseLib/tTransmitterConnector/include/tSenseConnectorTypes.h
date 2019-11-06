#ifndef TSENSE_CONNECTOR_TYPES
#define TSENSE_CONNECTOR_TYPES

#include <QtCore/QObject>
#include "senseConnectorTypes.h"

namespace Tsmok::Sensory {
class TSenseConnectorTypes : public QObject, public SenseConnectorTypes
{
    Q_OBJECT
    Q_ENUMS(FiveBase)
    Q_ENUMS(HumanCeption)
    Q_ENUMS(Internal)
    Q_ENUMS(NoHuman)
    Q_ENUMS(NoSpecific)
public:
    TSenseConnectorTypes() = default;
};
}

#endif //TSENSE_CONNECTOR_TYPES_
