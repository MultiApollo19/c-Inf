#include <iostream>
#include <string>
#include <cstdlib> 
#include <time.h>

using namespace std;
int main() {
	srand(time(NULL));
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

	int tablica[10];
	

	for (int i = 0; i < size(tablica); i++)
	{
		int random = (rand() % 100) + 1;
		cout << "Debug: "<< random << endl;
		
		if (random % 2==0) {
			i--;
		}
		else {
			tablica[i] = random;
			cout << "Wartosc w tablicy: " << tablica[i] << endl;
		}
	}
	return 0;
	/* //Wersja Pana Pryka
	int t[10];
	void wyswietl() { for (int i = 0; i < 10; i++) cout << t[i] << " "; cout << endl; }

	//GENERUJEMY PARZYSTE Z PRZEDZIALU 1-100
	srand(time(NULL));
	//---------------------------wersja 1-------------------------
	for (int i = 0; i < 10; i++) {
		t[i] = rand() % 100 + 1;
		if (t[i] % 2)i--;
	}​​ wyswietl();
	//---------------------------wersja 2-------------------------
	for (int i = 0; i < 10; i++) do { t[i] = rand() % 100 + 1; } while (t[i] % 2); wyswietl();
	//---------------------------wersja 3-------------------------
	for (int i = 0; i < 10; i++) {
		t[i] = rand() % 100 + 1;
		(t[i] % 2) ? t[i]++ : t[i];
	}​​ wyswietl();
	//---------------------------wersja 4-------------------------
	for (int i = 0; i < 10; i++) { t[i] = ((rand() % 99 + 2) / 2) * 2; }​​ wyswietl();
	//---------------------------wersja 5-------------------------
	for (int i = 0; i < 10; i++) { t[i] = 2 * (rand() % 50 + 1); }​​ wyswietl();
	//---------------------------wersja 6-------------------------
	for (int i = 0; i < 10; i++) { t[i] = rand() % 100 + 1; t[i] += t[i] % 2; }​​ wyswietl();





	return 0;*/

}