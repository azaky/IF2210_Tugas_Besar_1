#include <iostream>
#include "DateTime.h"
#include "Time.h"
#include "DateTime.h"
using namespace std;

//5 sekawan
DateTime::DateTime() {}
DateTime::DateTime(const DateTime& DT) {
	D = DT.D;
	T = DT.T;
}
DateTime::DateTime(Date _D, Time _T) : D(_D), T(_T) {}
DateTime& DateTime::operator=(const DateTime& DT) {
	D = DT.D;
	T = DT.T;
	return *this;
}
DateTime::~DateTime() {}
ostream& operator<<(ostream& os, const DateTime& DT) {
	os << DT.D << ";" << DT.T;
}

//I/O
void DateTime::read() {
	char semicolon;
	D.read();
	cin >> semicolon;
	T.read();
}
void DateTime::print() {
	cout << *this << endl;
}

//getter setter
Date DateTime::getDate() {
	return D;
}
void DateTime::setDate(Date D) {
	this->D = D;
}
Time DateTime::getTime() {
	return T;
}
void DateTime::setTime(Time T) {
	this->T = T;
}

//operator 
bool DateTime::isEQ(DateTime DT) {
	return D.isEQ(DT.D) && T.isEQ(DT.T);
}
bool DateTime::isLT(DateTime DT) {
	if (!D.isEQ(DT.D)) {
		return D.isLT(DT.D);
	}
	else {
		return T.isLT(DT.T);
	}
}
bool DateTime::isGT(DateTime DT) {
	return DT.isLT(*this);
}
