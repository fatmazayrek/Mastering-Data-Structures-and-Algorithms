#include <iostream>
using namespace std;

/*
 * Heap memory'e ulasmak
 * Resources'a ulasmak
 * icin pointer kullanilir
*/

struct Rectangle
{
    int height;
    int width;
};

int main()
{
    // ************************************************************************
    //                              EXAMPLE 1
    // ************************************************************************
    int a = 10, b = 90;
    int *p;
    p = &a;
    cout << "Address of a : " << &a;
    cout << "\nValue of a: " << a;
    cout << "\nAddress of b: " << &b ;
    cout << "\nValue of b: " << b;
    cout << "\nAddress of p: " << p;
    cout << "\nValue of p: " << *p;

    *p = 120;
    cout << "\nAddress of a : " << &a;
    cout << "\nValue of a: " << a;
    cout << "\nAddress of b: " << &b ;
    cout << "\nValue of b: " << b;
    cout << "\nAddress of p: " << p;
    cout << "\nValue of p: " << *p;

    p = &b;
    cout << "\nAddress of a : " << &a;
    cout << "\nValue of a: " << a;
    cout << "\nAddress of b: " << &b ;
    cout << "\nValue of b: " << b;
    cout << "\nAddress of p: " << p;
    cout << "\nValue of p: " << *p << "\n*************\n";

    /*
    output:
        Address of a : 0000000FC58FF9D0
        Value of a: 10
        Address of b: 0000000FC58FF9D8
        Value of b: 90
        Address of p: 0000000FC58FF9D0
        Value of p: 10
        Address of a : 0000000FC58FF9D0
        Value of a: 120
        Address of b: 0000000FC58FF9D8
        Value of b: 90
        Address of p: 0000000FC58FF9D0
        Value of p: 120
        Address of a : 0000000FC58FF9D0
        Value of a: 120
        Address of b: 0000000FC58FF9D8
        Value of b: 90
        Address of p: 0000000FC58FF9D8
        Value of p: 90
    */

    // ************************************************************************
    //                              EXAMPLE 2
    // ************************************************************************
    int Array[5] = {10, 20, 30, 40, 50};
    int *p2 = Array;                        // yada &Array[0] olarak set edebiliriz

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Eleman - " << i << ": " << p2[i] << std::endl;
    }
    std::cout << "**************************" << std::endl;

    /*
    output:
        Eleman - 0: 10
        Eleman - 1: 20
        Eleman - 2: 30
        Eleman - 3: 40
        Eleman - 4: 50
    */

    // ************************************************************************
    //                              EXAMPLE 3
    // ************************************************************************
    int *pointerInt;
    char *pointerChar;
    double *pointerDouble;
    Rectangle *pointerStruct;

    std::cout << "Sizeof pointerInt: " << sizeof(pointerInt) << std::endl;
    std::cout << "Sizeof pointerChar: " << sizeof(pointerChar) << std::endl;
    std::cout << "Sizeof pointerDouble: " << sizeof(pointerDouble) << std::endl;
    std::cout << "Sizeof pointerStruct: " << sizeof(pointerStruct) << std::endl;

    /*
    output:
        Sizeof pointerInt: 8
        Sizeof pointerChar: 8
        Sizeof pointerDouble: 8
        Sizeof pointerStruct: 8
    */


    // ONEMLI HATIRLATMA
    // Heap'te allocate edilmis memory program sonunda serbest birakilmalidir
    delete pointerInt;
    delete pointerChar;
    delete pointerDouble;
    delete pointerStruct;

    return 0;
}
