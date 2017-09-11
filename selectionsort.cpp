#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
void selectionsort (int a[],int n)
{
        int mini;
        for(int i=0;i<n-1;i++)
			{
				mini=i ;
				for(int j=i+1;j<n;j++)
				{
					if(a[j]<a[mini])
					{
						mini=j;
					}
				}
          swap(a[mini],a[i]);
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
	selectionsort(a,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
