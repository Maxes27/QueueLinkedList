#include "Queue.h"

#include"Queue.cpp"
#include <string>
using namespace std;

int main() {

	Queue<string> que("Someone", 3);
	que.push("Max");
	
	cout<<que.size()<<endl;
	que.pop();
	que.pop();
	que.pop();

	return 0;
}