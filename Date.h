#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {
public:
	//5 sekawan + ctorparam
	Date();
	Date(int,int,int);
	Date(const Date&);
	Date& operator=(const Date&);
	~Date();
	friend ostream& operator<<(ostream&, const Date&);
	
	//I/O
	void read();
	void print();
	
	//getter setter
	int getTanggal();
	void setTanggal(int);
	int getBulan();
	void setBulan(int);
	int getTahun();
	void setTahun(int);
	
	//operator 
	bool isEQ(Date);
	bool isLT(Date);
	bool isGT(Date);
	
	//other
	static bool isValid(int,int,int);
	
private:
	int tanggal;
	int bulan;
	int tahun;
	static int NDay[12];
};

#endif
