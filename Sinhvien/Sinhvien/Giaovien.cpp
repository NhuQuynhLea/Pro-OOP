#include "Giaovien.h"

void GiaoVien::nhap() {
	cin.ignore();
	cout << "Nhap ten giao vien: ", getline(cin,ten);
	cout << "Nhap mon day: ", getline(cin,monDay);
	cout << "Nhap so tiet day: ", cin >> soTiet;
}

void GiaoVien::in() {
	cout << ten << " " << monDay << " " << soTiet << "\n";
}
int GiaoVien::tinhTienLuong() {
	return soTiet * 100000;
}