#include "NhanVienSanXuat.h"

NhanVienSX::NhanVienSX() {};

void NhanVienSX::Nhap() {
	NhanVien::Nhap();
	cout << "So san pham: \n", cin >> sosanpham;
	cout << "Tien cong 1 san pham: \n", cin >> tiencong;
}

void NhanVienSX::In() {
	NhanVien::In();
	cout << sosanpham << " " << tiencong << "\n";
}

int NhanVienSX::TinhLuong() {
	return tiencong * sosanpham;
}

void NhanVienSX::Sua() {
	NhanVien::Sua();
	string sosanpham;
	cout << "So san pham [" << this->sosanpham << "]: \n";
	getline(cin, sosanpham);
	if (sosanpham.size() > 0)
	{
		this->sosanpham = stoi(sosanpham);
	}
	string tiencong;

	cout << "Tien cong 1 san pham [" << this->tiencong << "]: \n";
	getline(cin, tiencong);
	if (tiencong.size() > 0)
	{
		this->tiencong = stoi(tiencong);
	}
}