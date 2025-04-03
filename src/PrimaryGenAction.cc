#include "PrimaryGenAction.hh"
#include "G4ParticleTable.hh"
#include "G4SystemOfUnits.hh"
#include "G4GeneralParticleSource.hh"
#include "Randomize.hh" // Include for random number generation

namespace NikhefProject {

PrimaryGenAction::PrimaryGenAction(){
  G4double particleEnergy = 2000 * keV;
  G4ThreeVector particlePosition = G4ThreeVector(0.1 * m, 0.1 * m, 0.1 * m);

  fParticleGun = new G4GeneralParticleSource();
  fParticleGun->SetParticleDefinition(G4ParticleTable::GetParticleTable()->FindParticle("gamma")); 

  auto energyDist = fParticleGun->GetCurrentSource()->GetEneDist();
  energyDist->SetMonoEnergy(particleEnergy);

  fParticleGun->SetParticlePosition(particlePosition);
}

}