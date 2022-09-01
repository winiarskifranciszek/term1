#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    int a,b;

    cout << "Wpisz podstawe: ";
    cin >> a;
    cout << "Wpisz wykladnik: ";
    cin >> b;

    cout << potega(a,b) << endl;



    return 0;
}
long int potega(long int podstawa, int wykladnik)
{
    int wynik = 1;

    for (int i = 0; i<wykladnik; i++)
        wynik*=podstawa;

    return wynik;
}
