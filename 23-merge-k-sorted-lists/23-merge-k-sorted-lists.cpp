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

        ListNode* merge(ListNode* a, ListNode* b){
        ListNode* result = NULL;
        if (a == NULL)
            return b;
        else if (b == NULL)
            return a;
        if (a->val <= b->val){
            result = a;
            result->next = merge(a->next, b);
        } else {
            result = b;
            result->next = merge(a, b->next);
        }
        return result;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0)
            return NULL;
        
        for(int i = lists.size() ; i > 1 ; i = ceil((float) i/2)){
            int j = 0;
            while(j < i/2){
                lists[j] = merge(lists[j], lists[i-j-1]);
                j++;
            }
        }
        return lists[0];
    }
    
};