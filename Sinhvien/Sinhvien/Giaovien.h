#pragma once
#include<string>
#include<iostream>
using namespace std;

class GiaoVien {
private:
	string ten, monDay;
	int soTiet;
public:
	void nhap();
	void in();
	int tinhTienLuong();
	void setSoTiet(int sotiet) {
		soTiet = sotiet;
	}
};