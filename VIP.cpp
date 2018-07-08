#include "VIP.h"

VIP::VIP(string imie, string nazwisko, string destination, int dzien, int miesiac, int rok, int dlugosc)
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

VIP::~VIP()
{
	this->count--;
}

VIP::VIP()
{
	imie = nazwisko = destination = "brak";
	dzien = miesiac = rok = dlugosc = 0;
	this->ID++;
	this->count++;
}


double VIP::getKwota()
{
	if (destination == "Hiszpania" || destination == "hiszpania")
	{
		return Klient::getKwota() * 4*dlugosc;
	}
	else if (destination == "Francja" || destination == "francja")
	{
		return Klient::getKwota() * 6*dlugosc;
	}
	else if (destination == "Kostaryka" || destination == "kostaryka")
	{
		return Klient::getKwota() * 8*dlugosc;
	}
}


VIP::VIP(const VIP&obiekt)
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

