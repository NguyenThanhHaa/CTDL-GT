//Bai 1.4
//Khai bao kieu du lieu diem trong mp Oxyz, viet ham nhap, xuat cho kieu du lieu nay

#include <iostream>
using namespace std;

struct	Oxyz
{
	double x;
	double y;
	double z;
};

void Nhap (Oxyz &diem)
{
	cout << "Nhap toa do x: ";
	cin >> diem.x;
	
	cout <<"Nhap toa do y: ";
	cin >> diem.y;
	
	cout <<"Nhap toa do z: ";
	cin >> diem.z;
}

void Xuat(Oxyz diem)
{
	cout <<"Toa do x: " << diem.x << endl;
	cout <<"Toa do y: " << diem.y << endl;
	cout <<"Toa do z: " << diem.z << endl;
	
}

int main()
{
	Oxyz diem;
	Nhap(diem);
	Xuat(diem);
}
