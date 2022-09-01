#include <iostream>
using namespace std;
const int rozmiar=10;
int wpisywanie();
double wyswietlanie(double[],int);
double srednia (double[], int);
int main()
{
    wpisywanie();



    return 0;
}
int wpisywanie()
{
    static double wynik[rozmiar];
    for(int i=0; i<rozmiar;i++)
    {
        cin >> wynik[i];
        if(wynik[i]==0)
        wyswietlanie(wynik,rozmiar);
        else
            continue;

    }

    wyswietlanie(wynik,rozmiar);
}
double wyswietlanie (double wynik[],int rozmiar)
{
    for (int i=0; i<rozmiar; i++)
    {
        cout << wynik[i] << "  " ;
    }
    srednia(wynik,rozmiar);
}

double srednia (double wynik[],int rozmiar)
{
    double srednia;
    int i=0,m=0;
    for ( i=0;i<rozmiar;i++)
    {
        srednia += wynik[i];
        if (wynik[i]==0){
            i=rozmiar;
            m++;
            cout << "wprowadzono" << m << "danych" ;
            break;
        }
        else;
        m++;

    }
    m--;
    srednia= srednia/m;
    cout << srednia ;

}
