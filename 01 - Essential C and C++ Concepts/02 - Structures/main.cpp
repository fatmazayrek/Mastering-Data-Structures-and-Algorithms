#include <iostream>
#include <string>

using namespace std;

/*
 * Structure kullanici tanimli veri yapisidir.
 * Birden fazla turdeki verileri bir araya toplayarak verimli bir veri yapisi olusturur.
*/

struct Student
{
    int id;
    char name[25];
    char lastName[25];
    int lessons;
    double percentOfSuccess;
};

int main()
{
    // 1. Yol
    Student s1;
    s1.id = 10;
    strcpy(s1.name, "Ahmet");
    strcpy(s1.lastName, "Yener");
    s1.lessons = 9;
    s1.percentOfSuccess = 90.2;

    cout << "Sizeof structure Student: " << sizeof(s1) << endl;
    cout << "Id: " << std::to_string(s1.id) << endl;
    cout << "name: " << s1.name << endl;
    cout << "lastname: " << s1.lastName << endl;
    cout << "lessons: " << std::to_string(s1.lessons) << endl;
    cout << "percent: " << std::to_string(s1.percentOfSuccess) << endl;

    // 2.Yol
    Student s2 = {29, "Fatma", "Zayrek", 10, 99.3};

    cout << endl;
    cout << "Id: " << std::to_string(s2.id) << endl;
    cout << "name: " << s2.name << endl;
    cout << "lastname: " << s2.lastName << endl;
    cout << "lessons: " << std::to_string(s2.lessons) << endl;
    cout << "percent: " << std::to_string(s2.percentOfSuccess) << endl;

    return 0;
}
