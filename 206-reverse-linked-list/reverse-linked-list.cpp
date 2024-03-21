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
private:
    ListNode* temp = NULL;
    int l = 0;

    void reverse(ListNode* node) {

        if (node == NULL) {
            l = l/2;
            return;
        }
        else{
            l++;
            // cout << node->val << " l++ " << l << endl;
            reverse(node->next);
        }
        
        if (l > 0) {
            int num = node->val;
            node->val = temp->val;
            temp->val = num;
            temp = temp->next;
            l--;
            // cout << num << " " << node->val << " " << mid << endl;
        }
        else return;

    }

public:
    ListNode* reverseList(ListNode* head) {
        
        temp = head;
        reverse(head);

        return head;
    }
};