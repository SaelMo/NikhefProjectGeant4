#include "SteppingAction.hh"
#include "G4Step.hh"
#include "G4ios.hh"
#include "G4ParticleDefinition.hh"
#include "G4VProcess.hh"
#include "G4SystemOfUnits.hh"

// For starters, we shoot ask for the deposited energy and print them out on command line every step
void SteppingAction::UserSteppingAction(const G4Step *aStep) {
    G4double energyDeposit = aStep->GetTotalEnergyDeposit();
    G4cout << energyDeposit / keV << G4endl;
}
