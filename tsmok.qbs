import qbs

Project {
    SubProject { filePath: "gui/gui.qbs" }
    SubProject { filePath: "launcher/launcher.qbs" }
    SubProject { filePath: "library/library.qbs" }
    SubProject { filePath: "library_graphic/library_graphic.qbs" }
    SubProject { filePath: "pet/pet.qbs" }
    SubProject { filePath: "sensory/sensory.qbs" }
    SubProject { filePath: "systema_nevrosum/systema_nevrosum.qbs" }
    SubProject { filePath: "transmitter/transmitter.qbs" }
}
