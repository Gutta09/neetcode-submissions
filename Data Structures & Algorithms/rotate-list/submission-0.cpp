/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head){
            return head;
        }
        ListNode*bhai=head;
        int n=1;
        while(bhai->next!=NULL){
            n++;
            bhai=bhai->next;
        }
        bhai->next=head;
        k=k%n;
        for(int i=0;i<n-k;i++){
            bhai=bhai->next;
        }
        head=bhai->next;
        bhai->next=nullptr;
        return head;
    }
};