#include<stdio.h>

void  main()
{
	//start   end 
	// 1       100   ´Óstart¼Óµ½end

	int start,end;
	int sum = 0;
	printf("input start and end: ");
	scanf_s("%d %d", &start, &end);
	/*while (start <= end)
	{
		sum = sum + start;
			start++;
	}*/
	do
	{
		sum += start;
		start++;
	} while (start <= end);
	
	printf("sum = %d\n", sum);

}






/*
int main()
{
	int ar[] = { 12,25,5,56,6,45,8,9,65,100,200 };
	int n = sizeof(ar) / sizeof(int);
	printf("%d", n);
	return 0;
}
*/