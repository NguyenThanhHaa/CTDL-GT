// Bai 1.5
// Khai bao kieu du lieu bieu dien P(x)=ax^n, dinh nghia ham nhap, xuat 

#include<iostream>
using namespace std;

struct Donthuc 
{
	double a,x,n; 
 };
 
void Nhap(Donthuc &P)
{
	cout << "Nhap a: ";
	cin >> P.a;
	
	cout <<"Nhap x: ";
	cin >> P.x;
	
	cout <<"Nhap n: ";
	cin >> P.n; 
 } 
 
void Xuat(Donthuc P)
{
	cout <<"P(x)= " << P.a <<"*" << P.x << "^" <<P.n;  
 } 
 
int main()
{
	Donthuc	P;
	Nhap(P);
	Xuat(P); 
 } 
