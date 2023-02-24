// Bài 1.1
// Khai bao kieu du lieu phan so, viet ham nhap, xuat cho kieu du lieu nay

#include <iostream>
using namespace std;

struct Phanso
    {
        double  Tuso;
        double  Mauso;
    };
    
void Nhap(Phanso &ps)
    {
      cout << "Nhap tu so: ";
      cin >> ps.Tuso;
      
      cout << "Nhap mau so: ";
      cin >> ps.Mauso; 
    }
    
void Xuat(Phanso  ps)
    {
      cout << "Tu so: " << ps.Tuso <<endl;
      cout << "Mau so: " << ps.Mauso << endl;
      cout << "Phan so: " << (ps.Tuso / ps.Mauso);
    
    }
    
int main()
{
  	Phanso	ps;
  	Nhap(ps);
  	Xuat(ps);
}
