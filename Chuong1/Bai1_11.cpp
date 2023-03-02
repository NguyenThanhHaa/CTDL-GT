//Bai 1.11
/* Viet chuong trinh nhap toa do 3 dinh cua 1 tam giac trong mp Oxy 
   Tinh dien tich, chu vi, toa do trong tam tam giac, xuat ra ket qua */
   
#include <iostream>
using namespace std;

struct Tamgiac
{
	double A[3],B[3],C[3],G[3]; 
 };
 
void Nhap(Tamgiac &tg)
{
	cout <<"Nhap toa do A: ";
	cin.getline(tg.A, 3);
	
	cout <<"Nhap toa do B: ";
	cin.getline(tg.B, 3);
	
	cout <<"Nhap toa do C: ";
	cin.getline(tg.C, 3); 
 }



int main()
{
	Tamgiac tg;
	Nhap(tg);
}
