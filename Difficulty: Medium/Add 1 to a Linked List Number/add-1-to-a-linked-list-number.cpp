//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
       Node * t = head;
       vector<int>v;
       while(t){
           v.push_back(t->data);
           t=t->next;
       }
       int flag = 0 ;
       for(int i = v.size()-1;i>=0;i--){
           if(v[i]==9){
               v[i]=0;
           }
           else{
               v[i]+=1;
               flag = 1;
               break;
           }
       }
       if(flag==0){
           v.insert(v.begin()+0,1);
       }
       Node * newHead= new Node(v[0]);
       Node * ans  = newHead;
       for(int i = 1;i<v.size();i++){
           ans->next = new Node(v[i]);
           ans = ans->next;
       }
       return newHead;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends