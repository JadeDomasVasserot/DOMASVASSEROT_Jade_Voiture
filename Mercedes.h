#include <iostream>
#include <string>
#include "Voiture.h"


class Mercedes : public Voiture
{
protected: 
	int ABS, Climatisation, SiegeEnfant;
public:
	Mercedes();
	~Mercedes();
	Mercedes(std::string Nom, int Vitesse, int JourD,
	int MoisD, int AnneeD, int NombreP, bool Abs, bool Clim, bool SiegeEnf);

	virtual int CalculPrix();
	void AfficherInfo();

};

