#include "Klient.h"

int Klient::ID = 0;
double const Klient::kwota = 200;
int Klient::count = 0;



string Klient::getImie()
{
	return imie;
}

void Klient::setImie(string _imie)
{
	this->imie = _imie;
}

string Klient::getNazwisko()
{
	return nazwisko;
}

void Klient::setNazwisko(string _nazwisko)
{
	this->nazwisko = _nazwisko;
}

string Klient::getDestination()
{
	return destination;
}

void Klient::setDestination(string kierunek)
{
	this->destination = kierunek;
}

double Klient::getKwota()
{
	return kwota;
}


int Klient::getDzien()
{
	return dzien;
}

void Klient::setDzien(int _dzien)
{
	this->dzien = _dzien;
}

int Klient::getMiesiac()
{
	return miesiac;
}

void Klient::setMiesiac(int _miesiac)
{
	this->miesiac = _miesiac;
}

int Klient::getRok()
{
	return rok;
}

void Klient::setRok(int _rok)
{
	this->rok = _rok;
}

int Klient::getDlugosc()
{
	return dlugosc;
}

void Klient::setDlugosc(int _dl)
{
	this->dlugosc = _dl;
}

int Klient::getId()
{
	return ID;
}

int Klient::getCount()
{
	return count;
}



void Klient::wpisz(istream &is) {
	string zmienna;
	int liczba;
	try
	{
		cout << "Podaj imie: ";
		is >> zmienna;
		Wyjatki::bladImie(zmienna);
		this->imie = zmienna;
		cout << "Podaj nazwisko: ";
		is >> zmienna;
		Wyjatki::bladNazwisko(zmienna);
		this->nazwisko = zmienna;
		cout << "Podaj cel podró¿y: ";
		is>> zmienna;
		Wyjatki::bladKierunek(zmienna);
		this->destination = zmienna;
		cout << "Podaj kolejno date w formacie dd mm rrrr: ";
		is >> liczba;
		Wyjatki::bladDzien(liczba);
		this->dzien = liczba;
		is >> liczba;
		Wyjatki::bladMiesiac(liczba);
		this->miesiac = liczba;
		is >> liczba;
		Wyjatki::bladRok(liczba);
		this->rok = liczba;
		cout << "Ile dni potrwa wyjazd :";
		is >> liczba;
		Wyjatki::bladDlugosc(liczba);
		this->dlugosc = liczba;
	}
	catch (string &zmienna)
	{
		cout << zmienna << endl;
	}
}


