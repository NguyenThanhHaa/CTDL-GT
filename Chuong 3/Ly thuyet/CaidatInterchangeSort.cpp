//Doi cho truc tiep - Interchange Sort
//Cai dat

void InterchangeSort(int a[], int N)
{ 
	for (int i=0; i<N-1; i++)
	{
		for (int j = i+1; i<N; j++)
		{
			if (a[i]> a[j]) 
				Hoanvi(a[i],a[j]); 
		 } 
	 } 
 } 
