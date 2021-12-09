#pragma once
#include "Operations.h"
namespace Banque {
	class OperationV : public Operations
	{
	public:
		OperationV(Devise* d, Compte* c);
		void afficherDetail()const override;

	private:
		static string libelle;
	};
};

