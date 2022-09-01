#include <iostream>
#include <conio.h>

using namespace std;

void wiezahanoi( int k, char A, char B, char C )
{
    if( k > 0 )
    {
        wiezahanoi( k - 1, A, C, B );
        cout << A << " --> " << C << endl;
        wiezahanoi( k - 1, B, A, C );
    }
}

int main()
{
    int k;
    cin >> k;

    wiezahanoi( k, 'a', 'b', 'c' );
    getch();
    return 0;
}
