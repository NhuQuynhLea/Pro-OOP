#include "CongTy.h"

CongTy::CongTy() {};

void CongTy::ThemNVVP() {
	shared_ptr<NhanVienVP>nhanVienVP = make_shared<NhanVienVP>();
	nhanVienVP->Nhap();
	dsNhanVien.push_back(nhanVienVP);
}
void CongTy::ThemNVSX() {
	shared_ptr<NhanVienSX>nhanVienSX = make_shared<NhanVienSX>();
	nhanVienSX->Nhap();
	dsNhanVien.push_back(nhanVienSX);

}
void CongTy::Sua() {
	string ten;
	cin.ignore();
	cout << "Nhap ten nhan vien can sua: \n";
	getline(cin, ten);
	shared_ptr<NhanVien> nhanVien = TimNhanVien(ten);
	shared_ptr<NhanVienVP> nhanvienVP = dynamic_pointer_cast<NhanVienVP>(nhanVien);
	if (nhanvienVP)
	{
		nhanvienVP->Sua();
	}
	else {
		shared_ptr<NhanVienSX> nhanvienSX = dynamic_pointer_cast<NhanVienSX>(nhanVien);
		if (nhanvienSX)
		{
			nhanvienSX->Sua();
		}
	}
}

void CongTy::Xuat() {
	string ten;
	cin.ignore();
	cout << "Nhap ten nhan vien can xuat thong tin: \n";
	getline(cin, ten);
	shared_ptr<NhanVien> nhanVien = TimNhanVien(ten);
	shared_ptr<NhanVienVP> nhanvienVP = dynamic_pointer_cast<NhanVienVP>(nhanVien);
	if (nhanvienVP)
	{
		nhanvienVP->In();
	}
	else {
		shared_ptr<NhanVienSX> nhanvienSX = dynamic_pointer_cast<NhanVienSX>(nhanVien);
		if (nhanvienSX)
		{
			nhanvienSX->In();
		}
	}
}
shared_ptr<NhanVien> CongTy::TimNhanVien(string ten) {
	for (auto nhanVien : dsNhanVien) {
		if (ten == nhanVien->LayTen()) return nhanVien;
	}
	cout << "Khong tim thay nhan vien \n";
	return shared_ptr<NhanVien>(nullptr);
}

void CongTy::TongLuong() {
	long long sum = 0;
	for (auto i : dsNhanVien) sum += i->TinhLuong();
	cout << "Tong luong la: " << sum << "\n";
}