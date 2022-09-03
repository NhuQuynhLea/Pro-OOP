#pragma once
#include<vector>
#include "Giaovien.h"
#include "Sinhvien.h"
#include<iostream>
using namespace std;

class TruongHoc {
private:
	vector<SinhVien> dsSinhVien;
	vector<GiaoVien> dsGiaoVien;
public:
	void themSinhVien();
	void themGiaoVien();
	void xuatdsSinhVien();
	void xuatdsGiaoVien();
	int tinhTienLai();
};