#include"Date.h"
#include"basic.h"


Date::Date(unsigned int D, unsigned int M, unsigned int Y)
{
	M_serial = DMY_to_serial(D, M, Y);
}

void Date::AddDay(unsigned int D)
{
	M_serial = M_serial + D;
	return;
}

void Date::AddMonths(unsigned int M)
{
	unsigned int d, m, y;
	serial_to_DMY(M_serial, d, m, y);
	m = m + M;
	if ( m > 12)
	{
		int Whole_Years = int(m / 12);
		m = m - 12 * Whole_Years;
		y = y + Whole_Years;
	}
	M_serial = DMY_to_serial(d, m, y);
	return;
}

void Date::AddYear(unsigned int Y)
{
	unsigned d, m, y;
	serial_to_DMY(M_serial, d, m, y);
	y = y + Y;
	M_serial = DMY_to_serial(d, m, y);
	return;
}