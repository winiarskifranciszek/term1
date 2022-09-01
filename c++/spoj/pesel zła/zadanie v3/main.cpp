#include <iostream>

using namespace std;


double pesel [11];
int  iloczyny[11] = {1,3,7,9,1,3,7,9,1,3,1};
int testy;
int odp;
int main()
{
    cin >> testy ;
    for (int i=0; i<testy ; i++)
    {
    cin >> pesel [i];
    int wynik, wynikk;
    for (int i=0;i<11;i++)
    {
        wynik=(pesel[i])*iloczyny[i];
        wynikk=wynik+wynikk;
    }
    odp=wynikk%10;
     cout << wynik << endl ;
    cout << wynikk << endl ;
    if(odp==0)
        cout << "D" << endl;
    else
        cout << "N" << endl;
    }

    return 0;
}
