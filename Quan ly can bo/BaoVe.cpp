#include "BaoVe.h"

int sttBV;

BaoVe::BaoVe() {};
void BaoVe::Nhap() {
	sttBV++;
	string tmp = to_string(sttBV);
	while (tmp.length() < 3)
	{
		tmp = '0' + tmp;
	}
	CanBo::Nhap("BV" + tmp);
	cin.ignore();
	cout << "Nhap khu vuc bao ve: ", getline(cin,khuvuc);
}
void BaoVe::In() {
	CanBo::In();
	cout << khuvuc << "\n";
}

int BaoVe::Luong() {
	return ngaycong * hesoluong;
}