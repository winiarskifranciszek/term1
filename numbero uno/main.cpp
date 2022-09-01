#include <iostream>
 using namespace std ;

 int main ()
 {
     double opa=100,papa=100;
     int n=0;
     while (n<60)
    {

        opa+=10;
        papa+= papa*0.05;
        n++;
        cout << papa << endl <<opa <<endl<< n<< endl;

    }


     return 0;
 }
