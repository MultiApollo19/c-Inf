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
    
    int a,b;
    cin >> a;
    cin >> b;

    //TO JE eNWuWu
    int nww;
    nww = (a*b) / nwde(a,b);

    cout << "NWD basic: " << nwd(a,b) <<endl;
    cout << "NWD evolved: " << nwde(a,b)<<endl;
    cout << "NWW: " << nww;

    return 0;
}
