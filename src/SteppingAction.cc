#include "SteppingAction.hh"
#include "G4Step.hh"
#include "G4ios.hh"
#include "G4ParticleDefinition.hh"
#include "G4VProcess.hh"
#include "G4SystemOfUnits.hh"

namespace NikhefProject {

void SteppingAction::UserSteppingAction(const G4Step *aStep) {
    G4double kineticEnergy = aStep->GetPreStepPoint()->GetKineticEnergy();
    G4cout << kineticEnergy / keV << G4endl;
}

}
