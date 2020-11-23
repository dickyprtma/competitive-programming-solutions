#include <iostream>
#include <iomanip>
using namespace std;
 
/*deklarasi fungsi babylon*/
double	babylon(double);
 
/*fungsi utama*/
int main()
{
	double X;
	cout << "Input bilangan yang akan dicari akarnya : ";
	cin >> X;
	cout << "==============================\n";
	cout << "\t Y \t Y*Y \n";
	cout << "==============================\n";
 
	/*panggil fungsi babylon dengan parameter nilai akar yang dicari*/
	double y = babylon(X);
	cout << "==============================\n";
 
	/*set nilai kepresisian jika perlu*/
	cout << "Akar " << X << " adalah : " << setprecision(20) <<y << endl;
 
	return 0;
}
 
/*detail fungsi babylon*/
double babylon(double x){
	/*
		batas nilai toleransi (epsilon), atau epsilon
		usahakan nilai ini jangan terlalu besar atau terlalu kecil
	*/
	const double TOLERANSI = 5e-15;
	if(x < 0)
		return 0.0;
 
	/*jika
		x > 2 -> y = x/2
		x <= 2 -> y = 1
	*/
	double y = (x > 2 ? x/2 : 1);
 
	/*
		ulangi sampai syarat dipenuhi : epsilon > | y*y - x |
		jika sudah memenuhi syarat, maka nilai akar adalah nilai y
	*/
	do{
		y = (y + x/y) / 2;
		cout << setw(10) << y << setw(12) << y*y << "\n";
	}while(x > y*y + TOLERANSI || y*y > x + TOLERANSI);
	return y;
}
