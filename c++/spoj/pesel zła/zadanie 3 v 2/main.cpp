#include <iostream>

using namespace std;


int wynik,modulo,testy;
int pesel1,pesel2,pesel3,pesel4,pesel5,pesel6,pesel7,pesel8,pesel9,pesel10,pesel11;

int main()
{
    cin >> testy ;
    for (int i=1; i<=testy ; i++)
    {




       cin >> pesel1>>pesel2>>pesel3>>pesel4>>pesel5>>pesel6>>pesel7>>
       pesel8>>pesel9>>pesel10>>pesel11;



    wynik = pesel1+(pesel2*3)+(pesel3*7)+(pesel4*9)+pesel5+(pesel6*3)+
    (pesel7*7)+(pesel8*9)+pesel9+(pesel10*3)+pesel11 ;

    modulo= wynik%10 ;
    if (modulo==0)

    cout << "D" <<endl;

    else
    cout << "N" <<endl;

    }

    return 0;
}
