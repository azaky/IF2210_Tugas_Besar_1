#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

/**
 * Kelas yang menampung tanggal.
 */
class Date {
public:
	//5 sekawan + ctorparam
	/**
	 * Konstruktor yang menghasilkan tanggal 01-01-01.
	 */
	Date();
	/**
	 * Konstruktor yang menghasilkan tanggal sesuai dengan
	 * ketiga parameternya.
	 */
	Date(int tanggal, int bulan, int tahun);
	/**
	 * Copy Constructor.
	 */
	Date(const Date&);
	/**
	 * Assignment Operator.
	 */
	Date& operator=(const Date&);
	/**
	 * Destruktor.
	 */
	~Date();
	/**
	 * Mengeluarkan Date ke stream os dalam format DD-MM-YYYY.
	 * Tidak ada newline yang dihasilkan setelah YYYY.
	 */
	friend ostream& operator<<(ostream&, const Date&);
	
	//I/O
	/**
	 * Membaca Date dari stream cin; harus dalam format D-M-Y.
	 */
	void read();
	/**
	 * Mengeluarkan Date ke stream cout dalam format DD-MM-YYYY.
	 * Tidak ada newline yang dihasilkan setelah YYYY.
	 */
	void print();
	
	//getter setter
	/**
	 * Mengembalikan tanggal.
	 */
	int getTanggal();
	/**
	 * Mengubah tanggal. Jika tanggal baru yang terbentuk tidak
	 * valid, maka tidak ada perubahan.
	 */
	void setTanggal(int);
	/**
	 * Mengembalikan bulan.
	 */
	int getBulan();
	/**
	 * Mengubah bulan. Jika tanggal baru yang terbentuk tidak
	 * valid, maka tidak ada perubahan.
	 */
	void setBulan(int);
	/**
	 * Mengembalikan tahun.
	 */
	int getTahun();
	/**
	 * Mengubah tahun. Jika tanggal baru yang terbentuk tidak
	 * valid (e.g. dari 29-02-2012 menjadi 29-02-2013), maka
	 * tidak ada perubahan.
	 */
	void setTahun(int);
	
	//operator
	/**
	 * Mengembalikan true jika `*this` sama dengan `D`.
	 */
	bool isEQ(Date D);
	/**
	 * Mengembalikan true jika `*this` kurang dari `D`,
	 * atau dengan kata lain `*this` adalah sebelum `D`
	 */
	bool isLT(Date);
	/**
	 * Mengembalikan true jika `*this` lebih dari `D`,
	 * atau dengan kata lain `*this` adalah sesudah `D`
	 */
	bool isGT(Date);
	
	//other
	/**
	 * Memeriksa apakah tanggal yang dibentuk oleh ketiga
	 * parameter adalah tanggal yang valid
	 */
	static bool isValid(int tanggal, int bulan, int tahun);
	
private:
	int tanggal;
	int bulan;
	int tahun;
	static int NDay[12];
};

#endif
