/* Humbala fiesta spicy yang HOT*/

#ifndef BANKQUEUE_H
#define BANKQUEUE_H

#include <iostream>
#include "Event.h"
#include "Queue.h"

class BankQueue {
public:
	//5 sekawan + ctorparam
	BankQueue();
	BankQueue(const BankQueue&);
	BankQueue(int);
	~BankQueue();
	BankQueue& operator=(const BankQueue&);
	friend ostream& operator<<(ostream&, const BankQueue&);
	
	//method utama
	void processEvent(Event);
	int jockeying(int);
	void print();

private:
	int N;
	int *T;
	Queue<int> *Q;
	int id;
};

#endif
