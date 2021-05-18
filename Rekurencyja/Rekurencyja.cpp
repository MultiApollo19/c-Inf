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
int ciag(int n){
    switch(n){
        case 1:
            return 3;
            break;
        case 2:
            return 5;
            break;
        default:
            return ciag(n-1)*2+3;
            break;
    }

}
int main() {
	    //Mamy dany ciąg An okreslony rekurencyjnie a1=3;a2=5 an=a-n*2+3 napisz program sprawdzajacy ktory element ciagu jako 1 osiagnie wartosc wieksza od 100
   	 int i =1;
   	 while(ciag(i) <=1000){
            cout << ciag(i)<<endl;
            i++;
    }
	    cout << "Ciag wynosi powyzej 1000 przy n: " << i<< endl;

	/*
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
	cout << silnia(10) << endl; // TO CHIBA POLICZY TO TO, ale nie wiem*/
	
}
