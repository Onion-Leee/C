//#pragma once  这句话的效果和下面的三句话效果一样
 /*#ifndef _MIN_H_
#define _MIN_H_

#include "Max.h"



int Min(int a, int b)
{
	return a > b ? b : a;
}
void compare(int a, int b)
{
	int min_value = Min(a, b);
	int max_value = Max(a, b);
}*/

//#endif /*_MIN_H_*/
//#pragma once 
//#include "Max.h"
 /*
int Min(int a, int b)
{
	return a > b ? b : a;
}
void compare(int a, int b)
{
	int min_value = Min(a, b);
	int max_value = Max(a, b);
}*/

#pragma once 
int Min(int a, int b);
void compare(int a, int b);