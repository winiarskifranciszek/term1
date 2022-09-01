#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

void info (int) ;
float dziadostwo (int) ;
int main()
{
    info (1) ;

    cout << "podaj ilosc lat swietlnych  " ;

    dziadostwo (1) ;

     getchar();getchar();
    system ("cls");


    return 0;
}


float dziadostwo (int std)
{
    float metry ;
    float wynik;
    cin >> metry;
    wynik=metry * 63241;

    cout << metry << " lata swietlne to: " << wynik << " jednostki astronomiczne" ;

    return 18 * std ;
}
void info(int n)
{
    cout << "Jednostka astronomiczna, oznaczenie au (dawniej równie¿ AU, w jêzyku polskim czasem stosowany jest skrót j.a.) " << endl;
     cout << "– pozauk³adowa jednostka odleg³oœci u¿ywana w astronomii równa dok³adnie 149 597 870 700 m"  << endl ;

}

