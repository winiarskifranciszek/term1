#include <iostream>

using namespace std;
 float liczenie(float ilosc);
int main()
{
    cout << "silnia z jakiej liczby" << endl;
    int ile;
    while(cin >> ile ){
    cout <<liczenie(ile)<< endl ;
    cout << "wartosc nie liczbowa aby zakonczyc" << endl ;
    }
    return 0;
}

 float liczenie( float ilosc)
{
    if (ilosc<2)
        return 1;
        return ilosc*=liczenie(ilosc-1);
}
