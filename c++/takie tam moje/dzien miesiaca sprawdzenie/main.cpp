#include <iostream>
#include <cstdlib>

using namespace std;
int nr_miesiaca;
int main()
{
    cout << "wprowadz numer miesiaca" << endl;
    if (!(cin >> nr_miesiaca))
    {
        cerr <<"to nie jest nr miesiaca";
        exit (0);
    }
    switch (nr_miesiaca)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "ten miesac ma 31 dni" << endl ;
        break;
         case 4:
    case 6:
    case 9:
    case 11:
        cout << "ten miesac ma 31 dni" << endl ;
        break;
    case 2:
        {
            int rok;
            cout << "podaj rok:" ;
            cin >> rok;
            if
            (((rok%4==0)&&(rok%100!=0))||(rok%400==0))
            cout << "ten miesiac ma 29 dni rok przestepny";
            else
            cout << "ten miesiac ma 28 dni";
               break ;
            default : cout << "niepoprawna liczba" ;

        }
    }
    return 0;
}
