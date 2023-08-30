#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    system("color F0");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string fname;
    string lname;
    int age = 0;
    string hobby;
    string university;
    string city;

    //Ім'я
    cout << "Введіть ваше ім'я: ";
    getline(cin, fname);

    //Прізвище
    cout << "Введіть ваше прізвище: ";
    getline(cin, lname);

    //Вік
    cout << "Введіть вік: ";
    cin >> age;
    cin.ignore();

    //Місто
    cout << "Введіть ваше місто: ";
    getline(cin, city);

    //Місце навчання
    cout << "Введіть ваше місце навчання: ";
    getline(cin, university);

    //Хоббі
    cout << "Введіть ваше хоббі: ";
    getline(cin, hobby);

    //Очищуємо консоль
    system("cls");

    cout << "\nВведені дані: " << endl;
    cout << "Прізвище: " << lname << endl;
    cout << "Ім'я: " << fname << endl;
    cout << "Вік: " << age << endl;
    cout << "Місто: " << city << endl;
    cout << "Місце навчання: " << university << endl;
    cout << "Хоббі: " << hobby << endl;

    return 0;
}