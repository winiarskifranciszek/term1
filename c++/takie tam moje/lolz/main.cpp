#include <iostream>

using namespace std;

int dzieciaczki,cukierki,x,y;


int main()
{
    cout << "ile dzieci ma pedofil:" ;
    cin >> dzieciaczki;
    cout << "ile se napelnilem cukierkow hloroformem:" ;
    cin >>cukierki;

    x=  cukierki/ (dzieciaczki-1);

    cout << "cukierkow na dzieciaczka coby uspic dzieciaczki: " << x;

    y = cukierki-x * (dzieciaczki-1);

    cout <<endl<< "pedofil nie dal rady i sam musi zezrec az:" <<y;

    return 0;
}
