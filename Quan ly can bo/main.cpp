
#include "QLCB.h"
int main()
{
    QLCB qlcb;
    int chon = 0;
    while (chon< 3) {
        cout << "1.Them mot can bo\n";
        cout << "2.In ra thong tin theo ten\n";
        cout << "3.Tinh luong theo ten\n";
        cout << "4.Thoat\n";
        cout << "chon\n";
        cin >> chon;
        switch (chon)
        {
        case 1:
        {
            int choose;
            cout << "Chon:\n";
            cout << "1.Them mot cong nhan\n";
            cout << "2.Them mot ky su\n";
            cout << "3.Them mot bao ve\n";
            cin >> choose;
            if (choose == 1) qlcb.ThemCN();
            else if (choose == 2) qlcb.ThemKS();
            else qlcb.ThemBV();
            break;
        }
        case 2:
        {
            string tencanbo;
            cout << "Nhap ten can bo can tim\n";
            cin.ignore();
            getline(cin, tencanbo);
            qlcb.InTT(tencanbo);
            break;
        }
        case 3:
        {
            string tencanbo;
            cout << "Nhap ten can bo can tim\n";
            cin.ignore();
            getline(cin, tencanbo);
            qlcb.TinhLuong(tencanbo);
            break;
        }
        case 4:
        {
            cout << "Default\n";
        }
        }
    }

}

