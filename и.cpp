﻿
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <cmath>
#include <random> 

using namespace std;
void zad1()
{
    int summas[5];
    cout << "Введите 5 целых чисел" << endl;
    cin >> summas[0];
    cin >> summas[1];
    cin >> summas[2];
    cin >> summas[3];
    cin >> summas[4];
    cout << summas[0] + summas[1] + summas[2] + summas[3] + summas[4];
}
void zad2()
{
    int summas[10];
    cout << "Введите 10 целых чисел" << endl;
    cin >> summas[0];
    cin >> summas[1];
    cin >> summas[2];
    cin >> summas[3];
    cin >> summas[4];
    cin >> summas[5];
    cin >> summas[6];
    cin >> summas[7];
    cin >> summas[8];
    cin >> summas[9];
    int max = summas[0];
    for (int i = 0; i <= 9; i++) {
        if (summas[i] > max)
            max = summas[i];
    }
    cout << max;


}
void zad3()
{
    int summas[10];
    cout << "Введите 10 целых чисел" << endl;
    cin >> summas[0];
    cin >> summas[1];
    cin >> summas[2];
    cin >> summas[3];
    cin >> summas[4];
    cin >> summas[5];
    cin >> summas[6];
    cin >> summas[7];
    cin >> summas[8];
    cin >> summas[9];
    int min = summas[0];
    for (int i = 0; i <= 9; i++) {
        if (summas[i] < min)
            min = summas[i];
    }
    cout << min;


}
void zad4() {

    int summas[6];
    double sum = 0;
    cout << "Введите 6 целых чисел" << endl;
    cin >> summas[0];
    cin >> summas[1];
    cin >> summas[2];
    cin >> summas[3];
    cin >> summas[4];
    cin >> summas[5];


    for (int i = 0; i <= 5; i++)
    {
        sum += summas[i];
    }
    sum /= 6;
    cout << sum;


}
void zad5()
{
    int summas[5];
    cout << "Введите 5 целых чисел" << endl;
    cin >> summas[0];
    cin >> summas[1];
    cin >> summas[2];
    cin >> summas[3];
    cin >> summas[4];
    for (int i = 4; i >= 0; i--)
    {
        cout << summas[i];
    }
}
void zad6() {
    int plus = 0;
    int minus = 0;
    int summas[10];
    cout << "Введите 10 целых чисел" << endl;
    cin >> summas[0];
    cin >> summas[1];
    cin >> summas[2];
    cin >> summas[3];
    cin >> summas[4];
    cin >> summas[5];
    cin >> summas[6];
    cin >> summas[7];
    cin >> summas[8];
    cin >> summas[9];

    for (int i = 0; i <= 9; i++) {
        if (summas[i] > 0)
        {
            plus++;
        }
        else if (summas[i] < 0)
        {
            minus++;
        }
    }
}
void zad7()
{
    {

        int a;
        int summas[10];
        cout << "Введите 10 целых чисел" << endl;
        cin >> summas[0];
        cin >> summas[1];
        cin >> summas[2];
        cin >> summas[3];
        cin >> summas[4];
        cin >> summas[5];
        cin >> summas[6];
        cin >> summas[7];
        cin >> summas[8];
        cin >> summas[9];
        cout << "Введите число которое хотите найти" << endl;
        cin >> a;

        for (int i = 0; i <= 9; i++) {
            if (summas[i] = a)
            {
                cout << "индекс нужного числа = " << i;
            }


        }
    }
}
void zad8() {
    int summas[5];
    cout << "Введите 5 целых чисел" << endl;
    cin >> summas[0];
    cin >> summas[1];
    cin >> summas[2];
    cin >> summas[3];
    cin >> summas[4];
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (summas[j] > summas[j + 1])
            {
                swap(summas[j], summas[j + 1]);
            }

        }
    }
    for (int i = 0; i <= 4; i++) {
        cout << summas[i] << ' ';
    }
}
void zad9()
{
    vector<int> summas(10);
    int n;

    cout << "Введите 10 целых чисел:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> summas[i];
    }
    cout << "введите какое число по счету вы хотиде удолить из массива";
    cin >> n;
    summas.erase(summas.begin() + n - 1);
    for (int i = 0; i < summas.size(); i++)
    {
        cout << summas[i] << " ";
    }
}
void zad10()
{
    int summas[5];
    int copy[5];


    cout << "Введите 5 целых чисел:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> summas[i];
    }


    for (int i = 0; i < 5; i++) {
        copy[i] = summas[i];
    }

    cout << "Скопированные элементы:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << copy[i] << ' ';
    }
}
void zad11()
{
    int summas[5];
    int summas2[5];
    int smes[size(summas) + size(summas2)];


    cout << "Введите 5 целых чисел первого массива: " << endl;

    for (int i = 0; i <= size(summas) - 1; i++)
    {
        cin >> summas[i];
    }

    cout << "Введите 5 целых чисел второго массива: " << endl;

    for (int i = 0; i <= size(summas2) - 1; i++)
    {
        cin >> summas2[i];
    }

    for (int i = 0; i <= size(summas) - 1; i++)
    {
        smes[i] = summas[i];
    }
    for (int i = 5; i <= size(smes) - 1; i++)
    {
        smes[i] = summas2[i - 5];
    }

    cout << "Массивы вместе: " << endl;
    for (int i = 0; i <= size(smes) - 1; i++)
    {

        cout << smes[i];
    }
}
void zad12() {
    int summas[10];
    vector<int> chet;
    vector<int> nechet;

    cout << "Введите 10 целых чисел:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> summas[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (summas[i] % 2 == 0)
        {
            chet.push_back(summas[i]);

        }
        else
        {
            nechet.push_back(summas[i]);
        }

    }
    cout << "четные : ";
    for (int i = 0; i < chet.size(); i++)
    {
        cout << chet[i] << " ";
    }
    cout << "нечетные: ";
    for (int i = 0; i < nechet.size(); i++)
    {
        cout << nechet[i] << " ";
    }
}
void zad13()
{
    int summas[10];
    bool simet = true;
    int n = sizeof(summas) / sizeof(summas[0]);

    cout << "Введите 10 целых чисел массива: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> summas[i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        if (summas[i] != summas[n - 1 - i])
        {
            simet = false;
            break;
        }
    }

    if (simet) {
        cout << "Массив симметричен." << endl;
    }
    else {
        cout << "Массив не симметричен." << endl;
    }


}
void zad14()
{
    int summas[5];
    vector<int> kvadrat;


    cout << "Введите 5 целых чисел:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> summas[i];
    }
    for (int i = 0; i < 5; i++)
    {
        kvadrat.push_back(pow(summas[i], 2));
    }
    cout << "квадрат чисел в массиве: ";
    for (int i = 0; i < kvadrat.size(); i++)
    {
        cout << kvadrat[i] << " ";
    }
}
void zad15()
{
    int summas[10];
    vector<int> chet;
    vector<int> nechet;
    int sum1 = 0;
    int sum2 = 0;

    cout << "Введите 10 целых чисел:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> summas[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (summas[i] % 2 == 0)
        {
            chet.push_back(summas[i]);

        }
        else
        {
            nechet.push_back(summas[i]);
        }

    }
    cout << "четные : ";
    for (int i = 0; i < chet.size(); i++)
    {
        cout << chet[i] << " ";
        sum1 += chet[i];
    }

    for (int i = 0; i < nechet.size(); i++)
    {
        cout << nechet[i] << " ";
        sum2 += nechet[i];
    }

    cout << "cумма четных: " << sum1 << endl;
    cout << "нечетные: " << sum2 << endl;

}
void zad16() {
    int summas[10];
    bool dublicat = false;

    cout << "Введите 10 целых чисел:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> summas[i];
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (summas[i] == summas[j] && i != j)
                dublicat = true;
            break;
        }
    }
    if (dublicat)
    {
        cout << "в массиве есть дубликат";
    }
    else {
        cout << "дубликата нет";
    }
}
void zad17()
{
    int summas[3];
    cout << "Введите 3 целых чисел массива: " << endl;
    for (int i = 0; i <= size(summas) - 1; i++)
    {
        cin >> summas[i];
    }
    int end = summas[0];

    for (int i = 0; i <= size(summas) - 1; i++)
    {
        summas[i] = summas[i + 1];
    }
    summas[size(summas) - 1] = end;
    cout << "Массив со сдвигом влево: " << endl;
    for (int i = 0; i <= size(summas) - 1; i++)
    {
        cout << summas[i] << endl;
    }
}
void zad18()
{
    int summas[5];
    int max = 0;
    int result = 0;
    cout << "Введите 5 целых чисел: " << endl;

    for (int i = 0; i <= size(summas) - 1; i++)
    {
        cin >> summas[i];
    }

    for (int i = 0; i <= size(summas) - 1; i++) {
        if (summas[i] > max) {
            max = summas[i];
        }
    }
    for (int i = 0; i <= size(summas) - 1; i++) {
        if (summas[i] > result) {
            if (result < max && max != summas[i]) {
                result = summas[i];
            }
        }
    }
    cout << "Второе наибольшее число: " << result << endl;
}
void zad19()
{
    int summas[10];
    random_device rndomo;
    mt19937 gener(rndomo());
    uniform_int_distribution<> dis(0, 100);

    for (int i = 0; i <= size(summas) - 1; i++)
    {
        summas[i] = dis(gener);
    }
    cout << "Массив случайных чисел: " << endl;
    for (int i = 0; i <= size(summas) - 1; i++)
    {
        cout << summas[i] << endl;
    }
}
void zad20()
{
    int summas[5];
    int summas2[5];
    bool ravno = true;
    int j = 0;

    cout << "Введите 5 целых чисел первого массива: " << endl;

    for (int i = 0; i <= size(summas) - 1; i++)
    {
        cin >> summas[i];
    }
    cout << "Введите 5 целых чисел второго массива: " << endl;

    for (int i = 0; i <= size(summas2) - 1; i++)
    {
        cin >> summas2[i];
    }

    for (int i = 0; i <= size(summas2) - 1; i++, j++) {
        char a = summas[i];
        char b = summas2[j];

        if (a != b)
        {
            ravno = false;
        }
    }
    if (ravno)
    {
        cout << "Массивы равны.";
    }
    else
    {
        cout << "Массивы не равны.";
    }

}
int main()
{
    setlocale(LC_ALL, "RU");
    int nomer;
    cout << "Введите номер задания" << endl;
    cin >> nomer;
    switch (nomer)
    {
    case 1:
        zad1();
        break;
    case 2:
        zad2();
        break;
    case 3:
        zad3();
        break;
    case 4:
        zad4();
        break;
    case 5:
        zad5();
        break;
    case 6:
        zad6();
        break;
    case 7:
        zad7();
        break;
    case 8:
        zad8();
        break;
    case 9:
        zad9();
        break;
    case 10:
        zad10();
        break;
    case 11:
        zad11();
        break;
    case 12:
        zad12();
        break;
    case 13:
        zad13();
        break;
    case 14:
        zad14();
        break;
    case 15:
        zad15();
        break;
    case 16:
        zad16();
        break;
    case 17:
        zad17();
        break;
    case 18:
        zad18();
        break;
    case 19:
        zad19();
        break;
    case 20:
        zad20();
        break;
    default:
        break;
    }

}