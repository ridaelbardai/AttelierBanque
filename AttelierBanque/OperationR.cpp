#include "OperationR.h"
#include"Operations.h"

string Banque::OperationR::libelle = "-";
Banque::OperationR::OperationR(Devise* d, Compte* c)
	:Operations(d, c)
{
}

void Banque::OperationR::afficherDetail() const
{
	this->detailsTransac();
}

