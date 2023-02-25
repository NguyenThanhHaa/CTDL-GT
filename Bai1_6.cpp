//Bai 1.6
//Khai bao kieu du lieu bieu dien khai niem da thuc 1 bien, viet ham nhap, xuat cho kieu du lieu nay

#include <iostream>
using namespace std;

struct Dathuc
{
	double a[100];
	double n;
 }; 
 
void Nhap(Dathuc &dt)
{
	cout <<"Nhap bac cua da thuc: ";
	cin >> dt.n;
	
	for (int i=dt.n; i>=0; i--)
	{
		double temp;
		cout << "Nhap he so: ";
		cin >> temp;
		
		dt.a[i] = temp;
	}
}

void Xuat(Dathuc dt)
{	int i; 
	for (i=dt.n; i>=1 ; i--)
	{	
		cout << dt.a[i] << "x^"<< i <<"+"; 
	}
	
	cout << dt.a[i] << "x^0"; 
}

int main()
{
	Dathuc	dt;
	Nhap(dt);
	Xuat(dt);
}
