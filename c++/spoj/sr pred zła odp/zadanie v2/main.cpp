#include <iostream>

using namespace std;
int v1,v2,testy;
int main()
{
    cin >> testy ;

    for (int i=1; i <= testy ; i++)
    {
        cin >>v1 >>v2 ;
        cout << 2*v1*v2/(v1+v2)<<endl;
    }


    return 0;
}
