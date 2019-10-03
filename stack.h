#pragma once

typedef char itemType;

class Stack
{
private:
	struct node
	{
		itemType key;
		node* next;
	};
	node* head;
	node* z;

public:
	Stack(int max = 100);
	~Stack();

	void push(itemType v);
	itemType pop();
	int empty();
};