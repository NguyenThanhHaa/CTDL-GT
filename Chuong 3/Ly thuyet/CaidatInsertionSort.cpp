//Chen truc tiep - Insertion sort
// Cai dat

void InsertionSort(int a[], int N)
{
	int pos, i;
	int x;
	
	for (int i=1; i<N; i++)
	{
		x = a[i];
		pos = i - 1;
		
		//Tim vi tri chen x
		while ((pos>=0) && (a[pos]>x))
		{
			a[pos+1] = a[pos];
			pos--; 
		 } 
		
		a[pos+1] = x;	//Chen x vao day  
	 } 
 } 
