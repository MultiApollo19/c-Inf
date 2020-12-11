//Jeżeli jesteś w piwnicy,a twój wujek pokazuje ci kotki mrugnij 2 razy.

#include <iostream>
#include <string>
#include <ctime>
//#include <cstdlib> /<windows.h> /biblia pseudolosowości <3

using namespace std;

int main()
{
	/*int a;
	cout << "Podaj jakas wartosc liczbowa:" << endl;
	cin >> a;
	if (a >= 5 && a <= 10) {
		cout << "Miesci sie" << endl;
	}
	else {
		cout << "Nie miesci sie" << endl;
	}*/
	/*int liczbaUser;
	int suma = 0;
	cout << "Podaj liczbe: " << endl;
	cin >> liczbaUser;
	for (int i = 1; i <= 10000; i++)
	{
		if (i % liczbaUser == 0) {
			suma++;
		}
	}
	cout << "Przez tyle liczb mozna podzielic: " << suma << endl;*/

	/*int przedMin;
	int przedMax;
	int sumaEl = 0;
	int liczbaEl = 0;
	int liczbaUser;
	cout << "Podaj najnizsza wartosc przedzialu: ";
	cin >> przedMin;
	cout << "Podaj najwyzsza wartosc przedzialu: ";
	cin >> przedMax;
	cout << "Podaj liczbe: ";
	cin >> liczbaUser;
	for (int i = przedMin; i <= przedMax; i++)
	{
		if (i % liczbaUser == 0) {
			liczbaEl++;
			sumaEl = sumaEl + i;
		}
	}
	cout << "Przez tyle liczb mozna podzielic: " << liczbaEl << " tyle wynosi ich suma: " << sumaEl << endl;*/

	/*string haslo;
	while (haslo != "trzaslo") {
		cout << "Podaj poprawne haslo!" << endl;
		cin >> haslo;
	}
	cout << "NO BRAWO!" << endl;*/

	/*string haslo;
	int ile;
	while (haslo != "trzaslo") {
		ile++;
		cout << "Podaj poprawne haslo!" << endl;
		cin >> haslo;
	}
	cout << "NO BRAWO!" << " Zgadles za "<< ile << " razem!" << endl;*/


	//CovID simulator 2k20: Grudziądz edyszyn
	/*int liczbaZarazonych = 1;
	int liczbaDni = 0;
	int liczbaMieszkancow = 94497;
	int liczbaMartwych = 0;
	while (liczbaZarazonych < liczbaMieszkancow) {
		liczbaDni++;

		if (liczbaDni % 7 != 3) {
			liczbaZarazonych = liczbaZarazonych + 2 * liczbaZarazonych + liczbaZarazonych * 0.2;
		}
		if (liczbaDni % 7 == 6) {
			liczbaZarazonych -= liczbaZarazonych * 0.3;
			liczbaMartwych = liczbaMartwych + (liczbaZarazonych * 0.3);
			liczbaMieszkancow -= liczbaZarazonych * 0.3;
		}
		cout << "Liczba zarazonych: " << liczbaZarazonych << " w "<< liczbaDni << " dniu" << endl;
		cout << "Liczba martwych: " << liczbaMartwych << endl;
	}
	cout << "Liczba dni do momentu wyginiecia Grudziadzan: " << liczbaDni-1 << endl;
	return 0;*/


	//Dzielniki właściwe
	/*int liczba;
	cout << "Podaj liczbe: " << endl;
	cin >> liczba;
	int POMOCY = liczba / 2;
	cout << "Dzielniki wlasciwe: 1, ";

	for (int i = 2; i <= POMOCY* POMOCY; i++)
	{
		if (liczba%i == 0) {
			cout << i << ", ";
		}
	}*/

	//PSEUDOSOWOŚĆ!!1!!!1
	
	/*srand((time(NULL)*rand()) * (time(NULL)*rand())); //Kombinatoryka losowa
	for (int i = 0; i < 10; i++)
	{
		cout << rand()%10 +1<< endl; //PSUDOLOSOWE
		cout << rand() % 14 + 10 << endl; //[11,33]
	}*/

	//PUTIN PUTOUT

	int start,koniec;
	cout << "Moj panie, aby wygenerować liczby z przedzialu musisz podac przedzial:" << endl;
	cout << "Poczatek przedzialu:" << endl;
	cin >> start;
	cout << "Koniec przedzialu:" << endl;
	cin >> koniec;
	for (int i = 0; i < 10; i++)
	{
		cout << rand() % (koniec - start + 1) + start << endl;
	}

}

