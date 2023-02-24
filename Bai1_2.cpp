// Bai 1.2
// Khai bao kieu du lieu hon so, viet ham nhap, xuat cho kieu du lieu nay

#include <iostream>
using namespace std;

struct Honso
{
	int	Sodau; 
	double	Tuso;
	double	Mauso; 
 };
 
void Nhap(Honso &hs)
{
	cout <<"Nhap so dau: ";
	cin >> hs.Sodau;
	
	do
	{
		cout <<"Nhap tu so: ";
		cin >> hs.Tuso;
	
		cout << "Nhap mau so: ";
		cin >> hs.Mauso;
	} while (hs.Tuso < hs.Mauso);
	
	
 } 
 
void Xuat(Honso hs)
{
	cout << "Nhap so dau: " << hs.Sodau <<endl;
	cout << "Nhap tu so: " << hs.Tuso <<endl;
	cout << "Nhap mau so: " << hs.Mauso <<endl;
	cout << "Hon so da nhap: " << hs.Sodau <<" " << hs.Tuso << "/" << hs.Mauso;

}

int main()
{
	Honso	hs;
	Nhap(hs);
	Xuat(hs);
}
