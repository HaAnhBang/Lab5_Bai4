#ifndef LAPTRINHVIEN_H
#define LAPTRINHVIEN_H
#include "NhanVien.h"

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

#endif // LAPTRINHVIEN_H
