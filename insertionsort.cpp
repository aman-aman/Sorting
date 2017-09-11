#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
void insertionsort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
      int temp=a[i];
      int j=i;
	  while(j>0&&temp<a[i-1])
	  {
			a[j]=a[j-1];
			j--;
	  }
	  a[j]=temp;
     }
}
int main()
{
	int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertionsort(a,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
