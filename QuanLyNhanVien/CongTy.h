#pragma once
#include "NhanVienSanXuat.h"
#include "NhanVienVanPhong.h"
#include<vector>


class CongTy {
protected:
	vector<shared_ptr<NhanVien>> dsNhanVien;
	shared_ptr<NhanVien> TimNhanVien(string);
public:
	CongTy();
	void ThemNVVP();
	void ThemNVSX();
	void Sua();
	void Xuat();
	void TongLuong();
};
