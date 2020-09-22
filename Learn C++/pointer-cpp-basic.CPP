#include <iostream>
#include <stdio.h>
#include <conio.h>

// PROGRAMMING IS NOT JUST AN SUBJECT TO LEARN
// BUT THAT IS HOBBY AND PART OF LIFE
// UNIQUE THING THAT CREATE LOT OF APP that MAKE HUMANS LIFE EASIER

// =================================================================
// #38 Pointer
// Sumber : Kelas Terbuka
// =================================================================

// Belajar tuh mulai dari definisi
//							              ~ Bang Sabda PS
// -----------------------------------------------------------------

// Definisi Pointer
// pointer adalah penunjuk suatu variabel
// pointer wajib memiliki alamat dari variabel yang ditunjuk

// mekanisme pointer bertujuan untuk menghemat memory
// mekanisme pointer juga memungkinkan suatu variabel dalam suatu fungsi
// dapat diakses oleh fungsi yang lain

// belajar basic musti dicatat, musti banyak comment sign //

int main() {

 int x = 10;

 // pointer | ditandai dengan *var
 int *xPointer = &x;


 // Address adalah sesuatu yang dimiliki oleh variabel
 // address berguna agar variabel dapat mengakses nilai
 // yang telah ia simpan dimemory.

 printf("Nilai dari x   : %d\n", x);
 printf("Address dari x : %d\n\n", xPointer);

 //dereferencing : mengambil data dari sebuah pointer
 // kita dapat mengambil data karena alamat dari
 // variabel yang menyimpan data tersebut sudah kita simpan
 // kedalam variabel pointer

 printf("Ini adalah nilai dari x yang diakses dari address x yang telah disimpan di *xPointer\n");
 printf("Nilai dari x : %d", *xPointer);

 // Kesimpulan
 // another = 5
 // int *var = &another

 // pemanggilan

 // *var       => (menampilkan nilai) dari address yang pointer *var simpan
 						//output = 5

 //  var			=> (menampilkan address) yang pointer *var simpan
 						//output = 147020(example of address)


 getch();

}