#include <iostream>

using namespace std;

int main()
{
    //TO JE eNWuDe
    int a, b;
    cin >> a;
    cin >> b;

    while (a != b) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    cout << "NWD: " << a;
    return 0;
}
