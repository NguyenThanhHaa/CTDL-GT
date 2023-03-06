//Bai 2.9
/*Viet ham de quy tinh tong cua bieu thuc sau:
S(x,n) = x + x^2/2! + x^3/3! + ... + x^n/n! */

#include <iostream>
using namespace std; 

double Tong (double x, int n)
{
	if (n==0)
		return 0;
	if (n==1)
		return x;
	
	return (1+x/n) * Tong(x,n-1) - (x/n) * Tong(x,n-2); 
 } 
 
int main()
{	double x;
	int n;
	 
	cout << "Nhap x: ";
	cin >> x;
	
	cout <<"Nhap n: ";
	cin >> n;
	
	cout << Tong(x,n); 
	
	 
 } 
