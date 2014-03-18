#ifndef DATETIME_H
#define DATETIME_H

#include <iostream>
#include "Date.h"
#include "Time.h"
#include "DateTime.h"
using namespace std;

class DateTime {
public:
	//5 sekawan + ctorparam
	DateTime();
	DateTime(const DateTime&);
	DateTime(Date, Time);
	DateTime& operator=(const DateTime&);
	~DateTime();
	friend ostream& operator<<(ostream&, const DateTime&);
	
	//I/O
	void read();
	void print();
	
	//getter setter
	Date getDate();
	void setDate(Date);
	Time getTime();
	void setTime(Time);
	
	//operator 
	bool isEQ(DateTime);
	bool isLT(DateTime);
	bool isGT(DateTime);
	
private:
	Date D;
	Time T;
};

#endif
