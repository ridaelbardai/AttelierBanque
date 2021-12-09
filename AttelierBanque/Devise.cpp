#include"Devise.h"
#include"Dirhame.h"
#include"Dollar.h"
#include"Euro.h"
#include<iostream>
#include<typeinfo>
#include<assert.h>
using namespace std;
using namespace Banque;
Devise::Devise(double val)
{
	this->valeur = val;
}

Devise& Devise::operator+(const Devise& M) const
{
	Devise* res = new Devise(this->valeur + M.valeur);
	return *res;
}

Devise& Devise::operator-(const Devise& M) const
{
	Devise* res = new Devise(this->valeur - M.valeur);
	return *res;
}

Devise& Banque::Devise::operator*(const Devise& M) const
{
	Devise* res = new Devise(M.valeur * this->valeur);
	return *res;
}

bool Devise::operator<=(const Devise& M) const
{
	return this->valeur <= M.valeur;
}

bool Devise::operator>=(const Devise& M) const
{
	return this->valeur >= M.valeur;
}

void Devise::afficher() const
{
	cout << this->valeur;
}

Dollar * Banque::Devise::Convert2Dollar() const
{
	assert(typeid(*this) != typeid(Dollar));
	double nvSolde;
	if (typeid(*this) == typeid(Euro)) nvSolde = this->valeur * 1, 13;
	if (typeid(*this) == typeid(Dirhame)) nvSolde = this->valeur * 0.11;
	Dollar* nv = new Dollar(nvSolde);
	return nv;
}

Euro * Banque::Devise::Convert2Euro() const
{
	assert(typeid(*this) != typeid(Euro));
	double nvSolde;
	if (typeid(*this) == typeid(Dollar)) nvSolde = this->valeur * 0.89;
	if (typeid(*this) == typeid(Dirhame)) nvSolde = this->valeur * 0.096;
	Euro* nv = new Euro(nvSolde);
	return nv;
}

Dirhame * Banque::Devise::Convert2MAD() const
{
	assert(typeid(*this) != typeid(Dirhame));
	double nvSolde;
	if (typeid(*this) == typeid(Dollar)) nvSolde = this->valeur * 9.25;
	if (typeid(*this) == typeid(Euro)) nvSolde = this->valeur * 10.45;
	Dirhame* nv = new Dirhame(nvSolde);
	return nv;
}

