#include <iostream>
using namespace std;

int* return_int();

int* return_int() { 
	int* one = new int(1);
	int another_one = 1; 
	int two = *one + another_one;
	delete one;
	return &two;
}

int main()
{
	int * ret = return_int();
	
	/* More stuff not involving ret
	...
	*/

	cout << *ret << endl;
}
