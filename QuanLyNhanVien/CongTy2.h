#pragma once
#include "NhanVien.h"
#include "NhanVienSanXuat.h"
#include "NhanVienVanPhong.h"
#include<vector>
class CongTy2 {
private:
	vector<NhanVien*> dsNhanVien;
	
public:
	CongTy2();
	void ThemNVVP();
	void ThemNVSX();
	void Sua();
	void Xuat();
	void TongLuong();
	NhanVien* TimNhanVien(string);
};
