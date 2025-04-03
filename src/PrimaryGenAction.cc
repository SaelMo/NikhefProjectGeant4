#include "PrimaryGenAction.hh"
#include "G4ParticleTable.hh"
#include "G4SystemOfUnits.hh"
#include "G4GeneralParticleSource.hh"

// For starters, we shoot a geantino (interactionless test particle) with one MeV of energy from the origin
PrimaryGenAction::PrimaryGenAction(){
  G4double particleEnergy = 1000 * keV;
  G4ThreeVector particlePosition = G4ThreeVector(0.0 * m, 0.0 * m, 0.0 * m);
  fParticleGun = new G4GeneralParticleSource();
  fParticleGun->SetParticleDefinition(G4ParticleTable::GetParticleTable()->FindParticle("geantino")); 
  auto energyDist = fParticleGun->GetCurrentSource()->GetEneDist();
  energyDist->SetMonoEnergy(particleEnergy);
  fParticleGun->SetParticlePosition(particlePosition);
}
