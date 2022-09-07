#include "CanBo.h"
CanBo::CanBo() {};
void CanBo::Nhap(string macanbo) {
	cin.ignore();
	cout << "Nhap ten: ", getline(cin, ten);
	cout << "Nhap tuoi: ", cin >> tuoi;
	cout << "Nhap gioi tinh: ", cin >> gioitinh;
	cout << "Nhap dia chi: ", cin >> diachi;
	cout << "Nhap so dien thoai: ", cin >> sodt;
	cin.ignore();
	cout << "Nhap que quan: ", getline(cin, quequan);
	this -> macanbo = macanbo;
	cout << "Nhap he so luong: ", cin >> hesoluong;
	cout << "Nhap so ngay cong: ", cin >> ngaycong;
}
void CanBo::In() {
	cout << "["<< macanbo << "]-"<<ten << "-" << tuoi << "-" << gioitinh << "-" ;
	cout << diachi << "-" << sodt << "-";
	cout << quequan << "-";
	cout << hesoluong << "-" << ngaycong << "-";
}
string CanBo::TenCanBo() {
	return ten;
}
	