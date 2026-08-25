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

    int linkedlist_size(ListNode* head)
    {
        if (head == NULL)
            return 0;
        else
            return 1 + linkedlist_size(head->next);
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = linkedlist_size(head);
        ListNode* atual = head;
        ListNode* previous = nullptr;
        while (size != n)
        {
            previous = atual;
            atual = atual->next;
            size--;
        } 

        if (previous == nullptr)
        {
            head = head->next;
            delete atual;
            return head;
        }
        
        previous->next = atual->next;
        delete atual;
        return head;
    }
};