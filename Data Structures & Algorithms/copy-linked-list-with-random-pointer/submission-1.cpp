/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
    Node* temphead = head;
    
    unordered_map<Node*,Node*> mapnode;

    while (temphead != nullptr)
    {
        Node* subnode = new Node(temphead -> val);
        mapnode[temphead] = subnode;
        temphead = temphead ->next;
    }
    temphead = head;
    while (temphead != nullptr)
    {
        Node* tempnode = mapnode[temphead];
        tempnode -> random = mapnode[temphead -> random];
        tempnode -> next = mapnode[temphead -> next];
        temphead = temphead -> next;

    }
    
    

    return mapnode[head];
    }
};
