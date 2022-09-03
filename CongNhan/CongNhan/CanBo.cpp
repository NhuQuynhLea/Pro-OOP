#pragma once
#include "CanBo.h"

CanBo::CanBo() {}



void CanBo::Nhap()
{
    cin.ignore();
    cout << "nhap ten: ", getline(cin, ten);
    cout << "nhap tuoi: ", cin >> tuoi;
    cout << "nhap gt: ", cin >> gioitinh;
    cin.ignore();
    cout << "nhap que quan: ", getline(cin, quequan);
    cout<<"nhap he so luong: ",cin >> hesoluong;
    
}
int CanBo::Luong() {
    return hesoluong * 3000000;
}
void CanBo::In()
{
    cout << ten << " " << tuoi << " " << gioitinh << " " << quequan << " "<<hesoluong<<"\n";
}



