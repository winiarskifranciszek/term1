#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int liczba,strzal,ile_prob=0;
int main()
{
    cout << "mam liczbe od 1 do 100 wiesz jako" << endl;
    srand(time(NULL));

    liczba = rand()%100+1;


    while(strzal!=liczba)
    {
        ile_prob++;

        cout <<"zgaduj (to Twoja "<<ile_prob<<" proba)";

        cin >> strzal;

        if(strzal==liczba)
                cout << "brawo wygrywasz w "<<ile_prob<<" podejsciu looseze" <<endl ;

        if (strzal<liczba)
                cout << "malo" << endl;

        else   if(strzal>liczba)
                cout << "duzo" << endl ;



    }
    system ("pause");
    return 0;
}
