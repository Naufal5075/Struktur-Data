#ifndef _QUEUE_H_
#define _QUEUE_H_

class Queue
{
public:
	Queue();
	void push(int e);
	void pop();
	int front();
	int back();
	int size();
	bool full();
	bool empty();
	
private:
	int _elements[10];
	int _front;
	int _back;
		
};
#endif
