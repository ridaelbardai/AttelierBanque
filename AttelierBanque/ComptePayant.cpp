#include "ComptePayant.h"


Banque::ComptePayant::ComptePayant(Client *C, Devise *D, Devise *E) :CompteCourant(C, D, E),Compte(C,D)
{
}

bool Banque::ComptePayant::debiter(Devise * D)
{
	if (!this->CompteCourant::debiter(D))return false;
	this->debiter_direct(D);
	return true;
}

void Banque::ComptePayant::crediter(Devise * M)
{
	this->CompteCourant::crediter(M);
	this->debiter_direct(M);
}
