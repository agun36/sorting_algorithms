#include "sort.h"
#include <stdio.h>

/**
  * swap - contains two pointers of integer xp and yp
  *
  *@xp: return pointer integer
  *@yp: return second pointer integer
  * Return: void
  */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
