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
    bool hasCycle(ListNode *head) {
        
        ListNode* start = head;
        ListNode* end = head;
        
        if( !head  or !head->next  or !head->next->next  )
            return false;
        
        start= start->next;
        end= end->next->next;
        
        while( start != end and end->next and end->next ->next )
        {
            start= start->next;
            end= end->next->next;
        }
        
        return start==end;
    }
};