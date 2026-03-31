#include <iostream>

/*
 * Fonksiyonlar, belirli bir islemi yerine getiren kod parcalaridir.
 * Structure ise ilgili verilerin butunudur.
 *
 * Bir programin tamamini main.cpp altinda yazmak yerine kodu parcalara ayirmak kod okumasi ve yeniden kullanabilirlik acisindan daha verimlidir.
*/

using namespace std;

int add(int a, int b)
{
    int c = a + b;

    return c;
}

int main()
{
    int x = 100, y = 50;
    int k = add(x, y);

    cout << "Toplam Sonucu : " << k << endl;

    // NOT:
    // x, y: actual parameters
    // a, b: formal parameters

    return 0;
}
