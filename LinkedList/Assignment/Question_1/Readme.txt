##Solved on LeetCode


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptr=headA;
        ListNode* ptr2=headB;
        while(ptr!=ptr2){
            if(ptr==ptr2){
                break;
            }
            ptr= (ptr==NULL) ? headB : ptr->next;
            ptr2 = (ptr2==NULL) ? headA : ptr2->next;             
        }
        return ptr;
    }
};