#include <iostream>

using namespace std;
int long potenga(int p,int w)
{
    if (w==0) return 1;
    else return p*potenga(p,w-1) ;
}
int main()
{
    int testy;
    cin >> testy;
    for (int i=0;i<testy;i++){
    int p,w;
    cin >> p >> w ;
    potenga(p,w);
    if (potenga(p,w)<10)
    cout << potenga (p,w)<< endl;
    else
    cout << potenga(p,w)%10 <<endl ;
    }
    return 0;
}
