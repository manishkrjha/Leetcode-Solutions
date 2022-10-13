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
    void deleteNode(ListNode* node) {
        ListNode* itr = node;
        
        while(itr!=NULL){
            itr->val = itr->next->val;
            
            if(itr->next->next == NULL){
                itr->next = NULL;
                break;
            }
            
            itr = itr->next;
        }
    }
};