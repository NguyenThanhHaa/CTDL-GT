//Bai 1.10
//Viet chuong trinh nhap toa do tam va ban kinh cua 1 duong tron trong mp Oxy. Tinh dien tich, chu vi va xuat ra ket qua

#include <iostream>
#include <cmath> 
using namespace std;

struct Duongtron
{
	double a,b,r; 
}; 

void Nhap(Duongtron &dt)
{	
	cout <<"Nhap toa do tam I" <<endl; 
	cout << "Nhap a: ";
	cin >> dt.a;
	
	cout <<"Nhap b:";
	cin >> dt.b;
	
	cout <<"Nhap ban kinh r: ";
	cin >> dt.r; 
 } 
 
void Dientich(Duongtron dt)
{	 
	double S =  M_PI * dt.r * dt.r;
	cout <<"Dien tich duong tron la: " << S <<endl; 
 }
 
void Chuvi(Duongtron dt)
{
	double P = dt.r * 2 * M_PI; 
	cout <<"Chu vi duong tron la: " << P; 
 }

int main()
{
	Duongtron dt;
	Nhap(dt);
	Dientich(dt);
	Chuvi(dt); 
 } 
 
 
 
 
