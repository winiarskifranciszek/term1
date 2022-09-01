#include <iostream>

using namespace std;


string login, haslo;

int main()
{
    cout <<"podaj login"; << endl;
    cin >> login;
    cout << "podah haszlo"; << endl;
    cin >> haslo;
    if ((login=="dziad")&&(haslo=="dziadv2"))
    {
        cout<< "brawo pamietasz";

    }
    else
    {
        cout << "jestes gupi nie dales rady zapamietac";
    }

    return 0;
}

