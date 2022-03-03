#include <iostream>

using namespace std;

class Node
{
public:
	int data;

	Node* link;
private:
};

Node* top = NULL;

void isEmpty()
{
	if (top == NULL)
	{
		cout << "Empty" << endl;
	}
	else
	{
		cout << "Not Empty" << endl;
	}
}

void isFull()
{
	if (top == NULL)
	{
		cout << "Not full" << endl;
	}
	else
	{
		cout << "Full" << endl;
	}
}

void push(int value)
{
	Node* ptr = new Node();
	ptr->data = value;
	ptr->link = top;
	top = ptr;
	cout << top->data << endl;
}

void pop()
{
	if (top == NULL)
	{
		cout << "Empty" << endl;
	}
	else
	{
		Node* ptr = top;
		top = top->link;
		delete(ptr);
	}
}

void showTop()
{
	if (top == NULL)
	{
		cout << "Empty" << endl;
	}
	else
	{
		cout << "Top is: " << top->data << endl;
	}
}

int main()
{
	push(3);
	push(2);
	push(1);
	pop();
	showTop();
	isFull();

	return 0;
}