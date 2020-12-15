#include <iostream>
#include <string>

using namespace std;

int main() {
	int liczba;
	cout << "Podaj liczbe: " << endl;
	cin >> liczba;
	int liczbaPomocnicza = liczba / 2;
	cout << "Dzielniki wlasciwe: 1, ";

	for (int i = 2; i* i <= liczba; i++)
	{
		if (liczba%i == 0) {
			cout << i << ", ";
			if (liczba / i != liczba) {
				cout << liczba / i << ", ";
			}
		}
	}
}