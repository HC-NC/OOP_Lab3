#include <iostream>
#include <windows.h>

using namespace std;

void start();

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    MENU:
    system("cls");

    cout << "\nЛабораторная 3\n" << endl;
    cout << "1. Условие задачи по варианту." << endl;
    cout << "2. Решение задачи по варианту" << endl;
    cout << "3. Выход из программы" << endl;

    int n;

    cout << "\nВведите номер пункта меню: ";
    cin >> n;

    switch (n)
    {
    case 1:
        system("cls");
        cout << "С клавиатуры вводится целое четырехзначное число. Найти сумму всех четных цифр данного числа." << endl;
        break;
    case 2:
        start();
        break;
    case 3:
        return 0;
    default:
        cout << "Пункта с номером " << n << " не существует!" << endl;
        break;
    }

    system("pause");

    goto MENU;
}

void start() 
{
    system("cls");

    int num;

    cout << "Введите целое 4-х значное число: ";
    cin >> num;

    if (num < 1000 || num > 9999)
    {
        cout << "Введено неверное значение" << endl;
        return;
    }

    int res = 0;

    /*
    int tmp;

    while (num > 0)
    {
        tmp = num % 10;
        num /= 10;

        if (tmp % 2 == 0)
            res += tmp;
    }
    */

    if ((num % 10) % 2 == 0)
        res += num % 10;

    if (((num / 10) % 10) % 2 == 0)
        res += (num / 10) % 10;

    if (((num / 100) % 10) % 2 == 0)
        res += (num / 100) % 10;

    if ((num / 1000) % 2 == 0)
        res += num / 1000;

    cout << "Сумма чётных: " << res << endl;
}