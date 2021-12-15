#pragma once
#include <iostream>
#include <string>

class Voiture
{
protected:
	std::string NomVoiture;
	int VitesseVoiture, JourDateImma, MoisDateImma, AnneeDateImma, NombrePlace, Prix;

public:
	//Constructeur
	Voiture();
	~Voiture();
	Voiture(std::string Nom,int Vitesse, int JourD,
	int MoisD, int AnneeD, int NombreP);
	// Méthodes
	void Accelerer(int v);
	void Freiner(int v);
	void AfficherInfo();
	void SetInfo(std::string Nom, int Vitesse, int JourD,
		int MoisD, int AnneeD, int NombreP);
	int GetVitesse() {
		return VitesseVoiture;
	}
	virtual int CalculPrix();

};

