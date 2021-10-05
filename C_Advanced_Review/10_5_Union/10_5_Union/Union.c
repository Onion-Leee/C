#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

union Un
{
	char c;
	int i;
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}