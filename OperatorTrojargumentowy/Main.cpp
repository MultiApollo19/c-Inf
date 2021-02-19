#include <iostream>
#include <string>
#include <cstdlib> 
#include <time.h>

using namespace std;
int main() {
	int a, b;
	cout << "Podaj a: " << endl;
	cin >> a;
	cout << "Podaj b: " << endl;
	cin >> b;

	int najwieksza = a > b ? a : b;
	cout << "Najwieksza liczba jest: " << najwieksza <<endl;
	return 0;
}