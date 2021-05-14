#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <time.h>
#include <thread>

using namespace std;

int silnia(int n) { //To jest ten tego no....yyyy...rekurencyjna funkcyja
	if (n < 2) return 1;
	return n * silnia(n - 1);
}
int main() {
	//Tutaj s¹ pierdó³ki do tej pêtelki co tam bêdzie ni¿ej
	int n; // <- TO jest ten.... nooo.... yyyyy.... kurde.... podstawa silni
	int silniak = 1 ;// <- TO jest wynik...chyba?
	cout << "Zapodaj N: ";
	cin >> n;
	for (int i = n; i > 1; i--)
	{
		silniak *= i;
	}
	cout << n << "! = " << silniak << endl;
	cout << "Tera bd wyswietlac ta rekonkurencje" << endl;
	cout << silnia(10) << endl; // TO CHIBA POLICZY TO TO, ale nie wiem
	
}