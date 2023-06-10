// class: Stack
#ifndef _STACK_H
#define _STACK_H

class Stack
{
public:
	Stack();
	void push(int e);
	void pop();
	bool full();
	bool empty();
	int size();
	int top();
	
private:
	int _elements[10];
	int _top;
};

#endif
