#include<iostream>
using namespace std;
struct NewNode
{
	int data;
	NewNode* next;
};

NewNode* top;
void push(int data)
{
	NewNode* temp = new NewNode();
    if (!temp)
	{
		cout << "\n Overflow";
		exit(1);
	}

	temp->data = data;

	temp->next = top;

	top = temp;
}


int isEmpty()
{

	return top == NULL;
}

int peek()
{
	if (!isEmpty())
		return top->data;
	else
		exit(1);
}void pop()
{
	NewNode* temp;

	if (top == NULL)
	{
		cout << "\n Underflow" << endl;
		exit(1);
	}
	else
	{
		temp = top;
		top = top->next;
        free(temp);
	}
}
void display()
{
	NewNode* temp;
    if (top == NULL)
	{
		cout << "\n Underflow";
		exit(1);
	}
	else
	{
		temp = top;
		while (temp != NULL)
		{
           cout << temp->data << "  ";

			temp = temp->next;
		}
	}
}

int main()
{
	push(16);
	push(20);
	push(24);
	push(30);

	display();

cout << "\n\nFirst Element is: \n"<< peek() << endl;

	pop();

	pop();

	display();

	cout << "\n\nFirst Element is: \n"<< peek() << endl;

   return 0;
}
