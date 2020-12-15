#include <iostream>
#include <string>

using namespace std;


int main() {
	int liczbaZarazonych = 1;
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
		cout << "Liczba zarazonych: " << liczbaZarazonych << " w " << liczbaDni << " dniu" << endl;
		cout << "Liczba martwych: " << liczbaMartwych << endl;
	}
	cout << "Liczba dni do momentu wyginiecia Grudziadzan: " << liczbaDni - 1 << endl;
	return 0;
}
