#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "witaj przy bankomacie" << endl;
    cout << "podaj numer PIN: " << endl;
    cin >> PIN;

    if (PIN=="3334")
    {
      cout <<"poprawny pin gratulacje";
    }
    else
    {
        cout << "niepoprawy dziadostwo" << endl ;

    }




    return 0;
}
