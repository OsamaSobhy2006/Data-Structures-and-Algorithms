#include <iostream>
#include "queue.h"
using namespace std;

int main()
{
	enqueue(5);
	enqueue(10);
	enqueue(12);
	enqueue(17);
	display();
	dequeue();
	display();
	cout << "peek = " << peek() << endl;
}