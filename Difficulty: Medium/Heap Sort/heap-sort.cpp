//{ Driver Code Starts
// C++ program for implementation of Heap Sort
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

class Solution
{
    public:
    //Heapify function to maintain heap property.
    void swap(int arr[],int x ,int y){
        int temp = arr[x];
        arr[x]=arr[y];
        arr[y]=temp;
    }
    void heapify(int arr[], int n, int i)  
    {
      // Your Code Here
      int largest = i;
      int l = 2*i;
      int r = (2*i)+1;
      while(l<=n&&arr[l]>arr[largest]){
          largest = l;
          
      }
      while(r<=n&&arr[largest]<arr[r]){
          largest = r;
      }
      if(largest!=i){
          swap(arr,largest , i);
          heapify(arr,n,largest);
      }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    // Your Code Here
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        //code here
        // int x= arr[0];
        // arr[0]=0;
        // for(int i =1 ;i<n;i++){
        //   int   y = arr[i];
        //   arr[i]=x;
        //     // x=  arr[i];
        //     arr[i]
        // }
        // for(int i = n/2;i>=1;i--){
        //     heapify(arr,n,i);
        // }
        
        // //deleter form the  top
        // for(int i = n;i>=1;i--){
        //     swap(arr,1,i);
        //     heapify(arr,n,1);
        // }
        
        priority_queue<int>p;
        for(int i =0;i<n;i++){
            p.push(arr[i]);
        }
        for(int i= n-1;i>=0;i--){
            arr[i] =p.top();
            p.pop();
        }
    }
};




//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    Solution ob;
    ob.heapSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends