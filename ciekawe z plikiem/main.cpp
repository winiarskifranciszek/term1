#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>

int main()
{
    using namespace std;
    const int trzy= 30;
    char nazwa_pliku[trzy];
    ifstream inFile;
    cout << "nazwa pliku z danymi:  " << endl;
    cin.getline(nazwa_pliku,trzy);
    inFile.open(nazwa_pliku);
    if (!inFile.is_open())
    {
        cout << "otwarcie sie nie powiodlo" << endl;
        cin.get();
        exit(EXIT_FAILURE);
    }
    float wynik[trzy],srednia=0,koncowy=0;
    int k=0;
    inFile >> wynik[k];
    cout << wynik[k] << endl;
    while (inFile.good())
    {
        ++k;
        inFile >> wynik[k];
        cout << wynik[k] << endl;

    }

    if (inFile.eof())
        cout <<"koniec pliku.\n";
    else if (inFile.fail())
        cout <<"w pliku zle dane mogo byc tylko liczby.\n";
    else
        cout <<"cos ty zrobil to ja nie wiem.\n";
    if (k==0)
        cout << "ni ma danych bida";
    else {
    short i=-1,n=0;
    while (n<k)
    {
        srednia+=wynik[n];

        n++;
        if (wynik[n]==0)
            break;
    }
    cout <<"ilosc wczytanych elementow" << n+1 << endl;
    srednia/=(n);
    cout << "srednia=  "<< srednia <<endl ;

    n=-1,i=0;
    while(n<k)
    {
        wynik[i]=(wynik[i]*wynik[i])-2*wynik[i]*srednia+(srednia*srednia);
        cout << wynik[i]<< endl;
        i++;
        n++;

    }
    cout << "***************" << endl;
    cout << "suma w licznuku" << endl;
    i=0,srednia=0,n-1;
    k-1;
    while (i<=k)
    {
        srednia+=wynik[i];
        cout << srednia<< endl;
        i++;
        n++;
    }
    cout << "***************" << endl;
    cout << i << endl;
    koncowy = srednia/(i*(i-1));

    koncowy= sqrt(koncowy);

    cout << "wartosc bledu kwadratowego =   " << koncowy << endl ;
    }
    cin.get(),cin.get();


    return 0;
}
