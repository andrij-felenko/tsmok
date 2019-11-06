#ifndef SENSE_CONNECTOR_TYPES
#define SENSE_CONNECTOR_TYPES

namespace Tsmok::Sensory {
class SenseConnectorTypes
{
public:
    SenseConnectorTypes() = default;

    enum class FiveBase {
        Visual = 0xA0, // sight
        Auditory,      // hearing
        Gustatory,     // taste
        Olfactory,     // smell
        Tactile,       // touch
    };

    enum class HumanCeption {
        EquilibrioCeption = 0xB0, // Balance or Vestibular
        ThermoCeption,
        ProprioCeption,           // kinesthetic sense, movement and relative positions of the parts of the body
        NociCeption,              // Physiological pain sense
        MagnetoCeption,
        SexualStimulus,
    };

    enum class Internal {
        Hunger = 0xC0,
        PulmonaryStretch,
        ChemoReceptors,     // sugar, drugs, hormones
        CutaneousReceptors,
        Gastrointestinal,
    };

    enum class NoSpecific {
        ChronoCeption = 0xD0,
        Agency,               // the subjective feeling of having chosen a particular action
        Familiarity,          // recognition memory
    };

    enum class NoHuman {
        Echolocation = 0xE0,
        ElectroReception,
        HygroReception,
        InfaredSense,
    };
};
}

#endif //SENSE_CONNECTOR_TYPES
