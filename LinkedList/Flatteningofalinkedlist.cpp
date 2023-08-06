/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
Node* mergeTwoLists(Node* a, Node* b)
{
    Node* temp =  new Node(0);
	Node* res = temp;
   if(!a)return b;
   if(!b)return a;
	while(a and b)
	{
		if(a->data < b->data)
		{
           temp->child = a;
			a = a->child;
		}
		else
		{
			temp->child = b;
			b = b->child;
		}
		temp = temp->child;
		
	}
	if(a)temp->child = a;
	else temp->child = b;
	return res->child;
}

Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	
	if(head == NULL or head->next==NULL)
		return head;
    Node* second = flattenLinkedList(head->next);
    head->next = NULL;
	head = mergeTwoLists(head, second);

	return head;
}
