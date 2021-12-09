#pragma once
#include "Devise.h"
namespace Banque {

class Dirhame :
	public Devise
{
public:
	Dirhame(double dirhame);
	void afficher();
};

};
