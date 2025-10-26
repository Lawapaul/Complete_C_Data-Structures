#Solve it on LeetCode

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
    ListNode* merge(ListNode* left,ListNode* right){
        ListNode* headAns=NULL;
        ListNode* tailAns=NULL;
        ListNode* i=left;
        ListNode* j=right;
        while(i!=NULL && j!=NULL){
            if(i->val > j->val){
                ListNode* current=j;
                j=j->next;
                current->next=NULL;
                if(headAns==NULL){
                    headAns=tailAns=current;
                } else{
                    tailAns->next=current;
                    tailAns=current;
                }
            } else{
                ListNode* current=i;
                i=i->next;
                current->next=NULL;
                if(headAns==NULL){
                    headAns=tailAns=current;
                } else{
                    tailAns->next=current;
                    tailAns=current;
                }
            }  
        }
        if(i!=NULL){
            while(i!=NULL){
                ListNode* current=i;
                i=i->next;
                current->next=NULL;
                tailAns->next=current;
                tailAns=current;
            }
        }
        if(j!=NULL){
            while(j!=NULL){
                ListNode* current=j;
                j=j->next;
                current->next=NULL;
                tailAns->next=current;
                tailAns=current;
            }
        }
       
        return headAns;
    }
    ListNode* split(ListNode* head){
        ListNode* slow=head;
        ListNode* prev=NULL;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(prev!=NULL){
            prev->next=NULL;
        }
        return slow;
    }
    ListNode* sort(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* splitRight=split(head);
        ListNode* left=sort(head);
        ListNode* right=sort(splitRight);
        return merge(left,right);

    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head=NULL;
        ListNode* tail=NULL;
        for(int i=0;i<lists.size();i++){
            ListNode* current=lists[i];
            while(current!=NULL){
                ListNode* temp=current;
                current=current->next;
                temp->next=NULL;
                if(head==NULL){
                    head=tail=temp;
                } else{
                    tail->next=temp;
                    tail=temp;
                }
            }
        }
        return sort(head);
    }
};