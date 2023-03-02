// Vi du de quy tuong ho

//Tính so hang thu n cua hai day {Xn}, {Yn} duoc dinh nghia nhu sau:X0 =Y0 =1 ; Xn = Xn-1 + Yn-1; (n>0) ; Yn = n2Xn-1 + Yn-1; (n>0)

long TinhYn(int n);
long TinhXn (int n)
{
	if(n==0)
		return 1;
		return TinhXn(n-1) + TinhYn(n-1);
}

long TinhYn (int n)
  {
    if(n==0)
	return 1;
	return n*n*TinhXn(n-1) + TinhYn(n-1);
   }


