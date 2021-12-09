#pragma once

#include "Operations.h"
namespace Banque {
	class OperationR : public Operations
	{
	public:
		OperationR(Devise* d, Compte*c);
		void afficherDetail()const override;

	private:
		static string libelle;
	};
}

