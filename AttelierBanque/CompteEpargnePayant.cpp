#include "CompteEpargnePayant.h"

Banque::CompteEpargnePayant::CompteEpargnePayant(Devise *D, Devise *E, double d):CompteCourant(D, E), Compte(D), CompteEpargne(D, d), ComptePayant(D, E)
{
}

bool Banque::CompteEpargnePayant::debiter(Devise *D)
{
	return this->ComptePayant::debiter(D);
}
