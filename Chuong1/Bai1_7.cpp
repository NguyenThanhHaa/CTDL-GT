//Bai 1.7
//Khai bao kieu du lieu ngay trong the gioi thuc, viet ham nhap, xuat cho kieu du lieu nay

#include <iostream>
using namespace std;

struct Ngay
{
	unsigned short ngay;
	unsigned short thang;
	short nam; 
 };
 
void Nhap(Ngay &ng)
{	

	do
	{
		cout <<"Nhap ngay: ";
		cin >> ng.ngay;
	} while (ng.ngay> 31);
	
	
	do
	{
		cout <<"Nhap thang: ";
		cin >> ng.thang; 
	} while (ng.thang> 12);
	 

	cout <<"Nhap nam: ";
	cin >> ng.nam;
	 
	 
 } 

void Xuat(Ngay ng)
{
	cout << ng.ngay << "/" << ng.thang << "/" << ng.nam; 
 } 

int main()
{
	Ngay	ng;
	Nhap(ng);
	Xuat(ng); 
 } 
