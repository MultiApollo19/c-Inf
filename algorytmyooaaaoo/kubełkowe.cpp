#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
const int n=10;
const int ile_liczb=10;

int t[n];

void generuj(int x){
            srand(time(NULL));
            for(int i=0;i<n;i++)t[i]=rand()%x;  }

void wyswietl(){
            for(int i=0;i<n;i++)cout<<t[i]<<" ";
            cout<<endl;}

void bombelek_1(){
    for(int i=1;i<n;i++)
        for(int i=1;i<n;i++)
            if (t[i-1]>t[i])swap(t[i-1],t[i]);
}
void bombelek_2(){
    int m=n;
    for(int i=1;i<n;i++){
        for(int i=1;i<m;i++)
            if (t[i-1]>t[i])swap(t[i-1],t[i]);
            m--;}
}

void bombelek_3(){
    int m=n;
    bool byla_zmiana=true;

    while(byla_zmiana){
        byla_zmiana=false;
        for(int i=1;i<m;i++)
            if (t[i-1]>t[i]){
                        swap(t[i-1],t[i]);
                        byla_zmiana=true;}
        m--;}
                }

int unikalne(){
    int tmp[ile_liczb]={0};
    int u=0;
    for(int i=0;i<n;i++)tmp[t[i]]=1;
    for(int i=0;i<ile_liczb;i++)u+=tmp[i];
    return u;
}

void kubelkowe(){
    int tmp[ile_liczb]={0};
    for(int i=0;i<n;i++)tmp[t[i]]++;

    int gdzie=0;
    for(int i=0;i<ile_liczb;i++)
        while(tmp[i]--)t[gdzie++]=i;
}
void max_min(){ //Bez sortowań, panie MAGIA. BARRRDZO DOBRRA ROBOTA
    int minn = t[0];
    int maxx = t[0];
    for(int i=0;i<n;i+=2){
        if(t[i] > t[i+1]){
            if(t[i] > maxx){
            maxx = t[i];
            }
            if(t[i+1] < minn){
            minn = t[i+1];
            }
        }
        else{
            if(t[i+1] > maxx){
            maxx = t[i+1];
            }
            if(t[i] < minn){
            minn = t[i];
            }
        }

    }
    cout << minn << endl;
    cout << maxx << endl;
}
//NU DUBRA TUTAJ KAJ GDZIES BEDZIE TO SORTOWANIE SELEKCYJNE

int index_min(int poczatek){
    for(int i=poczatek+1;i<n;i++){
        if(t[poczatek] > t[i]){
            poczatek = i;
        }

    }
    return poczatek;
}
void wybor(){
    for(int i=0;i<n-1;i++){
        swap(t[i],t[index_min(i)]);
    }
}
//A JE TO


int main(){
     generuj(ile_liczb);  wyswietl();
     kubelkowe();         wyswietl();
     return 0;
}
