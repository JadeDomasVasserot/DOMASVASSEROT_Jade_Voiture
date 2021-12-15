#include <iostream>
#include <string>
#include "Voiture.h"
#include "Renault.h"
using namespace std;
Renault::Renault() : Voiture() {

}
Renault::~Renault() {

}
Renault::Renault(string Nom, int Vitesse, int JourD,
	int MoisD, int AnneeD, int NombreP, bool Radar, bool PorteV) :
	Voiture(Nom, Vitesse, JourD,
		MoisD, AnneeD, NombreP) {
	RadarDeRecul = Radar;
	PorteVelo = PorteV;
}
int Renault::CalculPrix() {
	if (2021 - AnneeDateImma < 1) {
		Prix = 25000+3500;
	}
	else if (2021 - AnneeDateImma < 3) {
		Prix = 20000 + 3500;
	}
	else if (2021 - AnneeDateImma > 3) { // ou juste else
		Prix = 15000 + 3500;
	}

	cout << "La voiture possede t-elle un Radar ? " << endl;
	cin >> RadarDeRecul;
	cout << "La voiture possede t-elle un Porte Velo ? " << endl;
	cin >> PorteVelo;
	if (RadarDeRecul == 1) {
		Prix = Prix + 2650; // prix += 2650
	}
	if (PorteVelo == 1) {
		Prix = Prix + 890;
	}
	return Prix;
}
void Renault::AfficherInfo() {
	cout << "Le nom de la voiture est : " << NomVoiture << " , sa vitesse est egale a : " << VitesseVoiture << " , sa plaque d'immatriculation a ete faite le : "
		<< JourDateImma << "/" << MoisDateImma << "/" << endl << AnneeDateImma << ", elle possede  : " << NombrePlace << "place et est à un prix de " << Prix << ". Possede l'option Radar(1/0)  :"
		<< endl << RadarDeRecul << " et l'option Porte-velo(1/0) : " << PorteVelo<< "." << endl;
}
