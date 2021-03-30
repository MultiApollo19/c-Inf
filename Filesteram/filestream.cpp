#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
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
	fstream pliczek;




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
		fstream pliczek;

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

		pliczek.close();

		// ale fajnie dziala

		return 0;
	}
