#include <iostream>

using namespace std;

int main()
{
    int t=0;
    int b=0;
    char slowo [101];
    cin >> slowo;
    while(slowo[t]!=0)
        t++;
    int liczba;
    cin >> liczba;
    b=t;
    for(int i=0;i<liczba;i++)
    {
        t=b;
        int zmien;
        cin >> zmien;
        if (zmien==1){
            for(int i=0;i<t;i++)
                cout<<slowo[i];
        }
        if (zmien==0){
            cout << slowo[t-1];
           }
        if (zmien<0){
                zmien=zmien*-1;
            while(t>1)
            {
                cout << slowo[t-1];
                for(int i=0;i<(zmien-1);i++)
                    cout << " ";
                    t--;
            }

            }

       if (zmien>1){
            for(int i=0;i<t-1;i++)
            {
                cout << slowo[i];
                for(int i=0;i<(zmien-1);i++)
                    cout << " ";

            }
            cout << slowo[t-1];
            }
            if(liczba) cout<<"\n";
        }


    return 0;
}
