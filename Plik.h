#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include "Klient.h"
using namespace std;
class Plik
{
public:
	static void zapisz(Klient *);
	Plik() {};
	~Plik() {};
};

