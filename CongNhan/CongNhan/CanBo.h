#pragma once
#include<string>
#include <iostream>
using namespace std;

class CanBo
{
private:
    string ten, gioitinh, quequan;
    int tuoi;
    int hesoluong;
    
public:
    CanBo();
    void Nhap();
    void In();
    int Luong();
    
}; 
