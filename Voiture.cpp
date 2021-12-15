#include <iostream>
#include <string>
#include "Voiture.h"

using namespace std;
Voiture::Voiture() {

}
Voiture::~Voiture() {

}
Voiture::Voiture(string Nom,
	int Vitesse, int JourD, int MoisD, int AnneeD,
	int NombreP) {
	NomVoiture = Nom;
	VitesseVoiture = Vitesse;
	JourDateImma = JourD;
	MoisDateImma = MoisD;
	AnneeDateImma = AnneeD;
	NombrePlace = NombreP;
	
}
void Voiture::Accelerer(int v) { // v --> vitesse accélérée

	VitesseVoiture = VitesseVoiture + v;
}
void Voiture::Freiner(int v) { // v --> vitesse freinée

	VitesseVoiture = VitesseVoiture - v;
}
void Voiture::AfficherInfo() {
	cout << "Le nom de la voiture est : " << NomVoiture << " , sa vitesse est egale a : " << VitesseVoiture << endl << " , sa plaque d'immatriculation a ete faite le : "
		<< JourDateImma << "/" << MoisDateImma << "/" << AnneeDateImma << ", elle possede  : " << NombrePlace << endl << "place et est a un prix de " << Prix << "." << endl;
}
void Voiture::SetInfo(string Nom, int Vitesse, int JourD,
	int MoisD, int AnneeD, int NombreP) {
	cout << "Entrer le nom de votre voiture : " << endl;
	cin >> Nom;
	cout << "Entrer la vitesse de votre voiture : " << endl;
	cin >> Vitesse;
	cout << "Entrer le jour d'immatriculation de votre voiture : " << endl;
	if (JourD <=31){
	cin >> JourD;
	}
	cout << "Entrer le mois d'immatriculation de votre voiture : " << endl;
	if (MoisD <= 12) {
		cin >> MoisD;
	}
	cout << "Entrer l'année d'immatriculation de votre voiture : " << endl;
	cin >> AnneeD;
	cout << "Entrer le nombre de place de votre voiture : " << endl;
	cin >> NombreP;

}
int Voiture::CalculPrix() {
	if (2021 - AnneeDateImma < 1) {
		Prix = 25000 ;
	}
	else if (2021 - AnneeDateImma < 3) {
		Prix = 20000 ;
	}
	else if (2021 - AnneeDateImma > 3) { // ou juste else
		Prix = 15000 ;
	}
	
	return Prix;
}