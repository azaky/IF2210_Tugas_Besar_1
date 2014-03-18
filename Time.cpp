#include <iostream>
#include "Time.h"
using namespace std;

//5 sekawan
Time::Time() {
	jam = menit = detik = 0;
}
Time::Time(const Time& T) {
	detik = T.detik;
	menit = T.menit;
	jam   = T.jam;
}
Time::Time(int _jam, int _menit, int _detik) : jam(_jam), menit(_menit), detik(_detik) {
	if (jam < 0 || 23 < jam || menit < 0 || 59 < menit || detik < 0 || 59 < detik) {
		//error! out of bounds
		jam = menit = detik = 0;
	}
}
Time& Time::operator=(const Time& T) {
	detik = T.detik;
	menit = T.menit;
	jam   = T.jam;
	return *this;
}
Time::~Time() {}
ostream& operator<<(ostream& os, const Time& T) {
	if (T.jam < 10) {
		os << "0";
	}
	os << T.jam << ":";
	if (T.menit < 10) {
		os << "0";
	}
	os << T.menit << ":";
	if (T.detik < 10) {
		os << "0";
	}
	os << T.detik;
}

//I/O
void Time::read() {
	char colon;
	cin >> jam >> colon >> menit >> colon >> detik;
}
void Time::print() {
	cout << *this;
}

//getter setter
int Time::getDetik() {
	return detik;
}
void Time::setDetik(int detik) {
	if (detik < 0 || 59 < detik) {
		//error! out of bounds
	}
	else {
		this->detik = detik;
	}
}
int Time::getMenit() {
	return menit;
}
void Time::setMenit(int menit) {
	if (menit < 0 || 59 < menit) {
		//error! out of bounds
	}
	else {
		this->menit = menit;
	}
}
int Time::getJam() {
	return jam;
}
void Time::setJam(int jam) {
	if (jam < 0 || 23 < jam) {
		//error! out of bounds
	}
	else {
		this->jam = jam;
	}
}

//operator 
bool Time::isEQ(Time T) {
	return detik == T.detik && menit == T.menit && jam == T.jam;
}
bool Time::isLT(Time T) {
	if (jam != T.jam) {
		return jam < T.jam;
	}
	// jam == T.jam
	else if (menit != T.menit) {
		return menit < T.menit;
	}
	// menit == T.menit
	else {
		return detik < T.detik;
	}
}
bool Time::isGT(Time T) {
	return T.isLT(*this);
}
