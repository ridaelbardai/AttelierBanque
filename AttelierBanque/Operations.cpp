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
	cout << "Date : " << date << endl;
	cout << "Transaction num: " << this->num << endl;
	cout << "Montant de l'op :"; this->montant->afficher();
	cout << "\n--------------------------------\n\n";
}

