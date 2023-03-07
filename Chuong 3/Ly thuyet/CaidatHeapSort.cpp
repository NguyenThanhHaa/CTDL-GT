// Sap xep cay - Heap Sort
//Cai dat

void Shift (int a[], int l, int r)
{
	int x,i,j;
	i=l;
	j=2*i;
	x=a[i];
	
	while ((j<=r) && (cont))
	{
		if (j<r)
			if (a[j]<a[j+1])
				j=j+1;
			if (a[j]<x)	exit();
			else
			{
				a[i]=a[j];
				i=j;
				j=2*i;
				a[i]=x; 
			 } 
	 } 
 } 
 
void CreateHeap(int a[], int N)
{
	int l;
	l=N/2;
	
	while (l>0)
	do
	{
		Shift (a,l,N);
		l=l-1; 
	 } 
 } 

void HeapSort(int a[], int N)
{
	int r;
	CreateHeap(a,N)
	
	r=N-1;
	
	while (r>0)
	do
	{
		Hoanvi(a[l],a[r]);
		r=r-1;
		Shift(a,l,r); 
	 } 
 } 
