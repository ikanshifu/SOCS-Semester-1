#include <stdio.h>
#include <string.h>

// Mendefinisikan struktur untuk menyimpan informasi kontak
struct Contact {
    char nama[50];
    char nomorTelepon[15];
    int usia;
};

// Fungsi untuk menampilkan informasi kontak
void tampilkanKontak(struct Contact kontak) {
    printf("Nama: %s\n", kontak.nama);
    printf("Nomor Telepon: %s\n", kontak.nomorTelepon);
    printf("Usia: %d\n", kontak.usia);
    printf("----------------------------\n");
}
//Melalui pointer, kita bisa mengakses dan mengubah nilai elemen melalui alaat memorinya
int main() {
    // Mendeklarasikan array untuk menyimpan beberapa kontak
    struct Contact daftarKontak[3];
    struct Contact *pointKontak;
    
    pointKotak = daftarKontak;
	//Kalau mau di print nanti printf("...", pointKontak->nama)
    // Mengisi data ke dalam struktur
    strcpy(daftarKontak[0].nama, "John Doe");
    strcpy(daftarKontak[0].nomorTelepon, "123-456-7890");
    daftarKontak[0].usia = 25;

    strcpy(daftarKontak[1].nama, "Jane Smith");
    strcpy(daftarKontak[1].nomorTelepon, "987-654-3210");
    daftarKontak[1].usia = 30;

    strcpy(daftarKontak[2].nama, "Bob Johnson");
    strcpy(daftarKontak[2].nomorTelepon, "555-123-4567");
    daftarKontak[2].usia = 28;

    // Menampilkan informasi kontak menggunakan fungsi
    for (int i = 0; i < 3; i++) {
        tampilkanKontak(daftarKontak[i]);
    }

    return 0;
}

