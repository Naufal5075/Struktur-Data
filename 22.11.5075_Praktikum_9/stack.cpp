#include "stack.h"

// constructor
// array harus diinisialisasi
// posisi _top = 0
Stack::Stack()
{
	_top = 0;
	// array harus diiniasialisasi
	for(int i = 0; i < 10; i++)
		_elements[i] = 0;
}


// fungsi push()
// memasukkan elemenet e ke stack
void Stack::push(int e)
{
	// syarat stack tidak boleh penuh
	if(!full())
	{
		_elements[_top] = e;
		++ _top;
	}
}


// fungsi pop
// mengambil element paling atas
void Stack::pop()
{
	// syarat tidak boleh kosong
	if(!empty())
	{
		--_top;
	}
}


// fungsi full()
// memeriksa apakah stack dalam kondisi kosong
bool Stack::full()
{
	if(!empty())
	{
		return _top = 10;
	}
}


// fungsi empty
// memeriksa apakah stack dalam kondisi kosong
bool Stack::empty()
{
	return _top == 0;
}

// fungsi size

int Stack::size() 
{
	return _top;
}

// fungsi top
// 

int Stack::top()
{
	return _elements[_top - 1];
}


