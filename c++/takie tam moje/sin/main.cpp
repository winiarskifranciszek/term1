#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double alfa;
    cin >> alfa;
    cout << "wynik z funkcji c++ " << sin(alfa) << '\n';
    int i=0;
    double w=1,s=0;
    do{
        i++, w*=alfa, w/=i, s+=i&1?i&2?-w:w:0;
        cout << s <<endl ;
       }
        while (i<10);


    cout << i << endl;
    cout << s <<endl ;
    return 0;
}
