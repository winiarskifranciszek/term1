#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float wynik[20],srednia=0,koncowy=0;
    cout << "podaj wynik" << endl;
    cout << "czesc calkowita od dziesietnej odzielona '.'" << endl;
    cout << "aby zakonczyc wczytywanie podaj 0" << endl;
    short i=-1,n=0;
    do
    {
        i++;
        cin >> wynik[i];
        if (wynik[i]==19960703){
            cout << "autor franek winiarski 30.11.2017" << endl; break;
        }
        if (wynik[i]==0)
            break;
    }while (i<19);
    while (n<i)
    {
        srednia+=wynik[n];
        n++;
        if (wynik[n]==0)
            break;
    }
    srednia/=(n);
    cout << "srednia=  "<< srednia <<endl ;
    n=1,i=0;
    while(n!=0)
    {
        wynik[i]=(wynik[i]*wynik[i])-2*wynik[i]*srednia+(srednia*srednia);
        cout << wynik[i]<< endl;
        i++;
        if (wynik[i]==0)
            break;
    }
    cout << "***************" << endl;
    cout << "suma w licznuku" << endl;
    i=0,srednia=0;
    while (n!=0)
    {
        srednia+=wynik[i];

        if (wynik[i]==0)
            break;
        cout << srednia<< endl;
        i++;
    }
    cout << "***************" << endl;
    cout << i << endl;
    koncowy = srednia/(i*(i-1));
    cout << "wartosc bledu kwadratowego =   " << koncowy << endl ;
    koncowy= sqrt(koncowy);

    cout << "wartosc bledu kwadratowego =   " << koncowy << endl ;
    cin.get(),cin.get();

    return 0;
}
