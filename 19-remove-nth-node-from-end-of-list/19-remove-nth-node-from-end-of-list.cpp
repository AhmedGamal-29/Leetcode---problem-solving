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
    
    int length(ListNode* head)
    {
        int size=0;
        while(head)
        {
            size++;
            head=head->next;
        }
        
        return size;
    }
    
    
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* current = head;
        int delete_target = length(head)-n;

        if(delete_target==0)
        {
            head = head->next;
        }
            
        else
        {
            while(delete_target>1)
            {
                delete_target--;
                current = current->next;
            }
            current->next = current->next->next;
 
        }
        
        return head;
    }
};