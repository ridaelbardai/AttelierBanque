#pragma once
#include "Devise.h"

namespace Banque {
	class Euro :
		public Devise
	{
	public:
		Euro(double euro);
		//Dollar* Convert2Dollar()const override;

		void afficher();
	};

}
