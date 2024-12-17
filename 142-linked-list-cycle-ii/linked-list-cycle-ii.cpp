/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,int>m;
        ListNode* temp = head;

        int  i =0 ;
        while(temp){
            if(m[temp]){
                return temp;
            }
            m[temp]++;
            temp=temp->next;
        }
        return temp;
    }
};