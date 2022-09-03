#pragma once
#include "Xuong.h"

Xuong::Xuong() {}

void Xuong::ThemCongNhan() {
	CongNhan congNhan;
	congNhan.Nhap();
	dsCongNhan.push_back(congNhan);
}

void Xuong::NhapCanBo() {
	canBo.Nhap();
}

void Xuong::SapXepLuongCongNhan() {
	sort(dsCongNhan.begin(), dsCongNhan.end(),SoSanhLuong);
}
void Xuong::SapXepTenCongNhan() {
	sort(dsCongNhan.begin(), dsCongNhan.end(), SoSanhTen);
}
void Xuong::InCanBo() {
	canBo.In();
}
void Xuong::InCongNhan() {
	for (auto i : dsCongNhan) i.In();
}
int Xuong::TongTienLuong() {
	int sum = 0;
	for (auto i : dsCongNhan)
	{
		sum += i.Luong();
	}
	return sum;
}
int Xuong::LuongCanBo(){
	return canBo.Luong();
}