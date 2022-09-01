#include <iostream>

using namespace std;
double zmiana(double);

int main()
{
    int testy ;
    cout << "podaj ile testow:";
    cin >> testy;
    for (int i=0; i<testy ;i++){
    cout << "Podaj stopnie w Celciuszach " ;
    int stopnie;
    cin >> stopnie ;
    double wynik = zmiana(stopnie) ;
    cout << stopnie << " celciusza to " ;
    cout << wynik <<" Farhrenheita " << endl;

    }
    return 0;
}
double zmiana (double sts)
{

    return (1.8 * sts) + 32;
}
