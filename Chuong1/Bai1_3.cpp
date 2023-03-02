//Bai 1.3
//Khai bao kieu du lien diem trong mp Oxy, viet ham nhap, xuat cho kieu du lieu nay

#include <iostream>
using namespace std;

struct Oxy
{
	double x;
	double y;
};

void Nhap(Oxy &diem)
{
	cout << "Nhap toa do x: ";
	cin >> diem.x;
	
	cout << "Nhap toa do y: ";
	cin >> diem.y;
}

void Xuat(Oxy diem)
{
	cout <<"Toa do x: " << diem.x << endl;
	cout <<"Toa do y: " << diem.y <<endl;
}

int main()
{
	Oxy	diem;
	Nhap(diem);
	Xuat(diem);
}
