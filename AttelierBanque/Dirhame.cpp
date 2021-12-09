#include "Dirhame.h"
#include<iostream>
Banque::Dirhame::Dirhame(double dirhame):Devise(dirhame)
{
}

void Banque::Dirhame::afficher()
{
	Devise::afficher();
	std::cout << "DH";
}
