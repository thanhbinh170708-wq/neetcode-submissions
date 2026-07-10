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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* result = new ListNode(0);
    ListNode* sum = result;
    
    int store = 0;
    while (true)
    {
        int templ1 = 0;
        int templ2 = 0;
        int tempsum = 0;
        if (l1 != nullptr)
        {
            templ1 = l1->val;
        }
        else
        {
            templ1 = 0;
        }
        if (l2 != nullptr)
        {
            templ2 = l2->val;
        }
        else
        {
            templ2 = 0;
        }
        tempsum = templ1+templ2 + store;
        
        if (tempsum >= 10)
        {
            tempsum = tempsum % 10;
            
            sum -> val = tempsum ;
            store = 1;
        }
        else
        {
            sum -> val = tempsum ;
            store = 0;
        }
        if (l1 != nullptr)
            {
                l1 = l1 -> next;
            }
        if (l2 != nullptr)
            {
                l2 = l2 -> next;
            }
        
        if (l1 != nullptr || l2  != nullptr || store != 0)
        {
            ListNode* tempnode = new ListNode(0);
            sum -> next = tempnode;
            sum = sum -> next;
        }
        else
        {
            sum -> next = nullptr;
            break; 
        }
    }
    return result;
    }
};
