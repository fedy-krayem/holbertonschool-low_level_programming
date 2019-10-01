#include "holberton.h"
/**
* _atoi - check the code for Holberton School students.
*@s: character
* Return: Always 0.
*/
int _atoi(char *s)
{
	int l;
	int i, m;
	int ok;
	int c;

	c = 0;
	i = 0;
	m = 1;
	l = 0;
	ok = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	while (i < l && ok == 0)
	{
		if (s[i] == '-')
		{
			m *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			c = c * 10 + (s[i] - 48);
				if (s[i + 1] >= '0' && s[i + 1] <= '9')
					ok = 0;
				else
					ok = 1;
		}
			i++;
	}
	c = c * m;
return (c);
}
