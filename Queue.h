#ifndef _QUEUE_H
#define _QUEUE_H

#include <iostream>
using namespace std;
template <class type> class Queue {
private:
	type* tabElmt;
	int size;
	int back; //tambahan
public:
Queue();
Queue(int mSize);
Queue(const Queue& q);
Queue& operator=(const Queue& q);
~Queue();

void add(type elmt);
void del(type* elmt);
void delBack(type* elmt);

int getSize();
void print();
};

template <class type>
Queue <type>::Queue(){
	tabElmt = new type[50];
	size = 50;
	back = 0;
}
template <class type>
Queue <type>::Queue(int mSize){
	tabElmt = new type[mSize];
	size=mSize;
	back = 0;
}
template <class type>
Queue <type>::Queue(const Queue& q){
	size=q.size;
	back=q.back;
	tabElmt = new type[q.size];
	for(int i=0;i<=q.back;++i){
		tabElmt[i]=q.tabElmt[i];}	
}
template <class type>
Queue<type>& Queue<type>::operator=(const Queue<type>& q){
	size=q.size;
	back=q.back;
	tabElmt = new type[q.size];
	for(int i=0;i<=q.back;++i){
		tabElmt[i]=q.tabElmt[i];}
	return *this;
}
template <class type>
Queue <type>::~Queue(){}
template <class type>
void Queue <type>::add(type elmt){
	if(back+1<=size-1){
		back++;
		tabElmt[back]=elmt;}
}
template <class type>
void Queue <type>::del(type* elmt){
	if(back>0){
		elmt=tabElmt[0];
		for(int i=0; i<back;--i){
			tabElmt[i]=tabElmt[i+1];
		}
		back--;
	}
}
template <class type>
void Queue <type>::delBack(type* elmt){
	if(back>0){
		elmt=tabElmt[back];
		back--;
	}
}
template <class type>
int Queue <type>::getSize(){
	return size;
}
template <class type>
void Queue <type>::print(){
	cout << "Queue: ";
	for(int i=0;i<=back;++i){
		cout << tabElmt[i] << " ";
	}
	cout<<endl;
}


#endif