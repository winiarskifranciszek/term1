#include <iostream>

using namespace std;

int main()
{
    int testy,p,w;
    cin >> testy ;
    for (int i=0 ; i<testy ; i++){
    int p,w;
    cin >> p>>w;
    long long wynik=1;
    while (0<w){
        wynik= wynik *p;
        w--;
    }

        cout << wynik%10 << endl;
    }
    return 0;
}
