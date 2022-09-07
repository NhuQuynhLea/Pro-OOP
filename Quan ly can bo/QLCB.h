#pragma once
#include "BaoVe.h"
#include "CongNhan.h"
#include "KySu.h"
#include "vector"

class QLCB {
private:
	vector<CongNhan> dsCongNhan;
	vector<KySu> dsKySu;
	vector<BaoVe> dsBaoVe;
public:
	void ThemCN();
	void ThemKS();
	void ThemBV();
	void InTT(string);
	void TinhLuong(string);
};