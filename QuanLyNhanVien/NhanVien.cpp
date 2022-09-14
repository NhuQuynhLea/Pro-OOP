#include "NhanVien.h"

NhanVien::NhanVien() {};

void NhanVien::Nhap() {
	cin.ignore();
	cout << "Nhap ten: \n", getline(cin, ten);
	cout << "Luong co ban: \n", cin >> luongCoBan;
}

void NhanVien::In() {
	cout << ten << " " << luongCoBan << " " << TinhLuong() << "\n";
}

void NhanVien::Sua() {
	cout << "Enter de giu gia tri cu hoac nhap gia tri moi: \n";
	string ten;
	cout << "Ten [" << this->ten << "]: \n";
	getline(cin, ten);
	if (ten.size() > 0)
	{
		this->ten = ten;

	}

	string luongCoBan;
	cout << "luong co ban [" << this->luongCoBan << "]: \n";
	getline(cin, luongCoBan);
	if (luongCoBan.size() > 0) {

		this->luongCoBan = stoi(luongCoBan);

	}

}