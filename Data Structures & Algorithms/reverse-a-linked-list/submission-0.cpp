
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    ListNode* templinkedlist = nullptr;
    ListNode* prevtemplinkedlist = nullptr;
    while(head != nullptr)
    {
        if (head -> next == nullptr)
        {
        head -> next = prevtemplinkedlist;
        break;    
        }
        templinkedlist = head -> next;
        head -> next = prevtemplinkedlist;
        prevtemplinkedlist = head;
        head = templinkedlist;
    
    }
    return head;
    }
};
