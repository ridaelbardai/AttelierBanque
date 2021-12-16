#include "Operations.h"
#include"Devise.h"
#include<string>
using namespace Banque;
int Operations::cpt = 0;
Banque::Operations::Operations(Devise* m, Compte* c) :num(++cpt)
{
	this->montant = m;
	this->c = c;
	this->date = __DATE__;
}

void Banque::Operations::detailsTransac() const
{
	cout << "\n\t\tDate : " << date << endl;
	cout << "\t\tTransaction num: " << this->num << endl;
	cout << "\t\tMontant de l'op :"; this->montant->afficher();
	cout << "\n\t\t---------------------\n";
}

Banque::Operations::~Operations()
{
	delete montant;
}

