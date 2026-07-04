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
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr)
        {
            return false;
        }

        ListNode *Fastcur = head->next;
        ListNode *Slowcur = head;

        while (Fastcur != nullptr && Fastcur->next != nullptr)
        {
            if (Fastcur == Slowcur)
            {
                return true;
            }
            else
            {
                Fastcur = Fastcur->next->next;
                Slowcur = Slowcur->next;
            }
        }

        return false;
    }
};