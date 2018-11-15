#ifndef MENU_INCLUDE
#define MENU_INCLUDE

#include <iostream>
#include "main.h"
#include "bos.h"

class Menu {
private:
    Bos atasan;
    Init* init_;
    int i;
public:
    Menu(Init *init) {
        init_ = init;
    }
    void bos() {
        system("cls");
        std::cout << "Selamat datang, " << init_->getNama() << "\n\n";
        std::cout << "====== MENU ATASAN ======" << std::endl;
        std::cout << "1. Tambah Karyawan \n";
        std::cout << "2. Tampilkan Karyawan \n";
        std::cout << "3. Hasil Kerja Karyawan \n";
        std::cout << "4. Tambah Tugas Karyawan \n";
        std::cout << "5. Laporan Akhir Hasil Kerja \n";
        std::cout << "0. Logout \n";
        std::cout << "Pilih menu: "; std::cin >> i;
        switch(i){
        case 0: init_->setTrue(true); init_->awal(); break;
        case 1: atasan.inputKaryawan(); bos(); break;
        case 2: atasan.cetakKaryawan(); system("pause"); bos(); break;
        case 3: atasan.hasilKerja(); bos(); break;
        case 4: atasan.tambahTugas(); bos(); break;
        case 5: atasan.kesimpulanKerja(); bos(); break;
        }
    }
    void karyawan() {
        system("cls");
        std::cout << "Selamat datang, " << init_->getNama() << "\n\n";
        std::cout << "====== MENU KARYAWAN ======" << std::endl;
        std::cout << "1. Tampilkan Daftar Tugas" << std::endl;
        std::cout << "2. Input Tugas" << std::endl;
        std::cout << "3. Ganti Tugas" << std::endl;
        std::cout << "0. Logout" << std::endl;
        std::cout << "Pilih menu : "; std::cin >> i;
        switch(i){
        case 0: init_->setTrue(true); init_->awal(); break;
        case 1:	break;
        case 2: break;
        case 3: break;
        }
    }
};

#endif
