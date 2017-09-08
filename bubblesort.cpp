#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n)
{
   int i, j;
   for (int i = 0; i < n-1; i++)
       for (int j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(arr[j],arr[j+1]);
}

void print(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
	int n;
    cout<<"enter the size of array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    bubblesort(arr, n);
    printf("Sorted array: \n");
    print(arr, n);
    return 0;
}
