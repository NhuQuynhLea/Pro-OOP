#pragma once
#include "CanBo.h"


class CongNhan : public CanBo {
protected:
	int bac;
public:
	CongNhan();
	void Nhap();
	void In();
	int Luong()override;
};
