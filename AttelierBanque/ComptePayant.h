#pragma once
#include "CompteCourant.h"
namespace Banque {

	class ComptePayant : virtual public CompteCourant
	{
	public:
		ComptePayant(Devise*, Devise*);
		bool debiter(Devise*D);
		void crediter(Devise* M);
	};
};

