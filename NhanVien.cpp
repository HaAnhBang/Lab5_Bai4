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



