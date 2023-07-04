#include <iostream>
using namespace std;

int main()
{
    int a;
    a = 12;
    cout << "size of int" << sizeof(a) << endl;

    bool b;
    cout << "size of bool" << sizeof(b) << endl;

    char c;
    cout << "size of char " << sizeof(c) << endl;

    float d;
    cout << "size of float" << sizeof(d) << endl;
    short int si;
    cout << "size of short int" << sizeof(si) << endl;
    long int li;
    cout << "size of long int" << sizeof(li) << endl;
}