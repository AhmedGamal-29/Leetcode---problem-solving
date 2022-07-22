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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode result(0); 

        ListNode* last = &result;            


    while(list1 != NULL and list2 != NULL)
    {
        //list1 node value is smaller
        if(list1->val < list2->val)
        {
            
            last->next = list1;
          
            last = list1;
            
            list1 = list1->next;
        }
    
        //list2 node value is smaller
        else
        {
            last->next = list2;
            
            last = list2;
            
            list2 = list2->next;
        }
    }
        
    if(list1 != NULL)
        last->next = list1;

  
    if(list2 != NULL)
        last->next = list2;
        
        
      return result.next;  
    }
};