#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <time.h>
#include <thread>

using namespace std;
int main()
{
	int suma = 0;

	fstream plik;
	plik.open("zadanie3.txt", ios::in);
	int linia[6];
	while (!plik.eof()) {
		plik >> linia[0] >> linia[1] >> linia[2] >> linia[3] >> linia[4] >> linia[5];
		//cout << "Debug: " << "ID: " << linia[0] <<endl;
		switch (linia[0]) {
		case 1:
			suma = suma + linia[1];
			cout << "Debug: " << "ID: " << linia[0] << " | liczba: " << linia[1] << " | aktualna suma: " << suma << endl;
			break;
		
		case 2:
			suma = suma + linia[2];
			cout << "Debug: " << "ID: " << linia[0] << " | liczba: " << linia[2] << " | aktualna suma: " << suma << endl;
			break;
		case 3:
			suma = suma + linia[3];
			cout << "Debug: " << "ID: " << linia[0] << " | liczba: " << linia[3] << " | aktualna suma: " << suma << endl;
			break;
		case 4:
			suma = suma + linia[4];
			cout << "Debug: " << "ID: " << linia[0] << " | liczba: " << linia[4] << " | aktualna suma: " << suma << endl;
			break;
		case 5:
			suma = suma + linia[5];
			cout << "Debug: " << "ID: " << linia[0] << " | liczba: " << linia[5] << " | aktualna suma: " << suma << endl;
			break;
		}
	}

	cout << "Koncowa suma programu: " << suma << endl;
	plik.close();
	return 0;
}

/*void chleb(int wybor) {
	//
	if (wybor == 1) {
		fstream plig;
		plig.open("ugibugi.txt", ios::in);
		string linia;
		int linie;
		int suma;
		while (!plig.eof())
		{
			getline(plig, linia);
			if (linia != "") {
				int liczba;
				liczba = atoi(linia.c_str());
				suma += liczba;
				linie++;
			}

		}

		plig.close();
		//cout << "Suma: " << suma << endl;
		//cout << "linie: " << linie << endl;
	}
	//
	else if (wybor == 2) {
		thread call_function(piekarnia);
	}




}*/
/*void piekarnia() {

	int  poczatek, koniec, ILE;
	cout << "Podaj poczatkowa liczbe: ";
	cin >> poczatek;
	cout << "Podaj koncowa liczbe: ";
	cin >> koniec;

	//ILE?!?!- SOCHA
	srand(time(NULL));
	ILE = rand() % 91 + 10;
	fstream pliczek;
	string linia;
	pliczek.open("ugibugi.txt", ios::out);

	for (int i = 0; i < 9999999999; i++)
	{
		pliczek << rand() % (koniec - poczatek + 1) + poczatek << endl;
	}
	pliczek.close();
}*/

/*
Obsluga plików w C++



//[ZAPIS]



#include <fstream>



fstream plik;
plik.open("dane.txt",ios::out);



plik<<napis<<endl;
plik.close();



//[DOPISANIE]



plik.open("dane.txt",ios::out | ios::app); // app - ustawia znacznik pliku na koncu - umozliwia zapisanie Cokowliek to znaczy



//[ODCZYT]



string linia;
plik.open("dane.txt", ios::in);
getline(plik, linia);



int liczba
liczba=atoi(linia.c_str());



while(!plik.eof()) //end-of-file - koniec pliku (dzialaj jesli nie napotkales konca pliku)
{
getline(plik, linia);
if (linia!=""){
int liczba;
liczba=atoi(linia.c_str());
suma+=liczba;
}
}
*/
//fstream pliczek;




/*string opcja;
cout << "Odczytac czy zapisac? [O/Z]" << endl;
cin >> opcja;
if (opcja == "Z") {
	string napis;
	pliczek.open("doPliczku.txt", ios::out);
	cout << "Podaj napis: ";
	cin >> napis;
	pliczek << napis << endl;
}
else {
	string linia;
	pliczek.open("doPliczku.txt", ios::in);



	while (!pliczek.eof())
	{
		getline(pliczek, linia);
		cout << linia;
	}
}
pliczek.close();
return 0;*/
/*
if (pliczek) {
	string linia;
	pliczek.open("licznik.txt", ios::in);
	while (!pliczek.eof())
	{
		getline(pliczek, linia);

	}
	int liczba;
	liczba = atoi(linia.c_str());
	cout << "Urochomiony poraz: " << liczba << endl;
	pliczek.close();
	pliczek.open("licznik.txt", ios::out);
	int suma = liczba +1 ;
	pliczek << suma << endl;
	pliczek.close();

}
else {
	pliczek.open("licznik.txt", ios::out);
	pliczek << "1" << endl;
	pliczek.close();
	cout << "Zrestartuj program!" << endl;
}*/ // To habadzibad³o nie dzia³a :/

//TO JEST FILIPA
	/*fstream pliczek;

	string linia;
	pliczek.open("licznik.txt", ios::in);

	getline(pliczek, linia);

	int liczba;
	liczba = atoi(linia.c_str());
	liczba++;
	cout << "Siema, urochomilem sie: " << liczba << "raz/razy/czy jakos tam.";
	pliczek.close();

	pliczek.open("licznik.txt", ios::out);
	pliczek << liczba;

	pliczek.close();*/

	// ale fajnie dziala

	//09.04.2021
	/*int wybor;
	cout << "1 - zliczanie lini, 2 - zapis do pliku" << endl;
	cin >> wybor;
	chleb(wybor);


	*/
	//£O PANIE, A KTO TO PANU TO TAK SKOMPLIKOWA£

	/*int wybor;

	cout << "Wybierz opcje: 1-generuj; 2-analizuj:" << endl;
	cin >> wybor;

	if (wybor == 1) {

		int poczatek;
		int koniec;
		int ile;

		cout << "Podaj liczbe pocztakowa: " << endl;
		cin >> poczatek;

		cout << "Podaj liczbe koncowa: " << endl;
		cin >> koniec;

		srand(time(NULL));

		ile = rand() % 91 + 10;

		fstream plik;

		plik.open("plik.txt", ios::out);

		for (int i = 0; i < ile; i++) {

			plik << rand() % (koniec - poczatek + 1) + poczatek << endl;

		}

		plik.close();
	}
	else {

		fstream plik;

		plik.open("plik.txt", ios::in);

		string linia;

		int liczba;
		int suma = 0;
		int wartosc = 0;
		int min=0;
		int max=0;

		while (!plik.eof()) {

			getline(plik, linia);

			if (linia != "") {

				liczba = atoi(linia.c_str());
				suma += liczba;
				if(liczba <min){
					min = liczba;
				}
				else{
					if(liczba > max){
					max=liczba;
					}

				}
				wartosc++;

			}
		}

		cout << "Wyst¹pi³o liczb: " << wartosc << endl;
		cout << "Ich suma: " << suma << endl;
		cout << "Najwieksza liczba: " << max << " najmniejsza: " << min<< endl;

	}*/

	/*fstream plik;
	string linia;
	int liczby[950];
	int linie=0;
	int liczbaTMP;

	plik.open("liczby.txt", ios::in);
	while (!plik.eof())
	{
		getline(plik, linia);
		if (linia != "") {
			liczbaTMP = atoi(linia.c_str());
			liczby[linie] = liczbaTMP;
			cout << "Linia: " << linie << " | wartosc: " << liczby[linie] << endl;
			linie++;
		}
	}
	plik.close();
	fstream plig;
	plig.open("liczbyRevers.txt", ios::out);
	for (int i = linie-1; i >= 0; i--)
	{
		cout << "Linia Revers: " << i << " | wartosc: " << liczby[i] << endl;
		plig << liczby[i] << endl;
	}
	plig.close();*/

//Zadanie ze strumieniami to 1
	/*fstream plik;
	string strumien;
	string dzialanie;
	int a, b;

	plik.open("zadanie2.txt", ios::in);
	while (!plik.eof())
	{
		plik >> a >> dzialanie >> b;
		cout << "Debug: " << a << " "<< dzialanie << " " << b<<endl;
		if (dzialanie == "dodaj") {
			cout << a + b << endl;
		}
		else if (dzialanie == "odejmij") {
			cout << a - b << endl;
		}
		else {
			cout << "Error 404" << endl;
		}

	}

	plik.close();*/


//HEHE
	/*fstream plik;
	plik.open("zadanie2.txt", ios::out);

	srand(time(NULL));
	string dzialania[3] = { "dodaj","odejmij","cos" };
	int ZnacznikDzialania=0;

	int ileDzialan;
	int a, b;
	ileDzialan = rand();


	for (int i = 0; i <= ileDzialan; i++)
	{
		a = rand();
		b = rand();

		bool prawdopodobienstwo = (rand() % 100) < 75;
		if (!prawdopodobienstwo) {
			ZnacznikDzialania = 2;
		}
		else {
			ZnacznikDzialania = rand() % 2;
		}



		cout << "Debug: " << a << " " << dzialania[ZnacznikDzialania] << " " << b << endl;

		plik << a<<" " << dzialania[ZnacznikDzialania] << " " << b << endl;
		cout << "Debug: " << i << endl;
	}
	plik.close();*/

/* //Zadanko to z dodawaniem,odejmowaniem i cosiowaniem z prawdopodobieñstwem
fstream plik;
plik.open("zadanie2.txt", ios::out);

srand(time(NULL));
string dzialania[3] = { "dodaj","odejmij","cos" };
int ZnacznikDzialania = 0;

int ileDzialan;
int a, b;
ileDzialan = rand();


for (int i = 0; i <= ileDzialan; i++)
{
	a = rand();
	b = rand();

	bool prawdopodobienstwo = (rand() % 100) < 75;
	if (!prawdopodobienstwo) {
		ZnacznikDzialania = 2;
	}
	else {
		ZnacznikDzialania = rand() % 2;
	}



	cout << "Debug: " << a << " " << dzialania[ZnacznikDzialania] << " " << b << endl;

	plik << a << " " << dzialania[ZnacznikDzialania] << " " << b << endl;
	cout << "Debug: " << i << endl;
}
plik.close();
return 0;*/