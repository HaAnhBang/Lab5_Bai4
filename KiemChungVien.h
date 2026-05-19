#ifndef KIEMCHUNGVIEN_H
#define KIEMCHUNGVIEN_H
#include "NhanVien.h"

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

#endif // KIEMCHUNGVIEN_H
