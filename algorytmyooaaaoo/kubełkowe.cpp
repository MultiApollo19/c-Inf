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

int main(){
     generuj(ile_liczb);  wyswietl();
     kubelkowe();         wyswietl();
     return 0;
}