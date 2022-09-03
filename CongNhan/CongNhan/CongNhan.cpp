#pragma once
#include "CongNhan.h"

CongNhan::CongNhan() {}



void CongNhan::Nhap()
{
    cin.ignore();
    cout << "nhap ten: ", getline(cin, ten);
    cout << "nhap tuoi: ", cin >>tuoi;
    cout << "nhap gt: ", cin >> gioitinh;
    cin.ignore();
    cout << "nhap que quan: ", getline(cin, quequan);
    cout<<"nhap ngay lam: ",cin >> ngaylam;
   
}
int CongNhan::Luong() {
    return ngaylam * 100000;
}
void CongNhan::In()
{
    cout << ten << " " << tuoi << " " << gioitinh << " " << quequan << " " << ngaylam<<"\n";
}


