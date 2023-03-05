// Bai 2.5
// Ham tinh can bac 3 cua 1 so thuc co the cai dat de quy theo 2 ham exp va in  

#include <iostream>
#include <math.h>
 
using namespace std;

double Canbac3(double x)
{
	if (x==0)
		return 0;
	
	if (x<0)
		return (-Canbac3(-x));
	
	return (exp(log(x))/3); 
 } 

int main()
{
	double x;
	
	cout <<"Nhap x: ";
	cin >> x;
	cout << "Can bac ba cua " << x << " la: " << Canbac3(x); 
 } 
