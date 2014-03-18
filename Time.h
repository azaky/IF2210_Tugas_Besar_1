#ifndef TIME_H
#define TIME_H

#include <iostream>
using namespace std;

class Time {
public:
	//5 sekawan + ctorparam
	Time();
	Time(int,int,int);
	Time(const Time&);
	Time& operator=(const Time&);
	~Time();
	friend ostream& operator<<(ostream&, const Time&);
	
	//I/O
	void read();
	void print();
	
	//getter setter
	int getJam();
	void setJam(int);
	int getMenit();
	void setMenit(int);
	int getDetik();
	void setDetik(int);
	
	//operator 
	bool isEQ(Time);
	bool isLT(Time);
	bool isGT(Time);
	
private:
	int jam;
	int menit;
	int detik;
};

#endif
