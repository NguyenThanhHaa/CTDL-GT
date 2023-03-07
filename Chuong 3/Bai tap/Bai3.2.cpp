//Bai 3.2
//Sap xep mang giam dan

#include <iostream>
using namespace std;

void PrintArray(int a[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout << a[i] <<" "; 
		
	 } 
 } 
 
void SelectionSort(int a[], int n)
{
	int max;	
	
	for (int i=0; i<n-1; i++)
	{
		max = i;
		
		for (int j = i+1; j<n; j++)
		{
			if (a[j] > a[max]) 
				max = j;	
		 } 
		 
		int temp = a[max];
		a[max]=a[i];
		a[i]=temp; 
	 } 
 } 

int a[100];

int main()
{	int n;
	cout <<"Nhap n: ";
	cin >> n;
	
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
		
	} 
	
	SelectionSort(a,n);
	PrintArray(a,n); 
	
 } 
