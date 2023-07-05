#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int>* reverse(LinkedListNode<int> *ptr)
{
    LinkedListNode<int> *nex = NULL, *pre = NULL;

    while(ptr!=NULL)
    {
        nex = ptr->next;
        ptr->next = pre;
        pre = ptr;
        ptr = nex;
    }
    return pre;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.

    LinkedListNode<int> *dummy = head , *fast = head , *slow = head;
    if(!head or !head->next)
    return true;
    while(fast->next and fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    slow->next = reverse(slow->next);
    slow = slow->next;
    while(slow!=NULL)
    {
        if(slow->data!=dummy->data)
        return false;
        slow = slow->next;
        dummy = dummy->next;
    }
    return true;

    

}