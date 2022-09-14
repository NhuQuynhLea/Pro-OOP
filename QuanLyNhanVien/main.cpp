#include "CongTy2.h"



int main()
{
    CongTy2 a;
    int chon = 0;
    while (chon <= 5)
    {
        cout << "Nhap lua chon \n";
        cout << "1.Them nhan vien van phong \n";
        cout << "2.Them nhan vien san xuat \n";
        cout << "3.Xuat thong tin nhan vien theo ten \n";
        cout << "4.Sua thong tin nhan vien theo ten \n";
        cout << "5.Tinh tong luong cua cong ty \n";
        cout << "6.Thoat \n";
        cin >> chon;
        switch (chon)
        {
        case 1:
        {
            a.ThemNVVP();
            break;
        }
        case 2:
        {
            a.ThemNVSX();
            break;
        }
        case 3:
        {
            a.Xuat();
            break;
        }
        case 4:
        {
            a.Sua();
            break;
        }
        case 5:
        {
            a.TongLuong();
            break;
        }
        }
    }
}
