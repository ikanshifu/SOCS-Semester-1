#include <stdio.h>
#include <string.h>

/*Structure and File Processing(12 Desember 2023)
	a.Struct and Union		[]
	b.Read and Write File		[]
*/
//a.Struct
//Sebuah variable yang menyimpan banyak value
//b.Union
//Sama dengan struct, tetapi beda d i
union Guru{
	char nama[100];
	int umur;
};
struct Mahasiswa{
	char nama[1001];
	int umur;
	int nim;
	double gpa;
}kelas2;//bisa dideklarasi disini(dibalik ;), kalau misalnya gitu, maka kita engga perlu deklarasi struct di int main

typedef struct Data{
	int angka;
	char huruf;
}D;//fungsi typedef dan huruf D(bisa diganti sesuai keinginan kita, karena hanya sebuah inisial) adalah
//untuk mempersingkat nama struct ketika harus dipanggil

int main(){
	struct Mahasiswa kelas1[10];
	
	strcpy(kelas1[0].nama, "Vernando");
	kelas1[0].umur = 67;
	kelas1[0].nim = 273123;
	kelas1[0].gpa = 4.0;
	
	strcpy(kelas1[1].nama, "James");
	kelas1[1].umur = 21;
	kelas1[1].nim = 534123;
	kelas1[1].gpa = 2.4;
	
	strcpy(kelas2.nama, "Johnny");
	kelas2.umur = 25;
	kelas2.nim = 248239;
	kelas2.gpa = 3.5;

	struct Mahasiswa kelas3 = {
		"Ruben", 24, 251232,3.7
	};
	for(int i = 0;i<3;i++){
		printf("Nama: %s\nUmur: %d\nNIM: %d\nGPA: %.2lf\n\n",kelas1[i].nama,kelas1[i].umur,kelas1[i].nim,kelas1[i].gpa); 
	}
	printf("Nama: %s\nUmur: %d\nNIM: %d\nGPA: %.2lf\n\n",kelas2.nama,kelas2.umur,kelas2.nim,kelas2.gpa); 
	printf("Nama: %s\nUmur: %d\nNIM: %d\nGPA: %.2lf\n\n",kelas3.nama,kelas3.umur,kelas3.nim,kelas3.gpa);
	//struct bisa diklarasi di dalam int main juga;

	D Data1;//nama "Data" disingkat mejadi D
	
	int size = sizeof(struct Mahasiswa);
	printf("Size : %d\n", size);
	
	union Guru matematika;
	strcpy(matematika.nama, "PakHeru");
	matematika.umur = 35;

	printf("Nama: %s\nUmur: %d\n\n",matematika.nama,matematika.umur); 
	
	int sizeUnion = sizeof(union Guru);
	printf("Size : %d\n", sizeUnion);
	return 0;
}
