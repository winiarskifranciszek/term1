#include <iostream>

using namespace std;
float wynik(unsigned a,unsigned b);
int main()
{
    cout << "podej ile z ilu" << endl;
    unsigned wszystkie, ile;
    while(cin>>wszystkie>>ile){
        cout << "szansa na wygryw to ";
        cout <<wynik(wszystkie,ile);
        cout << endl;

    }
    return 0;
}

float wynik(unsigned wszystkie, unsigned skreslenia)
{
    float wynik=0;
    unsigned n,p;
    for (n=wszystkie,p=skreslenia;p>0;n--,p--)
    {
        wynik=wynik*n/p;
    }
    cout << wynik << endl;
    cout << "podaj ilosc liczb specjalnych" << endl;
    unsigned int specjal;
    cin >> specjal;
    wynik = wynik/specjal;
    return wynik;
}
