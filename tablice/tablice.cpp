#include <iostream>
#include <string>
#include <cstdlib> 
#include <time.h>

using namespace std;
int main() {
	/*int tablica[10];
	for (int i = 0; i < size(tablica); i++)
	{
		srand(time(NULL));
		int t[10];
		for (int i = 0; i < 10; i += 2) {



			t[i] = rand();
			t[i + 1] = rand();




			cout << t[i] << " - " << t[i + 1] << " - ";

			if (t[i] % 2 == 0)t[i] = 7;
			t[i + 1] = 1;
		}
	}*/

	/*
	int tablica[10];
	bool isParzysta = false;
	string tempInput;
	cout << "Wpisz rodzaj liczby(parzysta/nieparzysta): ";
	cin >> tempInput;
	if (tempInput == "parzysta" || tempInput == "Parzysta") {
		isParzysta = true;
	}
	else if (tempInput == "nieparzysta" || tempInput == "Nieparzysta") {
		isParzysta = false;
	}
	else {
		cout << endl << "Wprowadz poprawna wartosc";
		return 0;
	}
	for (int i = 0; i < size(tablica); i++)
	{
		cout << endl << "Debug iterator: " << i;
		int random = (rand() % 100) + 1;
		cout << endl <<"Debug random: "<<random;
		if (isParzysta) {
			cout << endl << "Debug isParzysta: " << isParzysta;
			if (random % 2 == 0) {
				tablica[i] = random;
				cout << endl << "Index: " << i << " w tablicy: " << tablica[i];
			}			
			else {
				i--;
			}
		}
		else {
			cout << endl << "Debug isParzysta: " << isParzysta;
			if (random % 2 == 0) {	
				i--;
				
			}
			else {
				tablica[i] = random;
				cout << endl << "Index: " << i << " w tablicy: "<<tablica[i];
			}

		}
	} */
}