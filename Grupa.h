#pragma once

#include "Klient.h"
#include "Student.h"
#include "VIP.h"


template <int liczba,class Typ> class Grupa
{
public:
	Typ *tablica = new Typ[liczba];

	void wypisz()
	{
		for (int i = 0; i < liczba; i++)
		{
			cout << "Dane grupy klientów: " << tablica[i].getImie() << " " << tablica[i].getNazwisko() << endl;
		}
	}
};

typedef Grupa <10, class VIP> GrupaVip10;
typedef Grupa <5, class Student> Grupastud5;