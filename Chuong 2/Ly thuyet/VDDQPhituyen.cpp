// Vi du de quy phi tuyen

// Cho day {Xn} xác dinh theo công thuc truy hoi : X0 = 1 ; Xn = n^2X0 +(n-1)^2X1 + . . . + 2^2Xn-2 + 1^2Xn-1  

int X(int n )  
{ 
	if ( n == 0 ) 
		return 1 ; 
	else 
	{ 
		int tg = 0 ; 
		for (int i = 0 ; i<n ; i++ ) tg = tg + sqr(n-i)*X(i); 
		return ( tg ) ; 
	}
}

