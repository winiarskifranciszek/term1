#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "ile masz lat" << endl;
    cin>>wiek;

    if (wiek<18){
        cout <<  "zle i nie duda" << endl;
    }
    else if ((wiek>=18)&&(wiek<35))
    {
        cout << "dobre ale nie duda" << endl ;
    }
    else
    {
        cout <<"mozesz byc duda";
    }

    return 0;
}
