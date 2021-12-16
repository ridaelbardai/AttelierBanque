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
}

void Client::Afficher() 
{
	cout << "nom :" << this->nom << "\n" << "prenom:" << this->prenom << "\n" << "Adresse:" << this->adresse << endl;
	cout << "_________________________" << endl;
}
