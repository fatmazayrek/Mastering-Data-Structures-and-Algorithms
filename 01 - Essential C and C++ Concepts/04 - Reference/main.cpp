#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int &r = a;

    cout << "Value of a:" << a << endl;
    cout << "Refence of a:" << &a << endl;
    cout << "Value of r:" << r << endl;
    cout << "Reference of r:" << &r << endl;

    /*
    output
        Value of a:10
        Refence of a:000000B5940FFC30
        Value of r:10
        Reference of r:000000B5940FFC30
    */

    int b = 90;
    r = b;

    cout << "Value of a:" << a << endl;
    cout << "Refence of a:" << &a << endl;
    cout << "Value of r:" << r << endl;
    cout << "Reference of r:" << &r << endl;
    cout << "Value of b:" << b << endl;
    cout << "Reference of b:" << &b << endl;

    /*
    output
        Value of a:10
        Refence of a:00000012E69EFCC0
        Value of r:10
        Reference of r:00000012E69EFCC0
        Value of a:90
        Refence of a:00000012E69EFCC0
        Value of r:90
        Reference of r:00000012E69EFCC0
        Value of b:90
        Reference of b:00000012E69EFCC8
    */

    // NOT: Referasnlar her zaman ilklendirilmelidir
    // Ornegin
    // int &r; seklinde kullanim hatali kullanimdir.

    // HATALI KULLANIM
    // Derleme hatasi alinir
    // &r = b;

    return 0;
}
