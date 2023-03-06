// Tim kiem nhi phan - Binary Search
// Cai dat

int BinarySearch(int a[], int N, int x)
{
	int left = 0, right = N-1;
	int middle;
	
	do
	{
		mid = (letf + right) / 2;
		
		if (x = a[middle])
			return middle;	//Thay x tai vi tri mid 
		
		else
			if (x < a[middle]) 
				right = middle -1;
			else
				left = middle + 1;  
	} 
	while (left <= right)
	
	return -1;	//Tim het day nhung khong thay x  
 } 
