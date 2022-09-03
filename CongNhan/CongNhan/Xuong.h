#pragma once
#include<string>
#include <iostream>
#include "CongNhan.h"
#include "CanBo.h"
#include <vector>
#include<algorithm>

using namespace std;

class Xuong {
private:
	vector<CongNhan> dsCongNhan;
	CanBo canBo;
public:
	Xuong();
	int TongTienLuong();
	void ThemCongNhan();
	void NhapCanBo();
	void SapXepLuongCongNhan();
	void SapXepTenCongNhan();
	void InCanBo();
	void InCongNhan();
	int LuongCanBo();
	static bool SoSanhTen(CongNhan & a, CongNhan& b) {
		return a.getName() < b.getName();
	}
	static bool SoSanhLuong(CongNhan& a, CongNhan& b) {
		return a.Luong() < b.Luong();
	}
};