#include <iostream>
using namespace std;
void sortowanie( int tab[], int left, int right )
{
    int i = left;
    int j = right;
    int x = tab[( left + right ) / 2 ];
    do
    {
        while( tab[ i ] < x )
            i++;
        while( tab[ j ] > x )
            j--;
        if( i <= j )
        {
            swap( tab[ i ], tab[ j ] );
            i++;
            j--;
        }
    }
    while( i <= j );

    if( left < j ) sortowanie( tab, left, j );
    if( right > i ) sortowanie( tab, i, right );

}
int main()
{
    int tab[12];
    cout << "wprowadz 12 liczb"<< endl;
    for (int i=0; i<=11; i++)
        cin >> tab[i];
    cout << "**********************" << endl;
    cout << "po sortowaniu" << endl;

    sortowanie(tab, 0, 11);
    for (int i=0; i<=11; i++)
        cout << tab[i]<< endl;
    tab[11]=0;
    cout << "^^^^^^^^^^^^^^^"<< endl;
    sortowanie (tab,0,6);
    for (int i=0; i<=11; i++)
        cout << tab[i]<< endl;
    return 0;
}
