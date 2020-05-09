#pragma once
#include <cstddef>
template <class T>
class Queue
{
private:
	class QueueNode
	{
	public:
		T data;
		QueueNode* next;
		QueueNode* newNode(T data) {
			QueueNode* queueNode = new QueueNode();
			queueNode->data = data;
			queueNode->next = NULL;
			return queueNode;
		};
	};
	int sizeQueue;  //size of stack
	int occupied;  //number of elements in stack
	QueueNode* front;
	QueueNode* rear;
	QueueNode* temp;
	//methods
	int isEmpty();  //checks if stack is empty
public:
	Queue(); //normal constructor to initialize members
	Queue(T data, int size); //constructor to create a stack with certain size and add an initial element
	~Queue();  //destructor to delete stack from memory after closing program
	//methods
	void push(T data);  //pushes element into queue
	void pop(); //deletes, then prints first element in queue
	T& top(); //prints the first element in stack
	int size();  //prints number of elements in stack


};

