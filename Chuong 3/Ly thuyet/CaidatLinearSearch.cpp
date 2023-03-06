//Tim kiem tuyen tinh - Linear Search
// Cai dat

int LinearSearch (int a[], int N, int x)
{
	int i=0;	 
	while ((i<N) && (a[i] != x))
		i++;
	
	if (i==N)
		return -1;	//Tim het mang nhung khong thay x 
	else
		return i; 	// Tim thay x tai vi tri a[i]  
 } 
