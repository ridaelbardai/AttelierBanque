#pragma once
#include"CompteEpargne.h"
#include"ComptePayant.h"
namespace Banque {
	class CompteEpargnePayant :virtual public CompteEpargne, virtual public ComptePayant
	{
	public:
		CompteEpargnePayant(Client*, Devise*, Devise*, double);
		bool debiter(Devise*);
	};
};
