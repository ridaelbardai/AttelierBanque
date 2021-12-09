#include "Euro.h"

#include<iostream>

Banque::Euro::Euro(double euro):Devise(euro)
{
}



void Banque::Euro::afficher()
{
	Devise::afficher();
	std::cout << "Euro";
}
