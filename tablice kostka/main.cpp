#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int n=20;
    unsigned int tablica [n],i,sum=0;
    double sr;
    for (i=0;i<n; i++) tablica[i]=rand()%100;
    for (i=0; i<n; i++) sum+=tablica[i];
    sr =(double) sum/n;
    for (i=0;i<n;i++) cout << tablica [i]<< '\t';
    cout << sr;

    return 0;
}
