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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>nums;
        for(auto list:lists){
            while(list){
                nums.push_back(list->val);
                list=list->next;
            }
        }
        sort(nums.begin(),nums.end());
        ListNode dummy(0);
        ListNode*tail=&dummy;
        for(int x:nums){
            tail->next=new ListNode(x);
            tail=tail->next;
        }
        return dummy.next;
    }
};
