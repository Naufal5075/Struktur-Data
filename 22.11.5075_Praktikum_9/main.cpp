// test
#include "stack.h"
#include <iostream>

using namespace std;

int main()
{
	Stack s1;
	
	s1.push(9);
	s1.push(5);
	s1.push(8);
	s1.push(1);
	s1.push(6);
	
	cout << "size: " << s1.size() << endl;
	cout << "top: " << s1.top() << endl;
	
	while(!s1.empty())
	{
		cout << s1.top() << ' ';
		s1.pop();
	}
	cout << endl;
	
	return 0;
}
