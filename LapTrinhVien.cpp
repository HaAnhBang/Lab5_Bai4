#include "LapTrinhVien.h"



LapTrinhVien::LapTrinhVien()
{
    overtime = 0;
}

LapTrinhVien::~LapTrinhVien()
{
}

void LapTrinhVien::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap so gio overtime: ";
    cin >> overtime;
}

void LapTrinhVien::Xuat()
{
    cout << "\nLap trinh vien:";
    NhanVien::Xuat();
    cout << "\nSo gio overtime: " << overtime;
    cout << endl;
}

void LapTrinhVien::TinhLuong()
{
    Luong = LuongCoBan + overtime * 200000;
}
