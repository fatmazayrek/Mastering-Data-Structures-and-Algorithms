#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int width;
};

int main()
{
    Rectangle r{10, 20};
    cout << "Rectangle r length = " << r.length << endl;
    cout << "Rectangle r width = " << r.width << endl;

    Rectangle *p = &r;
    cout << "\nRectangle p length = " << p->length << endl;
    cout << "Rectangle p width = " << p->width << endl;

    /*
    output:
        Rectangle r length = 10
        Rectangle r width = 20

        Rectangle p length = 10
        Rectangle p width = 20
    */

    p->length = 50;
    p->width = 90;

    cout << "\nRectangle r length = " << r.length << endl;
    cout << "Rectangle r width = " << r.width << endl;

    cout << "\nRectangle p length = " << p->length << endl;
    cout << "Rectangle p width = " << p->width << endl;

    /*
    output:
        Rectangle r length = 50
        Rectangle r width = 90

        Rectangle p length = 50
        Rectangle p width = 90
    */

    // r ve p structure'lari stackte olusturulmuslardir.
    // Heap'te olusturmak istersek allocate etmemiz gerekiyor.

    Rectangle *ph = new Rectangle{98, 99};
    cout << "\nRectangle ph length = " << ph->length << endl;
    cout << "Rectangle ph width = " << ph->width << endl;

    return 0;
}
