#pragma once

#include <iostream>
#include  <vector>

#include<string>

using namespace std;

namespace Banque {
	class Compte;
	class Client
	{
		// attributs
	private:
		string nom;
		string prenom;
		string adresse;
		vector<Compte*> listeComptes; //composition

	public:
		Client(string, string, string);
		void ajouterCompte(Compte* c);
		void Afficher();
		~Client();
	};
};
