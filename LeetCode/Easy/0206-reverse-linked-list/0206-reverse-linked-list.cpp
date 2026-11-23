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
    ListNode* ans = NULL;
    void reverter(ListNode* node, ListNode* aux)
    {
        if (node->next == NULL)
            ans = node;
        if(node->next != NULL)
            reverter(node->next, node);
        node->next = aux;

    }


    ListNode* reverseList(ListNode* head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        reverter(head, NULL);
        return ans;        
    }
};