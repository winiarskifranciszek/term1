#include <iostream>

using namespace std;

void zapalki(int) ;
int dziadostwo (int) ;
int main()
{
    zapalki(1);
    dziadostwo (1) ;
    zapalki(1);
    dziadostwo (1) ;


    return 0;
}
void zapalki (int n)
{
    using namespace std;
    cout << "srutu tu tu" << endl ;
}
int dziadostwo (int std)
{
    cout << "nie ma drutu" <<endl;

    return 18 * std ;
}
