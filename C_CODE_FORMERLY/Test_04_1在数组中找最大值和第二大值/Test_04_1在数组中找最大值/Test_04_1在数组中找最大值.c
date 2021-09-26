#include<stdio.h>

int Max(int ar[], int n)
{
	/* int i;*/
	int max = ar[0];
	/*if (ar[0] < ar[1])
		max = ar[1];
	else
		max = ar[0];*/
	for (int i = 1; i < n; ++i)
	{
		if (max < ar[i])
			max = ar[i];
		/* else
			 ++i;*/
	}
	return max;
}

int Secmax(int ar[], int n)
{
	int max, secmax;
	if (ar[0] > ar[1])
	{
		max = ar[0];
		secmax = ar[1];
	}
	else
	{
		max = ar[1];
		secmax = ar[0];
	}
	for (int i = 2; i < n; ++i)
	{
		if (ar[i] > max)
		{
			secmax = max;
			max = ar[i];
		}
		else if (ar[i] > secmax)
		{
			secmax = ar[i];
		}
	}
	return secmax;
}
void main()
{
	int ar[] = { 1122,4203,5,6,810,9,56,258,468 };
	int n = sizeof(ar) / sizeof(int);
	int max, secmax;
	max = Max(ar, n);
	secmax = Secmax(ar, n);
	printf("max value = %d\n", max);
	printf("secmax value = %d\n", secmax);
}