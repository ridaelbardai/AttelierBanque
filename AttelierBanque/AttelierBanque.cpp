
#include <iostream>
#include"Client.h"
#include"Compte.h"
#include"Devise.h"
#include"Dollar.h"
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

	Dollar* s1 = new Dollar(9000);
	Dollar* s2 = new Dollar(300);
	Dollar* s3 = new Dollar(200);

	CompteEpargnePayant* cmpt1 = new CompteEpargnePayant(c1, s1, s3, 2);
	CompteEpargnePayant* cmpt2 = new CompteEpargnePayant(c2, s1, s3, 2);

	Dirhame* mad1 = new Dirhame(70);

	mad1->afficher();
	Dollar* nvDoll = mad1->Convert2Dollar();
	nvDoll->afficher();

	delete c1, c2;
	delete s1, s2, s3;


}