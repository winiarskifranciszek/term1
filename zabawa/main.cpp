#include <fstream>
#include <iostream>
#include <ctime>
#include <cstdlib>
void sortowanie(),suma();
using namespace std;
int ile;
int main()
{

    cin >> ile;
    fstream plik( "plik.txt", ios::out );
    srand(time (NULL));
    int liczba=0;

    if( plik.good() )
    {
        for( int i = 1; i <= ile; i++ )
        {
            liczba=rand();
            cout << liczba << endl;
            plik << liczba << ", ";
            plik.flush();
        }
        plik.close();
    }
    int opcje=1;
    opcje=0;
    cout << opcje << endl ;
    switch(opcje)
    {
    case 0:{
        sortowanie(); break;
    }
    case 1:{
        suma (); break ;
    }
    }
    cin.get(),cin.get();
    return( 0 );
}
void sortowanie ()
{
    int sortowanie [ile];
    fstream plik( "plik.txt", ios::in );
    for (int i=0;i<ile;i++)
    {
        plik >> sortowanie [i];
        plik.flush();
        cout << sortowanie [i] <<",  ";
    }
}
void suma ()
{
    cout << "2" << endl;
}


