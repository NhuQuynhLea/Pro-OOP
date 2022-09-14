#include "CongTy2.h"

CongTy2::CongTy2() {};

void CongTy2::ThemNVVP() {
	NhanVienVP* nhanVienVp = new NhanVienVP();
	nhanVienVp->Nhap();
	dsNhanVien.push_back(nhanVienVp);
}

void CongTy2::ThemNVSX() {
	NhanVienSX* nhanVienSx = new NhanVienSX();
	nhanVienSx->Nhap();
	dsNhanVien.push_back(nhanVienSx);
}

void CongTy2::Sua() {
	string ten;
	cin.ignore();
	cout << "Nhap ten nhan vien can sua: \n";
	getline(cin, ten);
	NhanVien* nhanVien = TimNhanVien(ten);
	NhanVienVP* nhanvienVP = dynamic_cast<NhanVienVP*>(nhanVien);
	if (nhanvienVP)
	{
		nhanvienVP->Sua();
	}
	else {
		NhanVienSX* nhanvienSX = dynamic_cast<NhanVienSX*>(nhanVien);
		if (nhanvienSX)
		{
			nhanvienSX->Sua();
		}
	}
}
void CongTy2::Xuat() {
	string ten;
	cin.ignore();
	cout << "Nhap ten nhan vien can xuat thong tin: \n";
	getline(cin, ten);
	NhanVien* nhanVien = TimNhanVien(ten);
	NhanVienVP* nhanvienVP = dynamic_cast<NhanVienVP*>(nhanVien);
	if (nhanvienVP)
	{
		nhanvienVP->In();
	}
	else {
		NhanVienSX* nhanvienSX = dynamic_cast<NhanVienSX*>(nhanVien);
		if (nhanvienSX)
		{
			nhanvienSX->In();
		}
	}
}
  NhanVien* CongTy2::TimNhanVien(string ten) {
	for (auto i: dsNhanVien) {
		if (ten == i->LayTen()) return i;
	}
	cout << "Khong tim thay nhan vien \n";
	return NULL;
}

  void CongTy2::TongLuong() {
	  long long sum = 0;
	  for (auto i : dsNhanVien) sum += i->TinhLuong();
	  cout << "Tong luong la: " << sum << "\n";
  }