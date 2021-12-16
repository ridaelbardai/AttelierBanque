#pragma once
#include "Compte.h"
namespace Banque {
	class CompteCourant :virtual public Compte
	{

	public:
		CompteCourant(Devise*, Devise*);
		bool debiter(Devise* M);

	private:
		Devise *Decouvert;
	};

};