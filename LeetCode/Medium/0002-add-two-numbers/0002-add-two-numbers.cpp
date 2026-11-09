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

    void inserir(ListNode* atual, ListNode* no)
    {
        if (atual->next == NULL)
        {
            atual->next = no;
            no->next = NULL;
        }
        else
            inserir(atual->next, no);
    }



    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* ans = new ListNode();
        int carry = 0;
        int num1 = 0, num2 = 0;
        if (l1 != NULL)
            num1 = l1->val;
        if (l2 != NULL)
            num2 = l2->val;
        int num = 0;
        num = num1 + num2;
        if (num1 + num2 >= 10)
        {
            num -= 10;
            if (carry == 1)
                num++;
            carry = 1;
        }
        else
        {
            if (carry == 1)
                num++;
            carry = 0;
        }
        ans->val = num;
        ans->next = NULL;
        l1 = l1->next;
        l2 = l2->next;


        while (l1 != NULL || l2 != NULL || carry != 0)     
        {
            num1 = 0, num2 = 0;
            if (l1 != NULL)
                num1 = l1->val;
            if (l2 != NULL)
                num2 = l2->val;
            num = 0;
            num = num1 + num2 + carry;
            if (num >= 10)
            {
                num -= 10;
                carry = 1;
            }
            else
                carry = 0;
            
            ListNode *atual = new ListNode();
            atual->val = num;
            atual->next = NULL;
            inserir(ans, atual);
            if (l1 != NULL) l1 = l1->next;
            if (l2 != NULL) l2 = l2->next;
        }
        return ans;
    }
};