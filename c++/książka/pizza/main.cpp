#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct jaka_pizza
{
    string name;
    unsigned int wielkosc;
    double cena;
}pizza;

int main ()
{

    cout << "nazwa: " << endl ;
    getline (cin, pizza.name);
    cout << "wielkosc " << endl;
    cin >> pizza.wielkosc;
    cout << "cena" << endl;
    cin >> pizza.cena ;
    cout << pizza.name << endl << pizza.wielkosc << pizza.cena ;
    return 0;
}
