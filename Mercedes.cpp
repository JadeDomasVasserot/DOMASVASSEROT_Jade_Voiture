#include <iostream>
#include <string>
#include "Voiture.h"
#include "Mercedes.h"
using namespace std; 
Mercedes::Mercedes() : Voiture() {

}
Mercedes::~Mercedes() {

}
Mercedes::Mercedes(string Nom, int Vitesse, int JourD,
	int MoisD, int AnneeD, int NombreP,bool Abs, bool Clim, bool SiegeEnf)
	:Voiture(Nom, Vitesse, JourD,
		MoisD, AnneeD, NombreP) {
	ABS = Abs;
	Climatisation = Clim;
	SiegeEnfant = SiegeEnf;
}

int Mercedes::CalculPrix() {
	if (2021 - AnneeDateImma < 1) {
		Prix = 25000 + 5000;
	}
	else if (2021 - AnneeDateImma < 3) {
		Prix = 20000 + 5000;
	}
	else if (2021 - AnneeDateImma > 3) { // ou juste else
		Prix = 15000 + 5000;
	}

	cout << "La voiture possede t-elle un ABS ? " << endl;
	cin >> ABS;
	cout << "La voiture possede t-elle une Climatisation ? " << endl;
	cin >> Climatisation;
	cout << "La voiture possede t-elle un siege enfant ? " << endl;
	cin >> SiegeEnfant;
	if (ABS == 1) {
		Prix = Prix + 500; // prix += 500
	}
	if (Climatisation == 1) {
		Prix = Prix + 1000;
	}
	if (SiegeEnfant == 1) {
		Prix = Prix + 1350;
	}
	return Prix;
}
void Mercedes::AfficherInfo() {
	cout << "Le nom de la voiture est : " << NomVoiture << " , sa vitesse est egale a : " << VitesseVoiture << " , sa plaque d'immatriculation a ete faite le : " <<endl 
		<< JourDateImma << "/" << MoisDateImma << "/" << AnneeDateImma << ", elle possede  : " << NombrePlace << "place et est a un prix de " << Prix << ". Possede l'option ABS(1/0)  :"
		<< ABS << " et l'option Climatisation(1/0) : " << Climatisation << endl << " et l'option SiegeEnfant(1/0) : " <<  SiegeEnfant << "." << endl;
}