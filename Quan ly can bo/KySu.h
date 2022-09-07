#pragma once
#include "CanBo.h"


class KySu : public CanBo {
protected:
	string nganhdaotao;
	int namkinhnghiem;
public:
	KySu();
	void Nhap();
	void In();
	int Luong();
};
