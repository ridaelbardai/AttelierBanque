
#include "Compte.h"
#include<iostream>
#include<vector>
#include<typeinfo>
#include "OperationR.h"
#include "OperationV.h"
#include "Operations.h"
using namespace std;
using namespace Banque;

Devise* Banque::Compte::plafond = new Banque::Devise(2000);
int Banque::Compte::count = 0;

Banque::Compte::Compte(Devise* sol) :numcompte(++count)
{
	this->ref = new GC(1);
	this->solde = sol;
	this->historique = vector<Operations*>();
}

void Banque::Compte::crediter(Devise*M)
{
	*(this->solde) = *(this->solde) + *M;
	Operations* p = new OperationV(M, this);
	this->historique.push_back(p);
}

bool Banque::Compte::debiter(Devise*M)
{
	if (*(this->solde) >= *M && *M <= *(Compte::plafond))
	{
		*(this->solde) = *(this->solde) - *M;
		Operations* p = new OperationR(M, this);
		this->historique.push_back(p);
		return true;
	}
	return false;
}

Banque::Compte::Compte(const Compte& c) :numcompte(c.numcompte)
{
	this->ref = c.ref;
	this->ref->incre();
	this->titulaire = c.titulaire;

}

Compte Banque::Compte::operator=(const Compte&c)
{
	//v=v
	if (this != &c)
	{
		if (this->titulaire && this->ref && this->ref->decr() == 0)
		{
			delete this->ref;
			this->ref = 0;
		}
		this->solde = c.solde;
		this->ref = c.ref;
		this->titulaire = c.titulaire;
		this->ref->incre();
	}
	return *this;
}

bool Banque::Compte::verser(Devise* M, Compte& C)
{
	//il faut verser meme devise que la devise du solde recepteur
	if (typeid(M) == typeid(C.solde))
	{

		//this->solde->afficher();
		if (this->debiter(M) == true) {
			C.crediter(M);
			return true;
		}
		return false;
	}
}


void Banque::Compte::consulter() const
{
	cout << "\tnum compte=" << this->numcompte << endl;
	cout << "\tsolde : "; this->solde->afficher();
	cout << "\n\t******************";
	this->afficherhistorique();

}

void Banque::Compte::afficherhistorique() const
{
	for (int i = 0; i < historique.size(); i++)
	{
		historique[i]->afficherDetail();
	}
}

Compte::~Compte() {

	if (this->titulaire != nullptr)
	{
		for (int i = 0; i < this->historique.size(); i++)
		{
			delete historique[i];
		}
		delete solde;
		delete ref;
	}

}

Devise& Banque::Compte::pourcentage(double a) const
{
	Devise* res = new Devise(a);

	return *(this->solde)*(*res);
}

bool Banque::Compte::checkSup(Devise* s) const
{
	return (*(this->solde) >= *s);
}

void Banque::Compte::debiter_direct(Devise* M)
{
	*(this->solde) = *(this->solde) - (*M * 0.05);
}
