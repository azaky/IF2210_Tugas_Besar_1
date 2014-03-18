#ifndef _EVENT_H
#define _EVENT_H

#include "DateTime.h"
class Event {
public:
	Event();
	Event (const Event& e);
	Event& operator=(const Event& e);
	~Event();
	void read();
	void print();
	DateTime getDateTime();
	char getKode();
	int getI();
	void setDateTime(DateTime);
	void setKode(char);
	void setI(int);
private:
	DateTime T;
	char kode;
	int i;
};

#endif
