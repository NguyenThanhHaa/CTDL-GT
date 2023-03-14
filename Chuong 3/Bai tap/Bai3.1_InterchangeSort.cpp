////Bai 3.1
//Nhap vao 1 mang va sap xep mang tang dan bang Interchange Sort

#include <iostream>
using namespace std;

void InterchangeSort(int a[], int n)
{
	for (int i=0; i<n-1; i++)
	{
		for (int j=i+1; j<n; j++)
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
	InterchangeSort(a,n);
	XuatMang(a,n);
}
