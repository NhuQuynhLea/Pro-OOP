#pragma once
#include "NhanVien.h"

class NhanVienVP :public NhanVien{
protected:
	int songay;
public:
	NhanVienVP();
	void Nhap();
	void In();
	void Sua();
	int TinhLuong();
};