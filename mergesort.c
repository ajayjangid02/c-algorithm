#include<stdio.h>

void merge(int arr[],int l, int m, int r)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1], R[n2];
	for(i=0;i<n1;i++)
	{
	L[i]=arr[l+i];
	for(j=0;j<n2;j++)
	{
	R[j]=arr[m+1+j];
}}
	
	i=0;
	j=0;
	k=1;
	 while (i < n1 && j < n2)
	{
        if (L[i] <= R[j])
		{
            arr[k] = L[i];
            i++;
        }
        else
		{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
     while (i < n1) 
	{
        arr[k] = L[i];
        i++;
        k++;
    }
     while (j < n2)
	{
        arr[k] = R[j];
        j++;
        k++;
    }
 
}

void mergesort(int arr[],int l,int r)
{
	int m;
	if(l<r)
	{
		m=l+(r-1)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		
	merge(arr,l,m,r);	
	}
}
void print(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
	}
}
int main()
{
	
	int arr[]={2,4,3,6,7,1,6,10,5,0,8,10};
	int size=sizeof(arr)/sizeof(arr[0]);
	mergesort(arr,0,size-1);
	print(arr,size);
	return 0;
}
