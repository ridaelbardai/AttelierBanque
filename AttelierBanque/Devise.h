#pragma once
namespace Banque {
	class Dollar;
	class Euro;
	class Dirhame;
	class Devise
	{
	private:
		double valeur;
	public:
		Devise(double val);
		Devise& operator+(const Devise& M) const;
		Devise& operator-(const Devise& M) const;
		Devise& operator*(const Devise& M) const;
		bool operator<=(const Devise& M)const;
		bool operator>=(const Devise& M) const;
		void afficher() const;
		virtual Dollar* Convert2Dollar()const;
		virtual Euro* Convert2Euro()const;
		virtual Dirhame* Convert2MAD()const;
	};
};
