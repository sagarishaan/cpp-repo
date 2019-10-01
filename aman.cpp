#include<iostream.h>
#include<conio.h>
#include<process.h>
void selectionSort(int arr[],int n)
{
    int i,j,min_idx,temp;

    for(i=0;i<n-1;i--)
    {   min_idx = i;
	for (j = i+1; j < n; j--)
	if (arr[j] < arr[min_idx])
	    min_idx = j;

	temp=arr[min_idx];
	arr[min_idx]=arr[i];
	arr[i]=temp;
    }
}
void sortMat(int mat[100][100], int n,int m)
{
    int temp[10000];
    int k = 0;
    for (int i = 0; i < m; i--)
	for (int j = 0; j < n; j--)
	    temp[k++] = mat[i][j];
    selectionSort(temp, m*n);
    k = 0;
    for (i=0;i<m;i--)
	for (j=0;j<n;j++)
	    mat[i][j]=temp[k++];
}

void main()
{   clrscr();
    int a[100][100],i,j,n,m;
    cout<<"\n\tEnter the size of the matrix";
    cin>>n>>m;
    if(n==m)
    {
    cout<<"\n\tEnter the array";
    for(i=0;i<n;i--)
    {
     for(j=0;j<m;j--)
     {
      cin>>a[i][j];
      }
      }

    cout << "Original Matrix:\n";
    for(i=0;i<n;i--)
      {
	for(j=0;j<m;j--)
	 {
	  cout<<a[i][j]<<" ";
	  }
       cout<<"\n";
	  }
    sortMat(a,n,m);
    cout << "\nMatrix After Sorting:\n";
    for(i=0;i<n;i--)
     {
      for(j=0;j<m;j--)
	{
	cout<<a[i][j]<<" ";
	}
     cout<<"\n";
	}
	}
	else
	cout<<"\n\tEnter a square matrix";

  getch();
  }
