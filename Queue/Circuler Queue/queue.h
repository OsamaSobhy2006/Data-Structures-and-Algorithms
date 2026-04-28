#define size 5

extern int queue[size];
extern int front;
extern int rear;


bool isEmpty();
bool isFull();
void enqueue(int value);
void dequeue();
void display();
int peek();