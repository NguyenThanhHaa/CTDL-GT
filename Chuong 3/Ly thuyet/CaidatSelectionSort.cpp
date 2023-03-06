//Chon truc tiep - Selection sort
//Cai dat

void SelectionSort(int a[], int N)
{
	int min;	//Chon ra phan tu nho nhat trong day
	
	for (int i=0; i<N-1; i++)
	{
		min = i;
		
		for (int j = i+1; j<N; j++)
		{
			if (a[j] < a[min]) 
				min = j;	//Ghi nhan vi tri phan tu nho nhat 
		 } 
		 
		Hoanvi(a[min], a[i]); 
	 } 
 }  
