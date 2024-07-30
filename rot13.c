#include "main.h"
/**
 * rot13 - encoded string into rot13
 * @point: the string to be encoded
 * Return: (point)
 */
int rot13(char *point)
{
	int x = 0, y, iteration = 0, warn = 0;

	char letter[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G',
'H', 'I', 'J', 'K', 'L', 'M', 'N',
'O', 'P', 'Q', 'R', 'S', 'T', 'U',
'V', 'W', 'X', 'Y', 'Z', 'a', 'b',
'c', 'd', 'e', 'f', 'g', 'h', 'i',
'j', 'k', 'l', 'm', 'n', 'o', 'p',
'q', 'r', 's', 't', 'u', 'v', 'w',
'x', 'y', 'z'};
	char rot[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T',
'U', 'V', 'W', 'X', 'Y', 'Z', 'A',
'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
'J', 'K', 'L', 'M', 'n', 'o', 'p',
'q', 'r', 's', 't', 'u', 'v', 'w',
'x', 'y', 'z', 'a', 'b', 'c', 'd',
'e', 'f', 'g', 'h', 'i', 'j', 'k',
'l', 'm'};
	if (!point)
	{
		point = "(null)";
	}
	while (point[x])
	{
		for (y = 0; y < 52; y++)
		{
			if (point[x] == letter[y])
			{
				_putchar(rot[y]);
				count++;
				warn = 1;
				break;
			}
		}
		if (!flag)
			_putchar(point[x]);
		warn = 0;
		x++;
	}
	return (count);
}
