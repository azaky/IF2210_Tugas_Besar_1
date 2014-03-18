#include <iostream>
#include "Date.h"
using namespace std;

//5 sekawan
Date::Date() {
	tanggal = bulan = tahun = 1;
}
Date::Date(const Date& D) {
	tanggal = D.tanggal;
	bulan   = D.bulan;
	tahun   = D.tahun;
}
Date::Date(int _tanggal, int _bulan, int _tahun) : tanggal(_tanggal), bulan(_bulan), tahun(_tahun) {
	if (!isValid(tanggal, bulan, tahun)) {
		//error! out of bounds
		tanggal = bulan = tahun = 1;
	}
}
Date& Date::operator=(const Date& D) {
	tanggal = D.tanggal;
	bulan   = D.bulan;
	tahun   = D.tahun;
	return *this;
}
Date::~Date() {}
ostream& operator<<(ostream& os, const Date& D) {
	if (D.tanggal < 10) {
		os << "0";
	}
	os << D.tanggal << "-";
	if (D.bulan < 10) {
		os << "0";
	}
	os << D.bulan << "-";
	os << D.tahun;
}

//I/O
void Date::read() {
	char dash;
	cin >> tanggal >> dash >> bulan >> dash >> tahun;
}
void Date::print() {
	cout << *this;
}

//getter setter
int Date::getTanggal() {
	return tanggal;
}
void Date::setTanggal(int tanggal) {
	if (!isValid(tanggal, bulan, tahun)) {
		//error! out of bounds
	}
	else {
		this->tanggal = tanggal;
	}
}
int Date::getBulan() {
	return bulan;
}
void Date::setBulan(int bulan) {
	if (!isValid(tanggal, bulan, tahun)) {
		//error! out of bounds
	}
	else {
		this->bulan = bulan;
	}
}
int Date::getTahun() {
	return tahun;
}
void Date::setTahun(int tahun) {
	this->tahun = tahun;
}

//operator 
bool Date::isEQ(Date D) {
	return tanggal == D.tanggal && bulan == D.bulan && tahun == D.tahun;
}
bool Date::isLT(Date D) {
	if (tahun != D.tahun) {
		return tahun < D.tahun;
	}
	// tahun == D.tahun
	else if (bulan != D.bulan) {
		return bulan < D.bulan;
	}
	// bulan == D.bulan
	else {
		return tanggal < D.tanggal;
	}
}
bool Date::isGT(Date D) {
	return D.isLT(*this);
}

//other
bool Date::isValid(int tanggal, int bulan, int tahun) {
	if (bulan < 1 || bulan > 12) {
		return false;
	}
	else if (bulan != 2) {
		return (1 <= tanggal && tanggal <= NDay[bulan + 1]);
	}
	else if (tahun % 4 == 0 && tahun % 100 != 0 || tahun % 400 == 0) {
		return (1 <= tanggal && tanggal <= 29);
	}
	else {
		return (1 <= tanggal && tanggal <= 28);
	}
}

int Date::NDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
