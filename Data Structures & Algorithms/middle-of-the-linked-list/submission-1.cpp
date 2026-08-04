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
    ListNode* middleNode(ListNode* head) {
    if (head == nullptr || head -> next == nullptr)
    {
        return head;
    }
    else{
    ListNode* fastcur = head -> next;
    ListNode* slowcur = head;
    while(fastcur != nullptr)
    {
    if (fastcur -> next != nullptr)
    {
        fastcur = fastcur -> next -> next;
    }
    else
    {
        fastcur = fastcur -> next;
    }
    slowcur = slowcur -> next;

    }
    return slowcur;

    }
    
    }
};