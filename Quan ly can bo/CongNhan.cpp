#include "CongNhan.h"

int sttCN;
CongNhan::CongNhan() {};

void CongNhan::Nhap() {
	sttCN++;
	string tmp = to_string(sttCN);
	while (tmp.length() < 3)
	{
		tmp = '0' + tmp;
	}
	CanBo::Nhap("CN" + tmp);
	cout << "Nhap bac: ", cin >> bac;
}
void CongNhan::In() {
	CanBo::In();
	cout << bac << "\n";
}
int CongNhan::Luong() {
	return bac * ngaycong * hesoluong;
}