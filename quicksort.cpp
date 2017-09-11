#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int part(int a[],int s,int e)
{
    int i=s+1;
    int p=a[s];
    for(int j=s+1;j<=e;j++)
	{
	  if (a[j]<p)
		{
			 swap(a[i],a[j]);
			 i++;
		}
   }
   swap(a[s],a[i-1]);
   return i-1;
}
void quicksort(int a[],int s,int e)
{
    if(s<e)
	{
         int p=part(a,s,e);
         quicksort(a,s,p-1);
         quicksort(a,p+1,e);
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
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
