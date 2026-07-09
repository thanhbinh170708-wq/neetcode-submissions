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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* temp = head;
    ListNode* temphead = head;
    int count = 0; 
    if (head -> next == nullptr)
    {
        head = nullptr;
        return head;
    }
    while (temp!= nullptr)
    {
        if (n == 1)
        {
            if (temp -> next -> next == nullptr)
            {
                temp -> next = nullptr;
                return head;
            }
        }
        temp = temp-> next;
        count++;
    }
    if (count == n)
    {
        head = head -> next;
    }
    while (temphead != nullptr)
    {
        count --;
        if (count == n )
        {
            temphead -> next = temphead -> next -> next;
            break;
        }
        temphead = temphead -> next;
    }
    return head;

    }
};
