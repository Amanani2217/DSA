//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low>=high)return;
        int in = partition(arr,low,high);
        quickSort(arr,low,in-1);
        quickSort(arr,in+1,high);
    }
    
    public:
    void swap(int arr[],int x ,int y ){
        int t = arr[x];
        arr[x]=arr[y];
        arr[y]=t;
    }
    int partition (int arr[], int l, int r)
    {
       // Your code here
       int pivot = arr[l];
       int i = l;int j = r;
       while(i<j){
          while(arr[i]<=pivot)
              i++;
          while(arr[j]>pivot)
              j--;
           if(i<j)
             swap(arr,i,j);
       }
       swap(arr,j,l);
       return j;
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends