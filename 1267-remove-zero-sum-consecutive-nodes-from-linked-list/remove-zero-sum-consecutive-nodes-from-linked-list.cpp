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
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int> arr;

        ListNode* ll = head;
        while(ll != NULL) {

            if (ll->val==0) {
                ll = ll->next;
                continue;
            }
            arr.push_back(ll->val);
            ll = ll->next;
        }

        for (int i=0; i<arr.size(); i++) {
            int sum = arr[i];
            // cout << arr[i] << " ";

            int j;
            for (j=i+1; j<arr.size(); j++) {
                sum += arr[j];
                // cout << arr[j] << " ";
                if (sum == 0) {
                    arr.erase(arr.begin() + i, arr.begin() + j + 1);
                    // cout << "b " << i << " " << j;
                    i--;
                    break;
                }
            }

            // cout << endl;
        }
        
        if (arr.size() > 0){
            head->val = arr[0];
            head->next = NULL;
        } else {
            head = NULL;
        }

        ll = head;
        for (int i=1; i<arr.size(); i++){
            ListNode* temp = new ListNode;
            temp->val = arr[i];
            temp->next = NULL;

            ll->next = temp;
            ll = ll->next;
        }

        return head;
    }
};