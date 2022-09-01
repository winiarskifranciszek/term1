
#include <iostream>


using namespace std;
int testy;
int kroczki;
int wynik;
int main()
{
    cin >> testy ;
    for (int i = 0 ; i <testy ; i ++ ){
        cin >> kroczki;
        wynik=kroczki* kroczki;

        cout << wynik << endl;


    }

    return 0;
}
