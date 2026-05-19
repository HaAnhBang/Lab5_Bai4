#include "KiemChungVien.h"



KiemChungVien::KiemChungVien()
{
    SoLoi = 0;
}

KiemChungVien::~KiemChungVien()
{
}

void KiemChungVien::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap so loi phat hien duoc: ";
    cin >> SoLoi;
}

void KiemChungVien::Xuat()
{
    cout << "\nKiem chung vien:";
    NhanVien::Xuat();
    cout << "\nSo loi phat hien duoc: " << SoLoi;
    cout << endl;
}

void KiemChungVien::TinhLuong()
{
    Luong = LuongCoBan + SoLoi * 50000;
}
