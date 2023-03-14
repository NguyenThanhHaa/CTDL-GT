//Bai 3.6
//Cho 2 mang a va b. Cho biet mang b co phai la hoan vi cua mang a khong

#include <iostream>
using namespace std;

void NhapMangA(int a[], int na)
{
	int i=0;
	do
	{
		cout << "Nhap a[" << i <<"]: ";
		cin >> a[i];
		i++; 
	 } while(i<na); 
	 
 } 
 
void NhapMangB(int b[], int nb)
{
	int i=0;
	do
	{
		cout << "Nhap b[" << i <<"]: ";
		cin >> b[i];
		i++; 
	 } while(i<nb); 
 } 

void SapXepA(int a[], int na)
{
	for (int i=0; i<na-1; i++)
	{
		for (int j=i+1; j<na; j++)
		{
			if (a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
 } 

void SapXepB(int b[], int nb)
{	
	for (int i=0; i<nb-1; i++)
	{
		for (int j=i+1; j<nb; j++)
		{
			if (b[i]<b[j])
			{
				int temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
 } 
 
void KiemtraHoanvi(int a[], int b[], int na, int nb)
{
	if (na!=nb)
	{
		cout <<"B khong la hoan vi cua A";
		return; 
	 } 
	
	else
	{
		SapXepA(a,na);
		SapXepB(b,nb);
		
		for (int i=0; i<na; i++)
		{
			if (a[i]!=b[i])
				 cout <<"B khong la hoan vi cua A"; 
				 return; 
		 } 
		
		cout <<"B la hoan vi cua A"; 
	 } 
 } 
 
int a[100], b[100];

int main()
{
	int na, nb;
	cout <<"Nhap n cua mang A: ";
	cin >> na;
	NhapMangA(a,na);
	
	cout <<"\nNhap n cua mang B: ";
	cin >> nb;
	NhapMangB(b,nb);
	
	KiemtraHoanvi(a,b,na,nb); 
 } 
