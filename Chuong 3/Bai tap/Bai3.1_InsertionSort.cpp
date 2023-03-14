//Bai 3.1
//Nhap vao 1 mang va sap xep mang tang dan bang Insertion Sort

#include <iostream>
using namespace std;

void InsertionSort(int a[], int n)
{
	int i, pos, current;
	
	for (i=1; i<n; i++)
	{
		current = a[i];
		pos = i-1;
		
		while((pos>=0)&&(a[pos]>current))
		{
			a[pos+1]=a[pos];
			pos--; 
		 } 
		
		a[pos+1]= current; 
	 } 
 } 

void NhapMang(int a[], int n)
{
	for (int i=0; i<n; i++)
	{
		cin >> a[i];
	}
}

void XuatMang(int a[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout << a[i] <<" ";
	}
}

int a[100];

int main()
{
	int n;
	cout <<"Nhap n: ";
	cin >> n;
	
	NhapMang(a,n);
	InsertionSort(a,n);
	XuatMang(a,n);
}
