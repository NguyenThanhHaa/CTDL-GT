//Sap xep nhanh - Quick Sort
// Cai dat 

void QuickSort(int a[], int l, int r) 
{
	int i, j;
	int x;
	
	x = a[(l + r)/2];
	
	i=l;
	j=r;
	
	do
	{
		while (a[i]<x) i++;
		while (a[j]>x) j--;
		
		if (i<=j)
		{
			Hoanvi (a[i], a[j]);
			i++;
			j--;
		}
		
	 } while (i<j);
	
	if (l<j)
		QuickSort(a,l,j);
	if (i<r)
		QuickSort(a,l,r);  
}
