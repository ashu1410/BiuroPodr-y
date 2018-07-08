#include "Wyjatki.h"

void Wyjatki::bladImie(string imie)
{
	string slowo;
	for (int i = 0; i < imie.length(); i++)
	{
		if (!isalpha(imie[i]))
		{
			slowo = Error(1);
			throw slowo;
		}
	}
}

void Wyjatki::bladNazwisko(string nazwisko)
{
	string slowo;
	for (int i = 0; i < nazwisko.length(); i++)
	{
		if (!isalpha(nazwisko[i]) && nazwisko[i] != ' ' && nazwisko[i] != '-')
		{
			slowo = Error(2);
			throw slowo;
		}
	}
			
}

void Wyjatki::bladKierunek(string kierunek)
{
	string slowo;
	
		if (kierunek != "Hiszpania" && kierunek != "hiszpania" && kierunek != "francja" && kierunek != "Francja" && kierunek != "Kostaryka" && kierunek != "kostaryka" )
		{
			slowo = Error(3);
			throw slowo;
		}

}


void Wyjatki::bladDzien(int dzien)
{
	string slowo;
	if (dzien < 1 || dzien >= 31)
	{
		slowo = Error(4);
		throw slowo;
	}
}


void Wyjatki::bladMiesiac(int miesiac)
{
	string slowo;
	if (miesiac < 1 || miesiac>12)
	{
		slowo = Error(5);
		throw slowo;
	}
}


void Wyjatki::bladRok(int rok)
{
	string slowo;
	if (rok > 2020 || rok < 2017)
	{
		slowo = Error(6);
		throw slowo;
	}
}

void Wyjatki::bladDlugosc(int dlugosc)
{
	string slowo;
	if (dlugosc < 0 || dlugosc>50)
	{
		slowo = Error(8);
		throw slowo;
	}
}

void Wyjatki::bladPlik()
{
	string slowo;
	slowo = Error(7);
	throw slowo;
}


string Wyjatki::Error(int numer)
{
	switch (numer)
	{
	case 1:
		return "B³¹d w imieniu";
		break;
	case 2:
		return "B³¹d w nazwisku";
		break;
	case 3:
		return "B³¹d w wyborze kraju";
		break;
	case 4:
		return "B³¹d w dniu";
		break;
	case 5:
		return "B³ad w miesi¹cu";
		break;
	case 6:
		return "B³¹d w roku";
		break;
	case 7:
		return "Problem z plikiem";
		break;
	case 8:
		return "D³ugoœæ z³a";
		break;
	default:
		return "Porobi³eœ";
		break;
	}
};