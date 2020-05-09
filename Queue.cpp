#include "Queue.h"

#include <iostream>

using namespace std;
template <class T>
Queue<T>::Queue() :occupied(0), sizeQueue(0), front(NULL), rear(NULL), temp(NULL) {

}
template <class T>
Queue<T>::Queue(T data, int size) {
	this->sizeQueue = size;
	occupied = 1;
	QueueNode obj;
	front = rear = obj.newNode(data);
	cout << data << " is pushed to queue" << endl;

}
template <class T>
Queue<T>::~Queue() {
	QueueNode* current = front; //holding root address in here  temporary
	QueueNode* next;  //created to keep assigning the next each time to it and delete the one before it

	while (current != NULL)  //keeps looping on stack and deletes each element until reach the end of it
	{
		next = current->next;
		free(current);
		current = next;
	}

	front = NULL;
}
template <class T>
int Queue<T>::isEmpty()
{
	return !front;  //if root has an element its negation will be zero which says the stack is empty
}
template <class T>
void Queue<T>::push(T data)
{
	if (occupied == sizeQueue) {
		cout << "Queue is full" << endl;
	}
	else {
		// Create a new LL node 
		QueueNode obj;
		QueueNode* temp = obj.newNode(data);
		
		// Add the new node at 
		// the end of queue and change rear 
		rear->next = temp;
		rear = temp;
		occupied++;
		cout << data << " is pushed to queue" << endl;
		
	}

}
template <class T>
void Queue<T>::pop()
{
	// If queue is empty, return NULL. 
	if (front == NULL)
		cout << "Queue is empty" << endl;
	else {
		// Store previous front and 
		// move front one node ahead 
		QueueNode* temp = front;
		front = front->next;

		// If front becomes NULL, then 
		// change rear also as NULL 
		if (front == NULL)
			rear = NULL;
		cout << temp->data << endl;
		delete (temp);
		occupied--;
		
	}
}
template <class T>
T& Queue<T>::top()
{
	return front->data;
}
template <class T>
int Queue<T>::size() {
	return occupied;
}
