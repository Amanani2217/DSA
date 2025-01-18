//{ Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print nodes in a given linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    cout << endl;
}


// } Driver Code Ends
/*Linked list Node structure

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    // Function to merge K sorted linked list.
    Node* mergeTwo(Node* p,Node*q){
        Node* ans  = new Node(0);
        Node* t =ans;
        if(!p)
          return q;
        if(!q)
           return p;
        
        while(p&&q){
            if(p->data<q->data){
                t->next =p;
                p=p->next;
            }
            else{
                t->next = q;
                q=q->next;
            }
             t=t->next;
        }
        while(p){
            t->next= p;
            t=t->next ;
            p=p->next;
        }
        while(q){
                t->next = q;
                t=t->next;
                q=q->next;
            }
            return ans->next;
    }
    Node* mergeKLists(vector<Node*>& arr) {
        Node*  temp=arr[0];
        for(int i=1;i<arr.size();i++){
           temp =  mergeTwo(temp,arr[i]);
        }
        return temp;
    }
};


//{ Driver Code Starts.

// Driver program to test the above functions
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<Node*> arr;
        vector<int> nums;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            nums.push_back(number);
        }
        int ind = 0;
        int N = nums.size();

        while (ind < N) {
            int n = nums[ind++];
            int x = nums[ind++];
            Node* head = new Node(x);
            Node* curr = head;
            n--;

            for (int i = 0; i < n; i++) {
                x = nums[ind++];
                Node* temp = new Node(x);
                curr->next = temp;
                curr = temp;
            }
            arr.push_back(head);
        }

        Solution obj;
        Node* res = obj.mergeKLists(arr);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends