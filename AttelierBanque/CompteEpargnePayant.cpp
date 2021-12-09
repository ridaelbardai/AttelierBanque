#include "CompteEpargnePayant.h"

Banque::CompteEpargnePayant::CompteEpargnePayant(Client *C, Devise *D, Devise *E, double d):CompteCourant(C, D, E), Compte(C, D), CompteEpargne(C, D, d), ComptePayant(C, D, E)
{
}

bool Banque::CompteEpargnePayant::debiter(Devise *D)
{
	return this->ComptePayant::debiter(D);
}
