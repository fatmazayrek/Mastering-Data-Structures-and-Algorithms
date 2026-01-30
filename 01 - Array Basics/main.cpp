#include <iostream>

using namespace std;

int main()
{
    // 1. Yol
    int A[5];
    A[0] = 10;
    A[1] = 20;
    A[2] = 30;
    A[3] = 40;
    A[4] = 50;

    cout << "Sizeof Array A: " << sizeof(A) << endl;
    cout << "2.indeks A: " << A[2] << endl;

    /* Output
     * Sizeof Array A: 20
     * 2.indeks A: 30
    */

    // 2. Yol
    int B[] = {20, 30, 40};

    cout << "Sizeof Array B: " << sizeof(B) << endl;
    cout << "2.indeks B: " << B[2] << endl;

    /* Output
     * Sizeof Array B: 12
     * 2.indeks B: 40
    */

    // 3. Yol
    int C[10] = {30};

    cout << "Sizeof Array C: " << sizeof(C) << endl;
    cout << "2.indeks C: " << C[2] << endl;

    /* Output
     * Sizeof Array C: 40
     * 2.indeks C: 0
    */

    // 4. Yol
    int D[10] = {40, 50, 60, 70, 80, 90, 100, 110, 120, 130};

    for (int i = 0; i < 10; i++)
    {
        cout << (i+1) << ".indeks: " << D[i] << endl;
    }

    /* Output
     * 1.indeks: 40
     * 2.indeks: 50
     * 3.indeks: 60
     * 4.indeks: 70
     * 5.indeks: 80
     * 6.indeks: 90
     * 7.indeks: 100
     * 8.indeks: 110
     * 9.indeks: 120
     * 10.indeks: 130
    */

    // 5. Yol
    int E[10] = {50, 60, 70, 80, 90, 100, 110, 120, 130, 140};

    for (int x : E)
    {
        cout << "E: " << x << endl;
    }

    /* Output
     * E: 50
     * E: 60
     * E: 70
     * E: 80
     * E: 90
     * E: 100
     * E: 110
     * E: 120
     * E: 130
     * E: 140
    */

    // 6. Yol
    // int n = 0;
    // cout << "Eleman sayisi giriniz: ";
    // cin >> n;

    // int F[n];
    // F[0] = 60;

    // for (int x : F)
    // {
    //     cout << "F: " << x << endl;
    // }

    /* Output
     * COMPILE ERROR
     * Array size olarak constant degisken bekliyor.
     * Dinamik array isteniyorsa vektor kullanimi onerilir
    */

    return 0;
}
