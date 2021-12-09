#pragma once
#include "Devise.h"

namespace Banque {

	class Dollar :
		public Devise
	{
	public:
		Dollar(double dollar);
		void afficher();
	
	};

};
