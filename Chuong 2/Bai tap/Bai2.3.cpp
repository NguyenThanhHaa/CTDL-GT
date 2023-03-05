//Bai 2.3
// Cho mang 1 chieu cac so nguyen. Viet ham tinh tong cac so chan trong mang bang phuong phap de quy

#include <iostream>
using namespace std;

int TongCacSoChan(int a[], int n)
{
		if (n==0)
			return 0;
		
		if (a[n-1]%2==0)
			return a[n-1] + TongCacSoChan(a,n-1);
		
		else
			return TongCacSoChan(a,n-1);
		
	
	
 } 

int a[100]; 
int main()
{	int n; 
	cout <<"Nhap n: ";
	cin >> n; 
	for (int i=0; i<n; i++)
		{
			cin >> a[i]; 
		 } 
	cout << "Tong cac so chan trong mang la: " << TongCacSoChan(a,n); 
 } 

 
