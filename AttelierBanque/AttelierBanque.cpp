
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
	Client* c1 = new Client("toto", "toto", "addresse toto");
	Client* c2 = new Client("momo", "momo", "addresse momo");

	Dollar* s11 = new Dollar(9000);
	Dollar* s12 = new Dollar(9000);
	Dollar* s2 = new Dollar(300);
	Dollar* s3 = new Dollar(200);

	CompteEpargnePayant* cmpt1 = new CompteEpargnePayant(c1, s11, s3, 2);
	CompteEpargnePayant* cmpt2 = new CompteEpargnePayant(c2, s12, s3, 2);

	Dirhame* mad1 = new Dirhame(70);

	cmpt1->consulter();
	cmpt2->consulter();

	cmpt1->verser(s2, *cmpt2);
	cout << "\n\n\t-- apres versement --\n\n";
	cout << "\tle transfert se fait entre deux comptes epargne payants\n\n";

	cmpt1->consulter();
	cmpt2->consulter();

	cout << "\navant passage a l'euro\t";
	s11->afficher();
	Euro *e1 = s11->Convert2Euro();
	cout << "\napres echange en euro\t";

	e1->afficher();

		
	cout << "\n\n\n\n";
	delete c1, c2;
	delete s11, s2, s3;

}