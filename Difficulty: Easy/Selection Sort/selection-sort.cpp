//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
class Solution
{
    public:
    int select(int arr[], int i)
    {
        
    }
     void swap(int arr[],int x, int y ){
         int temp = arr[x];
         arr[x]=arr[y];
         arr[y]=temp;
         
     }
    void selectionSort(int arr[], int n)
    {
       //code here
       int min = 0 ;
       for(int i =0 ;i<n;i++){
           int j = i;
           min = i;
           while(j<n){
               if(arr[min]>arr[j]){
                   min = j;
               
               }
                   j++;
           }
           swap(arr,min,i);
           
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
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
    ob.selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends