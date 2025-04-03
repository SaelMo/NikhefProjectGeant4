#include "DetConstruction.hh"
#include "G4NistManager.hh"
#include "G4Box.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4Tubs.hh"
#include "G4MaterialPropertiesTable.hh"
#include "G4SystemOfUnits.hh"
#include "G4OpticalPhysics.hh"

namespace NikhefProject {

G4VPhysicalVolume* DetConstruction::Construct() {
    // Add a background material
    G4Box *solidWorld = new G4Box("solidWorld", 0.5 * m, 0.5 * m, 0.5 * m);
    G4Material *air = G4NistManager::Instance()->FindOrBuildMaterial("G4_AIR");

    G4LogicalVolume *logicWorld = new G4LogicalVolume(solidWorld, air, "logicWorld");

    G4VPhysicalVolume *physWorld = new G4PVPlacement(nullptr, G4ThreeVector(), logicWorld,
        "physWorld", nullptr, false, 0);

    return physWorld;
}

}