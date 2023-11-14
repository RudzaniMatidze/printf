#include "main.h"
/**
* print_binry - convert to binary
* @b: decimal number
* Return: number of chars to be printed
*/
int print_binry(va_list b)
{
	unsigned int len, pwr_ten, a, dgt, m, sum;
	int cnt = 0;

	m = va_arg(b, unsigned int);
	if (m != 0)
	{
		sum = m;
		len = 0;
		while (sum != 0)
		{
			sum /= 2;
			len++;
		}
		pwr_ten = 1;
		for (a = 1; a <= len - 1; a++)
			pwr_ten *= 2;
		for (a = 1; a <= len; a++)
		{
			dgt = m / pwr_ten;
			_ptchr(dgt + '0');
			cnt++;
			m -= dgt * pwr_ten;
			pwr_ten /= 2;
		}
	}
	else
	{
		_ptchr('0');
		return (1);
	}
	return (cnt);
}
