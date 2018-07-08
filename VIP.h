#pragma once
#include "Klient.h"
#include "Wyjatki.h"
#include "Grupa.h"

class VIP	:public Klient
{
protected:
	friend void wypisz(VIP&);
	string bajer1 = " OL INKLUSIW";
	string bajer2 = "Masa¿ egzotyczny";
public:
	VIP();
	VIP(string,string,string,int,int,int,int);
	~VIP();
	VIP(const VIP&);
	double getKwota();
}; 