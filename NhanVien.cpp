#include "NhanVien.h"

NhanVien::NhanVien()
{
    MaNhanVien = 0;
    HoTen = "";
    Tuoi = 0;
    SDT = "";
    Email = "";
    LuongCoBan = 0;
    Luong = 0;
}

NhanVien::~NhanVien()
{
}

void NhanVien::Nhap()
{
    cout << "\nNhap ma nhan vien: ";
    cin >> MaNhanVien;

    cin.ignore();

    cout << "Nhap ho ten: ";
    getline(cin, HoTen);

    cout << "Nhap tuoi: ";
    cin >> Tuoi;

    cin.ignore();

    cout << "Nhap so dien thoai: ";
    getline(cin, SDT);

    cout << "Nhap email: ";
    getline(cin, Email);

    cout << "Nhap luong co ban: ";
    cin >> LuongCoBan;
}

void NhanVien::Xuat()
{
    cout << "\nMa nhan vien: " << MaNhanVien;
    cout << "\nHo ten: " << HoTen;
    cout << "\nTuoi: " << Tuoi;
    cout << "\nSo dien thoai: " << SDT;
    cout << "\nEmail: " << Email;
    cout << "\nLuong co ban: " << LuongCoBan;
    cout << "\nLuong: " << Luong;
}

int NhanVien::GetLuong()
{
    return Luong;
}

// ================= LAP TRINH VIEN =================

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

// ================= KIEM CHUNG VIEN =================

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
