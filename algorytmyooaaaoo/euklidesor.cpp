#include <iostream>

using namespace std;

int nwd(int a, int b){
    while (a != b) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    return a;
}

int nwde(int a, int b){
    int tmp;
    while (b != 0) {tmp=a;a=b;b=tmp%b;    }
    return a;
}

int main()
{
    //Tutaj jest NWD i NWW wystarczy te blokowe wywalić i bd gitara
    /*int a,b;
    cin >> a;
    cin >> b;

    //TO JE eNWuWu
    int nww;
    nww = (a*b) / nwde(a,b);

    cout << "NWD basic: " << nwd(a,b) <<endl;
    cout << "NWD evolved: " << nwde(a,b)<<endl;
    cout << "NWW: " << nww;
    */
    
    //Tutaj jest takie sitko fajne, takie nie za dlugnie nie za krótkie, ale działające i elastyczne!
    int n=0;
    cout << "N: ";cin >> n;

    bool liczby[n];
    for (int i=0;i<=n;i++){
        liczby[i] = true;
    }
    for (int i=2;i*i<=n; i++){
        if(liczby[i]){
            for(int j = i*2;j<=n;j=j+2){
                liczby[j] = false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(liczby[i]){
            cout << i<< " ";
        }
    }
    
    return 0;
}
