APPROCH 1    using bubble sort

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* t1=head;
        while(t1!=NULL){
            ListNode* t2=t1->next;
            while(t2!=NULL){
                if(t1->val>t2->val)swap(t1->val,t2->val);
                t2=t2->next;
            }
            t1=t1->next;
        }
        return head;
    }
};

-----------------
APPROCH 2     using vector


class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* temp=head;
        vector<int> v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        ListNode*tmp=head;
        for(int i=0;i<v.size();i++){
            tmp->val=v[i];tmp=tmp->next;
        }
        return head;
    }
};