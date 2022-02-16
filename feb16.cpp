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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode* ptr1=head,*ptr2=head->next;
        while(ptr2!=NULL){
            swap(ptr1->val,ptr2->val);
            
            ptr1=ptr1->next->next;if(ptr1==NULL)break;
            ptr2=ptr2->next->next;
        }
        return head;
    }
};