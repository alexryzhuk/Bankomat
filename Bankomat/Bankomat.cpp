// Bankomat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int n;
    cout << "Введіть суму " << endl;
    cin >> n;
    ofstream fileOut;
    string pas = "C:/Users/Саша/Desktop/2.txt";
    fileOut.open(pas);    
    if (!fileOut.is_open())
    {
        cout << "File dont open" << endl;
    }
    else {
        cout << "File open" << endl;
        fileOut << n << endl;
    }
    fileOut.close();

    ifstream fileIn;
    fileIn.open(pas);
    const int L = 6;
    int bill[L] = { 500, 200, 100, 50, 20, 10 };
    int n1, sum, p, k;
    fileIn >> n1;
    if (n % 10 == 0)
    {
        sum = k = p = 0;
        while (sum != n1)
        {
            sum += bill[p];
            k++;
            if (sum > n1)
            {
                sum -= bill[p];
                k--;
                p++;
            }
        }
        cout <<"Мінімальна кількість куп*юр: " << k << endl;
        fileOut << k;
    }
    else
        cout << -1 << endl;
    fileOut.close();
}
