#include "NhanVienVanPhong.h"

NhanVienVP::NhanVienVP() {};

void NhanVienVP::Nhap() {
	NhanVien::Nhap();
	cout << "So ngay lam viec: \n", cin >> songay;
}

void NhanVienVP::In() {
	NhanVien::In();
	cout << songay << "\n";
}

int NhanVienVP::TinhLuong() {
	return luongCoBan * songay;
}

void NhanVienVP::Sua() {
	NhanVien::Sua();
	string songay;
	cout << "So ngay [" << this->songay << "]: \n";
	getline(cin, songay);
	if (songay.size() > 0)
	{
		this->songay = stoi(songay);

	}
}