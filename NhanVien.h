#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
protected:
    int MaNhanVien;
    string HoTen;
    int Tuoi;
    string SDT;
    string Email;
    int LuongCoBan;
    int Luong;

public:
    NhanVien();
    virtual ~NhanVien();

    virtual void Nhap();
    virtual void Xuat();
    virtual void TinhLuong() = 0;

    int GetLuong();
};

class LapTrinhVien : public NhanVien
{
private:
    int overtime;

public:
    LapTrinhVien();
    ~LapTrinhVien();

    void Nhap();
    void Xuat();
    void TinhLuong();
};

class KiemChungVien : public NhanVien
{
private:
    int SoLoi;

public:
    KiemChungVien();
    ~KiemChungVien();

    void Nhap();
    void Xuat();
    void TinhLuong();
};

#endif
