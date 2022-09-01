#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

float x,y;
char  wybor;

int main()
{


for (;;){

    cout << "podaj 1 liczcbe " << endl;
    cin >> x;
    cout << "podaj 2 liczcbe " << endl;
    cin >> y;

    cout << endl;
    cout << "menu glowne" << endl;
    cout << "&&&&&&&&&&&&&&&&&"<< endl;
    cout << "1.dodawanie"<< endl;
    cout << "2 odejmowanie"<< endl;
    cout << "3 mnozenie"<< endl;
    cout << "4 dzielenie" << endl;
    cout << "5 wyjscie z programu" << endl;

    cout << endl;
    wybor=getch();

    switch (wybor)
    {
    case '1':
        cout << "wynik =" << x+y;
        break;
        case '2':
        cout << "wynik =" << x-y;
        break;
        case '3':
        cout << "wynik =" << x*y;
        break;
        case '4':
            if (y==0) cout << "nie mozna dzielic przez zero";
                else
        cout << "wynik =" << x/y;
        case '5':
            exit(0) ;
        break;

        default : cout << "nie ma takiej opcji przykro" ;

    }

    getchar();getchar();
    system ("cls");
}
    return 0;
}
