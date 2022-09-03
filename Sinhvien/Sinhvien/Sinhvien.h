#pragma once
#include <string>
#include <iostream>
using namespace std;

class SinhVien {
private:
	string ten, msv;
	int tinchi;
	float diem;
public:
	void in();
	void nhap();
	void setTinchi(int tinChi) {
		tinchi = tinChi;
	};
	int tinhHocPhi();
	string xetHocLuc();
	
};