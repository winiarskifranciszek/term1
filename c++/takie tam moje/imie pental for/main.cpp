#include <iostream>

using namespace std;

string imie; int liczba;

int main()
{
    cout << "Podaj konfidentow dl eliminacji" << endl;
    cin >> imie;
    cout << "podaj ich liczbe:";
    cin >> liczba;

    for (int i =1; i<=liczba; i++)
    {
        cout <<i<<"."<<imie<<endl;
    }
    return 0;
}
