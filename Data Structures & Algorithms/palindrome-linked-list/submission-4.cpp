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
    void reverse(ListNode*& head)
    {
        ListNode* temp = head;
        if (head -> next == nullptr)
        {
            return;
        }
        else
        {
            ListNode* newtemp = temp-> next;
            ListNode* oldtemp = nullptr;
            while(true)
            {
                temp-> next = oldtemp;
                oldtemp = temp;
                temp = newtemp; 
                if (newtemp-> next != nullptr)
                    newtemp = newtemp-> next;
                else
                    break;
            }
            newtemp -> next = oldtemp;
            head = newtemp;

        }

    }
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        
        ListNode* secondHalf = reverseList(slow->next);
        slow->next = nullptr;

        ListNode* p1 = head;
        ListNode* p2 = secondHalf;
        bool result = true;
        while (p2) {
            if (p1->val != p2->val) { result = false; break; }
            p1 = p1->next;
            p2 = p2->next;
        }

        slow->next = reverseList(secondHalf);

        return result;
    }
};