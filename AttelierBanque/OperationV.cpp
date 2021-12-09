#include "OperationV.h"
Banque::OperationV::OperationV(Devise* d, Compte* c)
	:Operations(d, c)
{
}


void Banque::OperationV::afficherDetail() const
{
	this->detailsTransac();
}
