// Bai 2.2
// Cai dat ham de quy tinh n!

#include <iostream>
using namespace std;

int Giaithua(int n)
{	
	if (n==0|| n==1)
		return 1;
	
	else
		return n*(Giaithua(n-1)); 
 } 

int main()
{	int n; 
	cout << "Nhap n: ";
	cin >> n;
	cout <<"Giai thua cua << n << " la: " << Giaithua(n); 
 } 
