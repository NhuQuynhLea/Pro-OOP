#pragma once
#include "NhanVien.h"

class NhanVienSX :public NhanVien{
protected:
	int sosanpham, tiencong;

public:
	NhanVienSX();
	void Nhap();
	void In();
	void Sua();
	int TinhLuong();
};