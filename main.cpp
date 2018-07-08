#include "Klient.h"
#include "VIP.h"
#include "Student.h"
#include <cstdlib>
#include <iostream>
#include "Plik.h"
#include "Grupa.h"
using namespace std;

void wypisz(VIP &obiekt)
{
	cout <<"Klient numer:  "<< obiekt.getCount()<<" ID "<<obiekt.getId()<<" Imie : " << obiekt.getImie() << " Nazwisko : " << obiekt.getNazwisko() << "\nCel podró¿y : " << obiekt.getDestination() << " Data wyjazdu : " << obiekt.getDzien() << "." << obiekt.getMiesiac() << "." << obiekt.getRok() << " D³ugoœæ trwania wycieczki " << obiekt.getDlugosc() <<"dni Dodatkowe atrakcje : "<< obiekt.bajer1 << " "<< obiekt.bajer2<<" Nale¿noœæ : " << obiekt.getKwota() << endl;
}

void wypisz(Student &obiekt)
{
	cout <<"Klient numer: "<< obiekt.getCount()<< " ID " <<obiekt.getId() << " Imie : " << obiekt.getImie() << " Nazwisko : " << obiekt.getNazwisko() << "\nCel podró¿y : " << obiekt.getDestination() << " Data wyjazdu : " << obiekt.getDzien() << "." << obiekt.getMiesiac() << "." << obiekt.getRok() << " D³ugoœæ trwania wycieczki " << obiekt.getDlugosc() << "dni\nDodatkowe atrakcje : " << obiekt.bajer1  << " Nale¿noœæ : " << obiekt.getKwota() << endl;
}


void main()
{
	setlocale(LC_ALL, "pl-PL");
	Student *nowy = new Student("Mateusz","Nogieæ","Hiszpania",8,10,1996,7);
	wypisz(*nowy);
	cout << endl;
	VIP *wiajpi = new VIP();
	cin >> *wiajpi;
	wypisz(*wiajpi);
	Student *kopia = new Student(*nowy);
	wypisz(*kopia);
	Grupastud5 piatka;
	GrupaVip10 dyszka;
	piatka.wypisz();
	cout << Klient::getCount() << endl;
	delete nowy;
	wypisz(*wiajpi);
	try {
		Plik::zapisz(wiajpi);
	}
	catch (string &str)
	{
		cout << str << endl;
	}
	system("pause");
}


istream& operator>>(istream& in, Klient &kl) {
	kl.wpisz(in);
	return in;
}


