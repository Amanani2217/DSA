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
    
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         vector<int>temp;
         int s1 = l ;
         int s2 = m+ 1;
         int e1= m;
         int e2 = r;
         while(s1<=e1&&s2<=e2){
             if(arr[s1]<=arr[s2])
             {
                 temp.push_back(arr[s1]);
                 s1++;
             }
             else {
                 temp.push_back(arr[s2]);
                 s2++;
             }
         }
         while(s1<=e1){
             temp.push_back(arr[s1]);
             s1++;
         }
         while(s2<=e2){
             temp.push_back(arr[s2]);
             s2++;
         }
         for(int i = l;i<=r;i++){
             arr[i]=temp[i-l];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r)
         return ;
        
        int mid = l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);    
        
        
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends