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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* l =nullptr;
        ListNode* result=nullptr;
        
        while(head!= nullptr)
        {
            if(head->val != val)
            {
                if(l==nullptr)
                {
                    l = new ListNode (head->val);
                    result=l;
                }
                else
                {
                    l->next = new ListNode(head->val);
                    l= l ->next;
                }
            }
            
            
            
            
            head=head->next;
        }
        
        
        return result;
    }
};