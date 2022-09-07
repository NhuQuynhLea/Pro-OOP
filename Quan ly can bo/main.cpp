
#include "QLCB.h"
int main()
{
    QLCB qlcb;
    int chon = 0;
    while (chon <= 5) {
        cout << "1.Them mot cong nhan\n";
        cout << "2.Them mot ky su\n";
        cout << "3.Them mot bao ve\n";
        cout << "4.In ra thong tin theo ten\n";
        cout << "5.Tinh luong theo ten\n";
        cout << "6.Thoat\n";
        cout << "chon\n";
        cin >> chon;
        switch (chon)
        {
        case 1:
        {
            qlcb.ThemCN();
            break;
        }
        case 2:
        {
            qlcb.ThemKS();
            break;
        }
        case 3:
        {
            qlcb.ThemBV();
            break;
        }
        case 4:
        {
            string tencanbo;
            cout << "Nhap ten can bo can tim\n";
            cin.ignore();
            getline(cin, tencanbo);
            qlcb.InTT(tencanbo);
            break;
        }
        case 5:
        {
            string tencanbo;
            cout << "Nhap ten can bo can tim\n";
            cin.ignore();
            getline(cin, tencanbo);
            qlcb.TinhLuong(tencanbo);
            break;
        }
        case 6:
        {
            cout << "Default\n";
        }
        }
    }

}

