#pragma once

#include<iostream> 
#include<string>
using namespace std;
namespace Banque
{
	class  Devise;
	class  Compte;

	class Operations
	{
	public:
		Operations(Devise*, Compte* c);
		virtual void afficherDetail()const=0;
		void detailsTransac()const;
	private:
		const int num;
		static int cpt;
		Devise* montant;
		string date;
		Compte* c;


	};
};
