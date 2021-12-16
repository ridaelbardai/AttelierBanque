#include"Client.h"
#include"Compte.h"
#include <iostream>
#include<string>
using namespace Banque;
using namespace std;

Banque::Client::Client(string n, string p, string a)
{
	this->nom = n;
	this->prenom = p;
	this->adresse = a;
	this->listeComptes = vector<Compte*>();
}

void Banque::Client::ajouterCompte(Compte * c)
{
	this->listeComptes.push_back(c);
}

void Client::Afficher()
{
	cout << "_______________________________" << endl;
	cout << "nom :" << this->nom << "\n" << "prenom:" << this->prenom << "\n" << "Adresse:" << this->adresse << endl;
	cout << "_______________________________" << endl;
	for (int i = 0; i < this->listeComptes.size(); i++)
	{
		listeComptes[i]->consulter();
	}
}

Banque::Client::~Client()
{
	this->listeComptes.clear();
}
