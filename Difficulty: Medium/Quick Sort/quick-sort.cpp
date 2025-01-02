//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(const vector<int>& arr) {
    for (int num : arr)
        printf("%d ", num);
    printf("\n");
}


// } Driver Code Ends
class Solution {
  public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low<high){
        int part = partition(arr,low,high);
        quickSort(arr,low,part-1);
        quickSort(arr,part+1,high);
        }
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        // code here
        
        int pivot = high;
        int i  = low;
        for(int j =low;j<high;j++){
            if(arr[j]<arr[pivot]){
                swap(arr[i],arr[j]);
                i++;
            }
        }
        swap(arr[i],arr[pivot]);
        return i;
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    scanf("%d", &T);
    getchar(); // to consume newline after T

    while (T--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.quickSort(arr, 0, arr.size() - 1);
        printArray(arr);
    }

    return 0;
}

// } Driver Code Ends