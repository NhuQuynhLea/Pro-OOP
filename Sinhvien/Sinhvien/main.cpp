
#include"Truonghoc.h"


int main()
{
	TruongHoc truongHoc;
	int chon;
	while (1)
	{
		cout << "1.Them sinh vien \n";
		cout << "2. Them giao vien \n";
		cout << "3. Xuat danh sach sinh vien \n";
		cout << "4.Xuat danh sach giao vien \n";
		cout << "5.Tinh tien luong 1 giao vien \n";
		cout << "6.Tinh tien hoc phi 1 sinh vien \n";
		cout << "7.Tinh tien lai cua truong hoc \n";
		cout << "8.Ket thuc \n";
		cin >> chon;
		switch(chon)
		{
		case 1: {
			truongHoc.themSinhVien(); break;
		}
		case 2: {
			truongHoc.themGiaoVien();
			break;
		}
		case 3: {
			truongHoc.xuatdsSinhVien();
			break;
		}
		case 4: {
			truongHoc.xuatdsGiaoVien();
			break;
		}
		case 5:
		{
			GiaoVien giaoVien;
			int sotiet;
			cout << "Nhap so tiet day: ", cin >> sotiet;
			giaoVien.setSoTiet(sotiet);
			cout<< giaoVien.tinhTienLuong()<<"\n";
			break;
		}
		case 6: {
			SinhVien sinhVien;
			int tinChi;
			cout << "Nhap so tin chi: ", cin >> tinChi;
			sinhVien.setTinchi(tinChi);
			cout << sinhVien.tinhHocPhi() << "\n";
			break;
		}
		case 7:
		{
			cout << truongHoc.tinhTienLai() << "\n";
			break;
		}
		case 8: return 0;
		}

	}
}


