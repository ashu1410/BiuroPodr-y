#include "Plik.h"
#include<sstream>
#include "Wyjatki.h"


void Plik::zapisz(Klient *kl) {
	ofstream os;
	ostringstream ss;

	os.open("klient.txt", ios::out);
	if (os.good()) {
		
		ss << kl->getImie() << "," << kl->getNazwisko() << "," << kl->getDestination() << "," << kl->getDzien() << "," << kl->getMiesiac() << "," << kl->getRok() <<  endl;
			os << ss.str();
			ss.clear();
	}
	else
	{
		Wyjatki::bladPlik();
	}
	os.close();
}