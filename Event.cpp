#include "Event.h"
#include <iostream>
using namespace std;


Event::Event(){}
Event::Event(const Event& e){
	T=e.T;
	kode=e.kode;
	i=e.i;
}
Event& Event::operator=(const Event& e){
	T=e.T;
	kode=e.kode;
	i=e.i;
	return *this;
}
Event::~Event(){}
void Event::read(){
	T.read();
	cin >> kode;
	if(kode=='D'){
		cin >> i;
	}
}
void Event::print(){
	T.print();
	if(kode == 'D'){
		cout << " D " <<i<<endl;
	}else{
		cout << " A\n";}
}
DateTime Event::getDateTime() {return T;}
char Event::getKode() {return kode;}
int Event::getI() {return i;}
void Event::setDateTime(DateTime mT){T=mT;}
void Event::setKode(char mKode){kode=mKode;}
void Event::setI(int mI){i=mI;}
