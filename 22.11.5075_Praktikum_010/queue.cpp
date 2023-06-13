#include "queue.h"

Queue::Queue()
{
	_front = 0;
	_back = 0;
	for(int i = 0; i < 10; ++i)
	    _elements[i] = 0;
}

// fungsi push()
// memasukkan elemen 'e' ke queue
void Queue::push(int e)
{
	if(!full())
	{
		_elements[_back] = e;
		++_back;
	}
}

// fungsi pop()
// mengeluarkan elemen dari queue
void Queue::pop()
{
	if(!empty())
	{
		++_front;
	}
}

// fungsi size()
// mengetahui jumlah elemen yang ada dalam queue
int Queue::size()
{
	return _back - _front;
}

// fungsi full()
// mengetahui apakah queue penuh
bool Queue::full()
{
	return _back == 10;
}

// fungsi empty
// mengetahui apakah queue kosong
bool Queue::empty()
{
	return _front == _back;
}

// fungsi front()
// membaca elemen paling depan
int Queue::front()
{
	return _elements[_front];
}

// fungsi back()
// membaca elemen paling belakang
int Queue::back()
{
	return _elements[_back - 1];
}
