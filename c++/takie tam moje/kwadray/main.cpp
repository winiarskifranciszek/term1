#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
double a,b,c;
int main()
{
    cout << "wprowadz a" << endl;
    cin >> a;
    cout << "wprowadz b" << endl;
    cin >> b;
    cout << "wprowadz c" << endl;
    cin >> c;
    if (a==0)
    {
        cout << "to nie jest równanie kwadratowe" <<endl;
    }
    else
    {

        float delta;
        delta= b*b-(4*a*c);
        if (delta==0)
        {
            cout << "pierwiatkiem równania jest: "
            << -b/(-2*a);
        }
        if (delta<0)
        {
            cout << "brak rozwiazania delta ujemna" << endl;
        }
        else
        {
            float pier_dleta= sqrt(delta);
            float xa,xb;
            xa =(-b-pier_dleta)/(-2*a);
            xb = (-b+pier_dleta)/(-2*a);
            cout << "pierwsze rozwiazanie " << xa << endl;

            cout << "drogie rozwiazanie " << xb << endl;
        }
    }
    getchar();getchar();
    return 0;
}
