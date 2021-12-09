#include "Dollar.h"
#include<iostream>
Banque::Dollar::Dollar(double dollar):Devise(dollar)
{
}
void Banque::Dollar::afficher()
{
	Devise::afficher();
	std::cout << "$";
}
