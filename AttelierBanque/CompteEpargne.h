#pragma once
#include "Compte.h"
namespace Banque {

	class CompteEpargne :virtual public Compte
	{
	public:
		CompteEpargne(Client* c, Devise* s, double t);
		void calculInteret();

	private:
		double tauxInteret;
	};
};
