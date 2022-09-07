#include "BaoVe.h"

int sttBV;

BaoVe::BaoVe() {};
void BaoVe::Nhap() {
	sttBV++;
	CanBo::Nhap("BV" + to_string(sttBV));
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