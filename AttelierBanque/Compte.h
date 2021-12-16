#pragma once

#include"Client.h"
#include "Devise.h"
#include "GC.h"

namespace Banque {
	class Operations;
	class Compte
	{

		//attributs
	private:
		const int numcompte;
		static int count;
		Client* titulaire; //agregation
		Devise* solde;
		static Devise* plafond;
		GC* ref;
		vector<Operations*> historique;

		// Methodes
	public:
		
		Compte(Devise*); // avec parametres
		Compte(const Compte&);
		Compte operator=(const Compte&);

		virtual bool debiter(Devise*M);
		virtual void crediter(Devise* M);
		bool verser(Devise* M, Compte& C);
		void consulter()const;
		void afficherhistorique()const;
		~Compte();
	protected: Devise& pourcentage(double a) const;
	protected: bool checkSup(Devise *s) const;
			   void debiter_direct(Devise* M);



	};

};