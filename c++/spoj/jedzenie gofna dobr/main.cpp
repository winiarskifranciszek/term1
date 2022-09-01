#include <iostream>

using namespace std;
int main ()
{
    int ile;
    int doba= 86400;
    cin >> ile;
    int razy =1;
        do{
            int uczestnicy;
            int pudelko;
            int suma=0;
            cin >> uczestnicy>>pudelko;
            int czas[uczestnicy] ;
            for (int i=0;i<uczestnicy;i++)
                cin >> czas [i];
            int ciastka[uczestnicy];
            for (int i = 0; i<uczestnicy;i++)
                ciastka[i]=doba/czas[i];
            for(int i=0; i<uczestnicy;i++)
                suma+=ciastka[i];
            int c;
            int r;
            c=suma/pudelko;
            r=suma%pudelko;
            if (r!=0)
                c++;
                cout << c <<endl;
            razy++;


        }while (razy <= ile);
        return 0;
}
