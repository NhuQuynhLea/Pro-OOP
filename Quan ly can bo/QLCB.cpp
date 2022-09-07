#include "QLCB.h"

void QLCB::ThemCN()
{
	CongNhan congNhan;
	congNhan.Nhap();
	dsCongNhan.push_back(congNhan);
}
void QLCB::ThemKS()
{
	KySu kySu;
	kySu.Nhap();
	dsKySu.push_back(kySu);
}
void QLCB::ThemBV()
{
	BaoVe baoVe;
	baoVe.Nhap();
	dsBaoVe.push_back(baoVe);
}
void QLCB::InTT(string ten)
{
	for (auto i : dsCongNhan)
	{
		if (i.TenCanBo() == ten) {
			i.In();
			return;
		}
	}
	for (auto i : dsKySu)
	{
		if (i.TenCanBo() == ten) {
			i.In();
			return;
		}
	}
	for (auto i : dsBaoVe)
	{
		if (i.TenCanBo() == ten) {
			i.In();
			return;
		}
	}
	cout << "Khong tim thay " << ten << "\n";
}
void QLCB::TinhLuong(string ten)
{
	for (auto i : dsCongNhan)
	{
		if (i.TenCanBo() == ten) {
			cout<<"Luong cua "<<ten<<": "<<i.Luong()<<"\n";
			return;
		}
	}
	for (auto i : dsKySu)
	{
		if (i.TenCanBo() == ten) {
			cout << "Luong cua " << ten << ": " << i.Luong()<<"\n";
			return;
		}
	}
	for (auto i : dsBaoVe)
	{
		if (i.TenCanBo() == ten) {
			cout << "Luong cua " << ten << ": " << i.Luong()<<"\n";
			return;
		}
	}
	cout << "Khong tim thay "<<ten<<"\n";
}