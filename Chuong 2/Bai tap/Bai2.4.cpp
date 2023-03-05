//Bai 2.4

// Cho mang 1 chieu cac so thuc. Viet ham dem gia tri so luong gia tri duong trong mang bang phuong phap de quy

#include <iostream>
using namespace std;

int Sogtduong(double a[], int n)
{	
	if (n==0)
		return 0;
	
	if (a[n-1]>0)
		return 1 + Sogtduong(a,n-1);
	
	else
		return Sogtduong(a,n-1); 
}

double a[100];

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	for (int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	
	cout <<"So luong phan tu duong trong mang la: " << Sogtduong(a,n);
}
