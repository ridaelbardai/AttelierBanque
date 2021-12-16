#pragma once
#include"CompteEpargne.h"
#include"ComptePayant.h"
namespace Banque {
	class CompteEpargnePayant : public CompteEpargne, public ComptePayant
	{
	public:
		CompteEpargnePayant(Devise*, Devise*, double);
		bool debiter(Devise*);
	};
};
