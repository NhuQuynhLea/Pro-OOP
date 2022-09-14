#pragma once
#include<iostream>
#include<string>
using namespace std;

class NhanVien {
protected:
	string ten;
	int luongCoBan;
public:
	NhanVien();
	void Nhap();
	void In();
	void Sua();
	string LayTen() {
		return ten;
	}
	virtual int TinhLuong() = 0;
};