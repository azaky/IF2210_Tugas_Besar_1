#include <iostream>
#include "DateTime.h"
using namespace std;

int main() {
	DateTime DT;
	DT.read();
	cout << "halo! ini dia" << endl;
	DT.print();
	
	return 0;
}
