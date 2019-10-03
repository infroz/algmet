#include "stack.h"

Stack::Stack(int max)
{
	// Initialize values
	head = new node;
	z = new node;
	// set head and z to point to z-index
	head->next = z; z->next = z;
}

Stack::~Stack()
{
	// Copy head*
	node* t = head;
	while (t != z)
	{
		// moves pointer to next node
		head = t; t = t->next;
		// Delete own values
		delete head;
		delete z;
	}
}

void Stack::push(itemType v)
{
	// temp new node
	node* t = new node;
	// Adds new pointers
	t->key = v; t->next = head->next;
	head->next = t;
}

itemType Stack::pop()
{
	itemType x;
	struct node* t = head->next;
	head->next = t->next; x = t->key;
	delete t; return x;
}

int Stack::empty()
{
	return head->next == z;
}
