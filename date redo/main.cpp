using namespace std;
#include "Date.h"
#include <iostream>
int main() {
	unsigned int D, M, Y;
	D = 1;
	M = 1;
	Y = 2000;

	Date date1(D, M, Y);
	date1.AddDay(10);
	date1.AddMonths(14);
	date1.AddYear(2);

	unsigned int d, m, y;
	date1.GetDMY(date1.Getserial(D,M,Y), d, m, y);
	cout << d << "/"<< m <<"/" << y;

	system("PAUSE");
	return 0;
	



}

