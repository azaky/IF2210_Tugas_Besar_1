/* Halo Zaky ;) */

#include <iostream>
#include <cstdlib>
#include "BankQueue.h"
#include "Event.h"
#include "Queue.h"

//5 sekawan
BankQueue::BankQueue() {
	N = 0;
	T = NULL;
	Q = NULL;
	id = 0;
}
BankQueue::BankQueue(const BankQueue& BQ) {
	N = BQ.N;
	T = new int[N];
	for (int i = 0; i < N; ++i) {
		T[i] = BQ.T[i];
	}
	Q = new Queue<int>[N];
	for (int i = 0; i < N; ++i) {
		Q[i] = BQ.Q[i];
	}
	id = BQ.id;
}
BankQueue::BankQueue(int N) {
	this->N = N;
	T = new int[N];
	Q = new Queue<int>[N];
	for (int i = 0; i < N; ++i) {
		T[i] = 0;
	}
	id = 0;
}
BankQueue::~BankQueue() {
	delete[] T;
	delete[] Q;
}
BankQueue& BankQueue::operator=(const BankQueue& BQ) {
	if (T != NULL) {
		delete[] T;
	}
	if (Q != NULL) {
		delete[] Q;
	}
	N = BQ.N;
	T = new int[N];
	for (int i = 0; i < N; ++i) {
		T[i] = BQ.T[i];
	}
	Q = new Queue<int>[N];
	for (int i = 0; i < N; ++i) {
		Q[i] = BQ.Q[i];
	}
	id = BQ.id;
	return *this;
}
ostream& operator<<(ostream& os, const BankQueue& BQ) {
	for (int i = 0; i < BQ.N; ++i) {
		if (BQ.T[i]) {
			os << "Q[" << i << "] = ";
			//os << BQ.Q[i];
			BQ.Q[i].print();
			os << endl;
		}
	}
	return os;
}

//method utama
void BankQueue::processEvent(Event& E) {
	if (E.getKode() == 'A') {
		
	}
	else if (E.getKode() == 'D') {
		
	}
}
int BankQueue::jockeying(int iOrigin) {
	
}
void BankQueue::print() {
	cout << *this;
}
