// DOMASVASSEROT_Jade_Voiture.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include "Voiture.h"
#include "Mercedes.h"
#include "Renault.h"

using namespace std;
/* */
int main()
{
	Voiture V1();
	Voiture V2("Voiture quelconque", 150, 5,12,2002, 5);
	V2.Accelerer(25);
	cout << V2.GetVitesse() << endl;
	V2.Freiner(35);
	cout << V2.GetVitesse() << endl;
	V2.CalculPrix();
	V2.AfficherInfo();
	Mercedes M1();
	Mercedes M2("Voiture Renault", 190, 8, 1, 2012, 6, 1, 1, 0);
	M2.Accelerer(25);
	cout << M2.GetVitesse() << endl;
	M2.Freiner(35);
	cout << M2.GetVitesse() << endl;
	M2.CalculPrix();
	M2.AfficherInfo();
	Renault R1();
	Renault R2("Voiture Renault", 120, 16, 3, 2015, 4, 1, 1);
	R2.Accelerer(25);
	cout << R2.GetVitesse() << endl;
	R2.Freiner(35);
	cout << R2.GetVitesse() << endl;
	R2.CalculPrix();
	R2.AfficherInfo();
	string n;
	int v(0), j(0), m(0), a(0), np(0);
	Voiture V3(n, v, j, m, a, np);
	V3.SetInfo(n, v, j, m, a, np);
	V3.CalculPrix();
	V3.Accelerer(25);
	cout << V3.GetVitesse() << endl;
	V3.Freiner(35);
	cout << V3.GetVitesse() << endl;
	V3.AfficherInfo();

return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
