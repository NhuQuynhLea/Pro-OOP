#pragma once
#include "CanBo.h"


class BaoVe : public CanBo {
protected:
	string khuvuc;
public:
	BaoVe();
	void Nhap();
	void In();
	int Luong()override;
};

