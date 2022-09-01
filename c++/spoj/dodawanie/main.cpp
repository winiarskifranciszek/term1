#include <iostream>
using namespace std;

int main()
{
    int t, n, a, wynik=0;
    int tb[100];
    cout<<"Podaj ilosc Testow: ";
    cin >> t;
    for(int i=0;i<t;i++)
    {
           cout<<"Test nr "<<i+1<<endl;
       cout<<"Ile liczb chcesz zsumowac?? :";
       cin>>a;
       cout<<endl;
       for(int j=0;j<a;j++)
       {
        cout<<"podaj liczbe :"<<j+1<<" ";
        cin>>n;
        wynik=wynik+n;

       }
       tb[i]=wynik;

    }
    for(int k=0;k<t;k++)
    {
        cout<<"wynik testu nr "<<k+1<<" = "<<tb[k]<<endl;
    }

cin.ignore();
cin.get();
return 0;
}
