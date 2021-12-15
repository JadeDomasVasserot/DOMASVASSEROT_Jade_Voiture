#include <iostream>
#include <string>
#include "Voiture.h"


class Renault : public Voiture
{
protected:
	bool RadarDeRecul, PorteVelo;
public:
	Renault();
	~Renault();
	Renault(std::string Nom, int Vitesse, int JourD,
	int MoisD, int AnneeD, int NombreP, bool Radar, bool PorteV);
	virtual int CalculPrix();
	void AfficherInfo();
};

