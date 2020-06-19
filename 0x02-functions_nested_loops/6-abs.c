#include "holberton.h"

/**
 * _abs - gives absolute value of num
 *@num: int to abs
 * Return: absolute value
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (num * -1);
	}

	return (num);

}
