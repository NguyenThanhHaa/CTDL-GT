// Bai 1.8
// Khai bao kieu du lieu bieu dien khai niem ax+by+c=0 trong mp Oxy, dinh nghia ham, nhap xuat cho kieu du lieu nay

#include <iostream>
using namespace std;

struct Duongthang
{
	double a,b,c;
 };
 
void Nhap(Duongthang &dt);
void Xuat (Duongthang dt); 

void Nhap(Duongthang &dt)
{
	cout << "Nhap a: ";
	cin >> dt.a;
	
	cout << "Nhap b: ";
	cin >> dt.b;
	
	cout <<"Nhap c: ";
	cin >> dt.c;
}

void Xuat (Duongthang dt)
{
	cout << dt.a <<"x + " << dt.b <<"y + " <<dt.c << "= 0";
}

int main()
{
	Duongthang dt;
	Nhap(dt);
	Xuat(dt);
}
