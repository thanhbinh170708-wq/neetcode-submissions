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
    void reorderList(ListNode* head) {
    ListNode* slowcur = head;
    if (head == nullptr || head -> next == nullptr || head -> next -> next == nullptr)
    {
        return;
    }
    ListNode* fastcur = head -> next;
    while(fastcur != nullptr && fastcur -> next != nullptr)
    {
        if (fastcur -> next -> next != nullptr)
        {
            fastcur = fastcur -> next -> next;
        }
        else 
        {
        fastcur = fastcur -> next;
        }
        slowcur = slowcur -> next;
    }
    ListNode* tempslowcur = slowcur -> next;
    slowcur-> next = nullptr;
    ListNode* tempcur = tempslowcur;
    ListNode* prevtempcur = nullptr;
    while(tempslowcur != nullptr)
    {
        tempcur = tempslowcur -> next;
        tempslowcur -> next = prevtempcur;
        prevtempcur = tempslowcur;
        tempslowcur = tempcur; 
    }
    int dem = 0;
    ListNode* temphead= head;
    ListNode* temporarycur = prevtempcur;
    while (head != nullptr)
    {
        if (dem % 2 == 0)
        {
            temphead = head -> next;
            head -> next = temporarycur;
            head = temphead;
            dem++;
        }
        else
        {
            dem++;
            temporarycur = prevtempcur -> next;
            prevtempcur -> next = temphead;
            prevtempcur = temporarycur;
        }
    }
    
    }
};
