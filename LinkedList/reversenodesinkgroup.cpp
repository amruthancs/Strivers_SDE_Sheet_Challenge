#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	// Write your code here.
    
	if(head == NULL)
        return head;
    int k = b[0];
        Node* dummy = new Node(0);
        dummy->next = head;

        int count = 0;
        Node *cur =dummy, *pre=dummy, *nex=dummy;
        while(cur->next)
        {
              cur = cur->next;
              count++;
        }
        int i=1;
        while(count and i<=n)
        {
            if(count<k)
            k = count;
           while(k==0 and i+1<=n)k=b[i++];
            cur = pre->next;
            nex = cur->next;
            for(int i=1;i<k;i++)
            {
                cur->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = cur->next;
            }
            pre = cur;
            count -= k;
            k=b[i++];
        }

         return dummy->next;
    
}