#pragma once
#include <iostream>
#include <string>

using namespace std;


class Wyjatki {
public:
	static void bladImie(string);
	static void bladNazwisko(string);
	static void bladKierunek(string);
	static void bladDzien(int);
	static void bladMiesiac(int);
	static void bladRok(int);
	static void bladDlugosc(int);
	static string Error(int);
	static void bladPlik();
	Wyjatki() {};
	~Wyjatki() {};
};