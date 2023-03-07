//Bai 3.1
//Nhap vao 1 mang (ket thuc khi nhap 0) va sap xep mang tang dan

#include <iostream>
using namespace std;

void PrintArray(int a[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout << a[i] <<" "; 
		
	 } 
 } 

void BubbleSort(int a[], int n)
{
	for (int i=0; i<n; i++)
	{
		
		
			for (int j=n-1; j>=i+1; j--)
			{
				if (a[i]>a[j])
				{
					int temp = a[i];
					a[i]=a[j];
					a[j]=temp; 
				 } 
		 	}
		
	 } 
 } 

int a[100];

int main()
{
	int n,i;
	cout <<"Nhap n: "; 
	cin >> n;
	
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
		
		if (a[i]==0)
			break; 
	}
	
	BubbleSort(a,n);
	PrintArray(a,n); 
	
	return 0; 

 } 
