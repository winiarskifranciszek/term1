#include <iostream>

using namespace std;

int main()
{
    int testy;
    int result;
    int liczby[11];
    int mnoznik[11] = { 1,3,7,9,1,3,7,9,1,3,1 };

    char pesel[12];

    cin >> testy;
    for (int i = 0; i < testy; i++)
    {
        result = 0;
        cin >> pesel;
        for (int j = 0; j < 11; j++)
        {
            liczby[j] = pesel[j];
            liczby[j] -= 48;
            liczby[j] *= mnoznik[j];
            result += liczby[j];
        }result %= 10;
        if (result == 0) cout << "D" << endl;
        else cout << "N" << endl;
    }
    return 0;
}
