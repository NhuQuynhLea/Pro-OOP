#include "CongNhan.h"

int sttCN;
CongNhan::CongNhan() {};

void CongNhan::Nhap() {
	sttCN++;
	
	CanBo::Nhap("CN" + to_string(sttCN));
	cout << "Nhap bac: ", cin >> bac;
}
void CongNhan::In() {
	CanBo::In();
	cout << bac << "\n";
}
int CongNhan::Luong() {
	return bac * ngaycong * hesoluong;
}