// Bai10_DientichchuviHinhChuNhat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "TINH DIEN TICH CHU VI HINH CHU NHAT:\n";
    double dai, rong, chuvi, dientich;
    cout << "Nhap chieu dai:"; cin >> dai;
    cout << "Nhap chieu rong:"; cin >> rong;

    chuvi = (dai + rong) * 2;
    dientich = dai * rong;
    cout << "Chu vi: " << chuvi << endl;
    cout << "Dien tich: " << dientich << endl;

    return 0;
}
