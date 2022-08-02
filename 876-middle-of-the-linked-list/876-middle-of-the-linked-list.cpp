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
    ListNode* middleNode(ListNode* head) 
    {
        
        ListNode* start = head;
        ListNode* end = head;
        
        while(true)
        {
            if(end->next == nullptr)
                break;
            else
            {
                end = end->next->next;
                if(end==nullptr)
                {
                    start = start->next;
                    break;
                }
                    
            }
            
            start= start->next;
        }
        
        return start;
        
        
    }
};