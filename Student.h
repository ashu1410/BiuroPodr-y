#pragma once
#include "Klient.h"
#include "Wyjatki.h"
#include "Grupa.h"

class Student	:public Klient
{
protected:
	friend void wypisz(Student &);
	string bajer1 = "OPEN BAR";
public:
	Student();
	Student(string, string, string, int, int, int, int);
	~Student();
	Student(const Student&);
	double getKwota();
};