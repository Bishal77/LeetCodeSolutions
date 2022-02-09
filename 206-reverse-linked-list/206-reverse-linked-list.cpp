class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       if(head==NULL)return head;
        stack<ListNode*> st;
        while(head!=NULL){
        st.push(head);
        head=head->next;
        }
        ListNode* node = new ListNode;
           node=st.top();
            st.pop();
        ListNode* res=node;
        while(!st.empty()){
             ListNode* temp = new ListNode;
            temp=st.top();
            st.pop();
            node->next=temp;
            node=node->next;
        }
        node->next=NULL;
        return res;
    }
};