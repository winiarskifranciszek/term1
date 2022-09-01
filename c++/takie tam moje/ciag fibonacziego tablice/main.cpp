
#include<iostream>

using namespace std;

int main()
{
    int m,n,i,j;
    cin >> m >> n ;
    for (i=0;i<n;i++)
        {
            cout << "#" ;
            for (j=0;j<m-2;j++)
            {
                if (i>0 && i<m)
                    cout << " ";
                else
                    cout << "#";
            }
            cout << "#"<< endl;
        }
}
