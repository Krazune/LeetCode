// 622. Design Circular Queue
#include <stdbool.h>
#include <stdlib.h>

typedef struct
{
	int* elements;
	int size;
	int front;
	int count;
} MyCircularQueue;

MyCircularQueue* myCircularQueueCreate(int k);
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value);
int myCircularQueueRearIndex(MyCircularQueue* obj);
bool myCircularQueueDeQueue(MyCircularQueue* obj);
int myCircularQueueFront(MyCircularQueue* obj);
int myCircularQueueRear(MyCircularQueue* obj);
bool myCircularQueueIsEmpty(MyCircularQueue* obj);
bool myCircularQueueIsFull(MyCircularQueue* obj);
void myCircularQueueFree(MyCircularQueue* obj);

MyCircularQueue* myCircularQueueCreate(int k)
{
	MyCircularQueue* newQueue = malloc(sizeof (MyCircularQueue));

	newQueue->elements = malloc(sizeof (int) * k);
	newQueue->size = k;
	newQueue->front = 0;
	newQueue->count = 0;

	return newQueue;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value)
{
	if (myCircularQueueIsFull(obj))
	{
		return false;
	}

	obj->count++;
	obj->elements[myCircularQueueRearIndex(obj)] = value;

	return true;
}

int myCircularQueueRearIndex(MyCircularQueue* obj)
{
	if (myCircularQueueIsEmpty(obj))
	{
		return -1;
	}

	return (obj->front + obj->count - 1) % obj->size;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj)
{
	if (myCircularQueueIsEmpty(obj))
	{
		return false;
	}

	obj->count--;
	obj->front = (obj->front + 1) % obj->size;

	return true;
}

int myCircularQueueFront(MyCircularQueue* obj)
{
	if (myCircularQueueIsEmpty(obj))
	{
		return -1;
	}

	return obj->elements[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj)
{
	int rearIndex = myCircularQueueRearIndex(obj);

	if (rearIndex == -1)
	{
		return -1;
	}

	return obj->elements[myCircularQueueRearIndex(obj)];
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj)
{
	return obj->count == 0;
}

bool myCircularQueueIsFull(MyCircularQueue* obj)
{
	return obj->count == obj->size;
}

void myCircularQueueFree(MyCircularQueue* obj)
{
	free(obj->elements);
	free(obj);
}