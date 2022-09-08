#include "QLCB.h"

void QLCB::ThemCN()
{
	shared_ptr<CongNhan>congNhan = make_shared<CongNhan>();
	congNhan->Nhap();
	dsCanBo.push_back(congNhan);
}
void QLCB::ThemKS()
{
	shared_ptr<KySu>kySu = make_shared<KySu>();
	kySu->Nhap();
	dsCanBo.push_back(kySu);
}
void QLCB::ThemBV()
{
	shared_ptr<BaoVe>baoVe = make_shared<BaoVe>();
	baoVe->Nhap();
	dsCanBo.push_back(baoVe);
}
void QLCB::InTT(string ten)
{
	for (auto i : dsCanBo)
	{
		if (i->TenCanBo() == ten) {
			i->In();
			return;
		}
	}
	cout << "Khong tim thay " << ten << "\n";
}
void QLCB::TinhLuong(string ten)
{
	for (auto i : dsCanBo)
	{
		if (i->TenCanBo() == ten) {
			cout << "Luong cua " << ten << ": " << i->Luong() << "\n";
			return;
		}
	}
	cout << "Khong tim thay " << ten << "\n";
}