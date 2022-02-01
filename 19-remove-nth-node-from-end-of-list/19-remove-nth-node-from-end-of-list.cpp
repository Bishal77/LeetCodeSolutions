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
  
       ListNode* removeNthFromEnd(ListNode* head, int n) {
vector<ListNode*> st;
ListNode *temp=head;
while(temp)
{
st.push_back(temp);
temp=temp->next;
}
int totalnode=st.size();
ListNode *ans=st[totalnode-n];
if((totalnode-n)==0)
{
return head->next;
}
ListNode *pre=st[totalnode-n-1];
pre->next=ans->next;
return head;
}
    
};