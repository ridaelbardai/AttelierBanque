
#include <iostream>
#include"Client.h"
#include"Compte.h"
#include"Devise.h"
#include"Dollar.h"
#include"Euro.h"
#include"Dirhame.h"
#include"CompteCourant.h"
#include"CompteEpargne.h"
#include"CompteEpargnePayant.h"
#include"ComptePayant.h"
#include<string>
using namespace std;
using namespace Banque;
int main()
{

	Dollar* s11 = new Dollar(7000);
	Dollar* s12 = new Dollar(9000);
	Dollar* s2 = new Dollar(300);
	Dollar* s3 = new Dollar(200);

	Compte* cmpt1 = new CompteEpargnePayant(s11, s3, 2);
	Compte* cmpt2 = new CompteEpargnePayant(s12, s3, 2);

	Client* c1 = new Client("toto", "toto", "addresse toto");
	Client* c2 = new Client("momo", "momo", "addresse momo");

	Dirhame* mad1 = new Dirhame(70);

	c1->ajouterCompte(cmpt1);
	c2->ajouterCompte(cmpt2);

	cmpt1->crediter(s2);

	cmpt1->verser(s2, *cmpt2);
	
		c1->Afficher();
		c2->Afficher();

	cout << "\n\n\n\n";
	delete c1, c2;
	
}