#include "Truonghoc.h"

void TruongHoc::themSinhVien() {
	SinhVien sinhVien;
	sinhVien.nhap();
	dsSinhVien.push_back(sinhVien);
}
void TruongHoc::themGiaoVien() {
	GiaoVien giaoVien;
	giaoVien.nhap();
	dsGiaoVien.push_back(giaoVien);
}
void TruongHoc::xuatdsSinhVien() {
	for (auto i : dsSinhVien)
		 i.in();
}
void TruongHoc::xuatdsGiaoVien() {
	for (auto i : dsGiaoVien) i.in();
}
int TruongHoc::tinhTienLai() {
	int sum1 = 0, sum2 = 0;
	for (auto i : dsSinhVien) sum1 += i.tinhHocPhi();
	for (auto j : dsGiaoVien) sum2 += j.tinhTienLuong();
	return sum1 - sum2;
}

