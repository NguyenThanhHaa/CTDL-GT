//Bai 1.9
// Khai bao kieu du lieu duong tron trong mp Oxy, dinh nghia ham nhap, xuat cho kieu du lieu nay

#include <iostream>
using namespace std;

struct Duongtron
{
	double a,b,r; 
};

void Nhap(Duongtron &dt)
{
	cout << "Nhap a: ";
	cin >> dt.a;
	
	cout <<"Nhap b:";
	cin >> dt.b;
	
	cout <<"Nhap ban kinh r: ";
	cin >> dt.r; 
 } 
 
void Xuat(Duongtron dt)
{
	cout <<"Phuong trinh duong tron trong mat phang Oxy la:";
	cout << "(x-" << dt.a <<")^2" << "+(y-" <<dt.b <<")^2" << "= " << dt.r <<"^2"; 
 } 
 
int main()
{
	Duongtron dt;
	Nhap(dt);
	Xuat(dt); 
 } 
