#include <iostream>
#include <string>
#include <ctime>
//#include <cstdlib> /<windows.h> /biblia pseudolosowoœci <3

using namespace std;
int main()
{
	//PSEUDOSOWOŒÆ!!1!!!1

/*srand((time(NULL)*rand()) * (time(NULL)*rand())); //Kombinatoryka losowa
for (int i = 0; i < 10; i++)
{
	cout << rand()%10 +1<< endl; //PSUDOLOSOWE
	cout << rand() % 14 + 10 << endl; //[11,33]
}*/

//PUTIN PUTOUT
/*
int start,koniec;
cout << "Moj panie, aby wygenerowaæ liczby z przedzialu musisz podac przedzial:" << endl;
cout << "Poczatek przedzialu:" << endl;
cin >> start;
cout << "Koniec przedzialu:" << endl;
cin >> koniec;
for (int i = 0; i < 10; i++)
{
	cout << rand() % (koniec - start + 1) + start << endl;
}*/

//zapytaj uzytkownika o liczbe, wyosuj wartosc z [rzedzialu od 1 do tej iczby i sprawdz czy wylosowana wartosc jest liczba doskonala
//doskonala-liiczba rowna sumie swoicy dzielnikow wlasciwych
	int liczbaa;
	cout << "EEEE, zapodaj liczbe:" << endl;
	cin >> liczbaa;
	int liczbaPom = liczbaa / 2;
	int dzielnikiSuma = 1;
	for (int i = 2; i <= liczbaPom * liczbaPom; i++)
	{
		if (liczbaa%i == 0) {
			dzielnikiSuma = dzielnikiSuma + liczbaa;
		}
	}
	for (int i = 0; i < liczbaa; i++)
	{
		cout << rand() % liczbaa + 1 << endl;
		if (i == dzielnikiSuma) {
			cout << "Jest doskona³a" << endl;
		}
    }
}
