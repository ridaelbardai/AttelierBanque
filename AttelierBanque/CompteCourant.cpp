#include "CompteCourant.h"
#include <assert.h>
Banque::CompteCourant::CompteCourant(Devise*s, Devise*d) : Compte(s)
{
	assert(*s >= *d);
	this->Decouvert = d;
}

bool Banque::CompteCourant::debiter(Devise* M)
{
	if (this->checkSup(&(*M + *(this->Decouvert))))
		return this->Compte::debiter(M);
	return false;
}
