//Bai 3.1
//Nhap vao 1 mang va sap xep mang tang dan bang Selection Sort

#include <iostream>
using namespace std;

void SelectionSort(int a[], int n)
{
	int min;
	
	for (int i=0; i<n-1;i++)
	{
		min = i;
		for (int j=i+1; j<n; j++)
		{
			if (a[min]>a[j]) 
				min=j; 
		 } 
		
		int temp = a[min];
		a[min]=a[i];
		a[i]=temp; 
	 } 
 } 
 
 void NhapMang(int a[], int n)
{	int i=0; 
	do
		{		cout << "Nhap a[" << i <<"]"; 
				cin >>a[i];
				i++; 
			
		 } while(i<n); 
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
	SelectionSort(a,n);
	XuatMang(a,n);
}
