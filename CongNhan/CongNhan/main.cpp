
#include <iostream>
#include "CongNhan.h"
#include "CanBo.h"
#include "Xuong.h"
#include<iomanip>
int main()
{
    Xuong xuong;
    int choose = 0;
    while(choose < 9) {
        cout << "====================MENU======================\n";
        cout << "1.Nhap thong tin can bo\n";
        cout << "2.Them moi mot cong nhan\n";
        cout << "3.Hien thi thong tin can bo \n";
        cout << "4.Hien thi thong tin tat ca cac cong nhan\n";
        cout << "5.Tinh tien luong can bo \n";
        cout << "6.Tinh tong tien luong cua cong nhan\n";
        cout << "7.Sap xep thu tu cong nhan theo luong giam dan\n";
        cout << "8.sap xep thu tu cong nhan theo ten(theo thu tu tu dien) \n";
        cout << "9.Thoat\n";
        cin >> choose;
        switch (choose)
        {
        case 1: {
            xuong.NhapCanBo(); break;
        }
        case 2: {
            xuong.ThemCongNhan();
            break;
        }
        case 3: {
            xuong.InCanBo();
            break;
        }
        case 4: {
            xuong.InCongNhan();
            break;
        }
        case 5: {
            cout << xuong.LuongCanBo()<<  "\n";
            break;
        }
        case 6: {
            cout << xuong.TongTienLuong()<<"\n";
            break;
        }
        case 7: {
            xuong.SapXepLuongCongNhan();
            //xuong.InCongNhan();
            break;
        }
        case 8: {
            xuong.SapXepTenCongNhan();
           // xuong.InCongNhan();
            break;
        }
        };
    }
}

