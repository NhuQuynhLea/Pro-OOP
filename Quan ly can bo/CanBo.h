#pragma once
#include<iostream>
#include<string>
using namespace std;

class CanBo {
protected:
	string ten, gioitinh,diachi,sodt,quequan,macanbo;
	int tuoi,hesoluong,ngaycong;
	
public:
	CanBo();
	void Nhap(string);
	void In();
	string TenCanBo();
	virtual int Luong()=0;
};
