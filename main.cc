#include "G4IOS.hh"

int main(int argc, char** argv){
    if (argc < 2) {
        G4cout << "Usage: " << argv[0] << " <input file>" << G4endl;
        return 1;
        }
    G4String name = argv[1];
    std::G4String
    G4cout << name << ": Hello World!" << G4endl;
    return 0;
}