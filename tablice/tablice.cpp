#include <iostream>
#include <string>
#include <cstdlib> 

using namespace std;
int main() {
	int tablica[10];
	for (int i = 0; i < size(tablica); i++)
	{
		int random = rand();
		cout << "Debug: " << random << endl;
		if (random % 2 == 0) {
			tablica[i] = 7;
		}
		else {
			tablica[i] = 1;
		}
		cout << tablica[i] << endl;
	}
}