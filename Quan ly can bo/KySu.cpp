#include "KySu.h"

int sttKS;
KySu::KySu() {};

void KySu::Nhap() {
	sttKS++;
	string tmp = to_string(sttKS);
	while (tmp.length() < 3)
	{
		tmp = '0' + tmp;
	}
	CanBo::Nhap("KS" + tmp);
	cin.ignore();
	cout << "Nhap nganh dao tao: ", getline(cin,nganhdaotao);
	cout << "Nhap so nam kinh nghiem: ", cin >> namkinhnghiem;
}
void KySu::In() {
	CanBo::In();
	cout << nganhdaotao<<" "<<namkinhnghiem << "\n";
}

int KySu::Luong() {
	return namkinhnghiem * ngaycong * hesoluong;
}