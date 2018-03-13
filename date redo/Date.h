#pragma once
#include "basic.h"
class Date
{
public:
	Date(unsigned int D, unsigned int M, unsigned int Y);
	unsigned int Getserial(unsigned int day, unsigned int month, unsigned int year)
	{
		return DMY_to_serial(day, month, year);
	}
	void GetDMY(unsigned int serial, unsigned int& day, unsigned int& month, unsigned int& year)
	{
		serial_to_DMY(M_serial, day, month, year);
	}
	void AddDay(unsigned int D);
	void AddMonths(unsigned int M);
	void AddYear(unsigned int Y);
private:
	unsigned int M_serial;
};

