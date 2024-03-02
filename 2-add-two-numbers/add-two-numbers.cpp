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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        struct ListNode* answer=NULL;
        struct ListNode *curr = answer;
        int carry = 0;

        while(l1!=NULL || l2!=NULL){
            int ans = 0;

            // cout << l1 << "  " << l2 << endl;

            if(l1 != NULL){
                ans += l1->val;
                // cout << "l1 added ";
                l1 = l1->next;
            }
            if(l2 != NULL){
                ans += l2->val;
                // cout << "l2 added " << endl;
                l2 = l2->next;
            }
            ans += carry;
            carry = 0;
            if(ans>=10){
                carry = 1;
                ans = ans%10;
            }

            struct ListNode* newNode = new ListNode;
            newNode->val = ans;
            newNode->next = NULL;

            if(curr == NULL){
                curr = newNode;
                answer = newNode;
                continue;
            }
            else{
                curr->next = newNode;
                curr = newNode;
            }
        }

        if(carry==1){
            struct ListNode* newNode = new ListNode;
            newNode->val = 1;
            newNode->next = NULL;
            curr->next = newNode;
        }

        return answer;
    }
};