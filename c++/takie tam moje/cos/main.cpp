#include <iostream>
#include <cmath>


int main()
{
    using namespace std;
    int ile_razy=0 ;
    float pi=3.14159265358979323846264338327950288;
    cout << "podaj kat w stopniach" << endl;
    float  katst;
    cin >> katst ;
    float kat=katst*pi/180;
    cout << "cos z funkcji c++= " << cos(kat) << endl;
    float strona=1,dalej=1;
    int pentla=5;
    for (int i =1 ; i <=2*pentla; i+=2)
    {

        dalej=dalej*(-1)*kat*kat/(i*(i+1));
        strona=strona+dalej;
        ile_razy++ ;
    }

    cout << "cos= "<< strona << endl;
    cin.get(),cin.get();
    return 0;
}
