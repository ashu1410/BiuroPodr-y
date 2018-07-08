#include "Student.h"

Student::Student()
{
	imie = nazwisko = destination = "brak";
	dzien = miesiac = rok = dlugosc = 0;
	this->ID++;
	this->count++;
}

Student::~Student()
{
	this->count--;
}

Student::Student(string imie, string nazwisko, string destination, int dzien, int miesiac, int rok, int dlugosc)
{
	{
		this->imie = imie;
		this->nazwisko = nazwisko;
		this->destination = destination;
		this->dzien = dzien;
		this->miesiac = miesiac;
		this->rok = rok;
		this->dlugosc = dlugosc;
		this->ID++;
		this->count++;
	}
}



Student::Student(const Student&obiekt)
{
	this->ID = obiekt.ID;
	this->imie = obiekt.imie;
	this->nazwisko = obiekt.nazwisko;
	this->destination = obiekt.destination;
	this->dzien = obiekt.dzien;
	this->miesiac = obiekt.miesiac;
	this->rok = obiekt.rok;
	this->dlugosc = obiekt.dlugosc;
	this->count++;
}
double Student::getKwota()

{
	if (destination == "Hiszpania" || destination == "hiszpania")
	{
		return (Klient::getKwota() * 3)*dlugosc;
	}
	else if (destination == "Francja" || destination == "francja")
	{
		return Klient::getKwota() * 5 * dlugosc ;
	}
	else if (destination == "Kostaryka" || destination == "kostaryka")
	{
		return Klient::getKwota() * 7 * dlugosc;
	}
}