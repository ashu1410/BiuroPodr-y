#pragma once
#include <iostream>
#include <string>
#include "Wyjatki.h"
using namespace std;

class Klient
{
protected:
	string imie, nazwisko, destination;
	int dzien, miesiac, rok, dlugosc;
	static const double kwota;
	static int ID,count;
public:

	virtual ~Klient() {};
	Klient() {};
	string getImie();
	string getNazwisko();
	string getDestination();
	double getKwota();
	int getDzien();
	int getMiesiac();
	int getRok();
	int getDlugosc();
	int getId();
	static int getCount();

	void setDlugosc(int);
	void setImie(string);
	void setNazwisko(string);
	void setDestination(string);
	void setDzien(int);
	void setMiesiac(int);
	void setRok(int);

	virtual void wpisz(istream &);
	friend istream& operator>>(istream& in, Klient &is);

};