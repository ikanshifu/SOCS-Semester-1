#include <stdio.h>
#include <string.h>

//Apa itu Data Structure(struct)
/*Data Structure adalah sebuah alat atau cara untuk menyimpan mengorganisir
sebuah data agar lebih rapih, lebih efisien, lebih mudah untuk diakses dan mudah 
untuk diubah.

Biasanya kalau kita mau menyimpan data kan, kita buat data typenya,
nama variabelnya dan isinya kan. Entah bisa di inisialisasi langsung
atau di scan dulu baru abis itu di print.

Kalau kita klasifikasi data ke variabel, kita harus buat dulu
masing-masing variabelnya(misalnya kalo buat data diri, brati kita harus
buat dulu variable nama, umur, dll. Belum lagi kalo ada	lebih dari 1 orangnya

Lewat data structure kita bisa menyimpan berbagai data type, jadi satu
componen. Jadi istilahnya struct itu mirip kaya folder yang bisa diakses,
isinya ada banyak, bisa video, text file, powerpoint, pdf, dll.
Jadi kaya kapsul, ada kaya komponennya.t
*/
//Cara menggunakan, Pengaplikasiannya, Case
//Cara melihat size memory dari struct tersebut
struct siswa{
	char nama[101];
	int umur;
	int tahunLahir;
	double nilai;
};

int main(){
	//struct siswa a;
	//Karena pakai struct, kita engga perlu inisialisasi data typenya lagi, 
//	strcpy(a.nama, "John");
//	a.umur = 20;
//	a.tahunLahir = 2003;
//	a.nilai = 90.1;
//	scanf("%s %d %d %f", &a.nama, &a.umur, &a.tahunLahir,&a.nilai);
	struct siswa kelas1[5];
	strcpy(kelas1[0].nama, "Dodo");
	kelas1[0].umur = 18;
	kelas1[0].tahunLahir = 2005;
	kelas1[0].nilai = 90.1;
	
	strcpy(kelas1[1].nama, "Mary");
	kelas1[1].umur = 23;
	kelas1[1].tahunLahir = 2000;
	kelas1[1].nilai = 89.1;
	
	strcpy(kelas1[2].nama, "Kiki");
	kelas1[2].umur = 16;
	kelas1[2].tahunLahir = 2007;
	kelas1[2].nilai = 84.1;
	
	strcpy(kelas1[3].nama, "Dope");
	kelas1[3].umur = 21;
	kelas1[3].tahunLahir = 2002;
	kelas1[3].nilai = 93.9;
	
	strcpy(kelas1[4].nama, "Ryan");
	kelas1[4].umur = 27;
	kelas1[4].tahunLahir = 1996;
	kelas1[4].nilai = 85.4;
	
	for(int i = 0; i<5;i++){
		printf("Nama: %s\nUmur: %d\nTahun Lahir: %d\nNilai: %.2lf\n", kelas1[i].nama, kelas1[i].umur, kelas1[i].tahunLahir,kelas1[i].nilai);
	}
	
	printf("%d\n", sizeof(siswa));
	return 0;
}
