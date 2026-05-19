#include <iostream>
#include "NhanVien.h"
#include "KiemChungVien.h"
#include "LapTrinhVien.h"
using namespace std;

int main()
{
    int n, m;

    cout << "Nhap so lap trinh vien: ";
    cin >> n;

    LapTrinhVien* a = new LapTrinhVien[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\n===== NHAP LAP TRINH VIEN THU " << i + 1 << " =====\n";
        a[i].Nhap();
        a[i].TinhLuong();
    }

    cout << "\nNhap so kiem chung vien: ";
    cin >> m;

    KiemChungVien* b = new KiemChungVien[m];

    for (int i = 0; i < m; i++)
    {
        cout << "\n===== NHAP KIEM CHUNG VIEN THU " << i + 1 << " =====\n";
        b[i].Nhap();
        b[i].TinhLuong();
    }

    cout << "\n\n========== DANH SACH LAP TRINH VIEN ==========\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n--- Lap trinh vien thu " << i + 1 << " ---";
        a[i].Xuat();
    }

    cout << "\n\n========== DANH SACH KIEM CHUNG VIEN ==========\n";
    for (int i = 0; i < m; i++)
    {
        cout << "\n--- Kiem chung vien thu " << i + 1 << " ---";
        b[i].Xuat();
    }

    int tongLuong = 0;
    int tongNhanVien = n + m;

    for (int i = 0; i < n; i++)
        tongLuong += a[i].GetLuong();

    for (int i = 0; i < m; i++)
        tongLuong += b[i].GetLuong();

    double luongTrungBinh = 0;

    if (tongNhanVien > 0)
        luongTrungBinh = (double)tongLuong / tongNhanVien;

    cout << "\n\n========== NHAN VIEN CO LUONG THAP HON LUONG TRUNG BINH ==========\n";
    cout << "Luong trung binh: " << luongTrungBinh << endl;

    for (int i = 0; i < n; i++)
    {
        if (a[i].GetLuong() < luongTrungBinh)
            a[i].Xuat();
    }

    for (int i = 0; i < m; i++)
    {
        if (b[i].GetLuong() < luongTrungBinh)
            b[i].Xuat();
    }

    cout << "\n\n========== NHAN VIEN CO LUONG CAO NHAT ==========\n";

    if (tongNhanVien > 0)
    {
        int maxLuong;

        if (n > 0)
            maxLuong = a[0].GetLuong();
        else
            maxLuong = b[0].GetLuong();

        for (int i = 0; i < n; i++)
            if (a[i].GetLuong() > maxLuong)
                maxLuong = a[i].GetLuong();

        for (int i = 0; i < m; i++)
            if (b[i].GetLuong() > maxLuong)
                maxLuong = b[i].GetLuong();

        for (int i = 0; i < n; i++)
            if (a[i].GetLuong() == maxLuong)
                a[i].Xuat();

        for (int i = 0; i < m; i++)
            if (b[i].GetLuong() == maxLuong)
                b[i].Xuat();
    }

    cout << "\n\n========== NHAN VIEN CO LUONG THAP NHAT ==========\n";

    if (tongNhanVien > 0)
    {
        int minLuong;

        if (n > 0)
            minLuong = a[0].GetLuong();
        else
            minLuong = b[0].GetLuong();

        for (int i = 0; i < n; i++)
            if (a[i].GetLuong() < minLuong)
                minLuong = a[i].GetLuong();

        for (int i = 0; i < m; i++)
            if (b[i].GetLuong() < minLuong)
                minLuong = b[i].GetLuong();

        for (int i = 0; i < n; i++)
            if (a[i].GetLuong() == minLuong)
                a[i].Xuat();

        for (int i = 0; i < m; i++)
            if (b[i].GetLuong() == minLuong)
                b[i].Xuat();
    }

    cout << "\n\n========== LAP TRINH VIEN CO LUONG CAO NHAT ==========\n";

    if (n > 0)
    {
        int maxLTV = a[0].GetLuong();

        for (int i = 1; i < n; i++)
            if (a[i].GetLuong() > maxLTV)
                maxLTV = a[i].GetLuong();

        for (int i = 0; i < n; i++)
            if (a[i].GetLuong() == maxLTV)
                a[i].Xuat();
    }
    else
    {
        cout << "Khong co lap trinh vien.\n";
    }

    cout << "\n\n========== KIEM CHUNG VIEN CO LUONG THAP NHAT ==========\n";

    if (m > 0)
    {
        int minKCV = b[0].GetLuong();

        for (int i = 1; i < m; i++)
            if (b[i].GetLuong() < minKCV)
                minKCV = b[i].GetLuong();

        for (int i = 0; i < m; i++)
            if (b[i].GetLuong() == minKCV)
                b[i].Xuat();
    }
    else
    {
        cout << "Khong co kiem chung vien.\n";
    }

    delete[] a;
    delete[] b;

    return 0;
}
