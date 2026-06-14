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
    int pairSum(ListNode* head) {
        int len=0;
        ListNode* temp=head;

        while(temp!=NULL){
            len++;
            temp=temp->next;
        }

        int cent =len/2-1;

        temp=head;

        while(cent--){
            temp=temp->next;
        }

        ListNode* sec=temp->next;
        temp->next=NULL;

        //reverse
        ListNode* curr=sec;
        ListNode* prev=NULL;
         while(curr!=NULL){
            ListNode* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
         }
         //prev is new head afrer revese;
            //1st list is head and 2nd is prev
            int ans=INT_MIN;
         while(head!=NULL){
            int sum=head->val+prev->val;
            ans=max(ans,sum);
            head=head->next;
            prev=prev->next;
         }
         return ans;
    }
};