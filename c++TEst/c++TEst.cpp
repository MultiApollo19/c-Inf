#include <iostream>
#include <string>

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
	int liczba;
	cout << "Podaj liczbe: " << endl;
	cin >> liczba;
	int POMOCY = liczba / 2;
	cout << "Dzielniki wlasciwe: 1, ";

	for (int i = 2; i < liczba; i++)
	{
		if (liczba%i == 0) {
			cout << i << ", ";
		}
	}
}

