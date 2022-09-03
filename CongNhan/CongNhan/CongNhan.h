#pragma once
#include<string>
#include <iostream>
using namespace std;

class CongNhan
{
private:
    string ten, gioitinh, quequan;
    int tuoi, ngaylam;
    

public:
    CongNhan();
    string getName() {
        return ten;
    }
    void Nhap();
    void In();
   int Luong();
    
};