#include "Sinhvien.h"

void SinhVien::nhap() {
	cin.ignore();
	cout << "Nhap ten sinh vien: "; getline(cin, ten);
	cout << "Nhap ma sinh vien: ", cin >> msv;
	cout << "Nhap diem: ", cin >> diem;
	cout << "Nhap so tin chi: ", cin >> tinchi;
}
void SinhVien::in() {
	cout << ten << " " << msv << " " << diem << " " << tinchi << "\n";
}
int SinhVien::tinhHocPhi() {
	return tinchi * 940000;
}
string SinhVien::xetHocLuc() {
	if (diem > 8) return "Gioi";
	else if (diem < 8 && diem > 5) return "Kha";
	else return "Kem";
}
