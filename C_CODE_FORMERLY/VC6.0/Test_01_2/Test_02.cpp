#include<stdio.h>

/*int main()
{
	int a = 0;
	//printf("%d %d %d %d\n",a++,++a,a++,++a);
	int v = (a++)+(a++);
	printf("v = %d\n",v);//0
	printf("a = %d\n",a);//2

	return 0;
}
*/


/*
int main()
{
	int a = 0;
	
	int v = (++a)+(a++);
	printf("v = %d\n",v);//2
	printf("a = %d\n",a);//2

	return 0;
}
*/

/*
int main()
{
	int a = 0;
	
	int v = (a++)+(++a);
	printf("v = %d\n",v);//2
	printf("a = %d\n",a);//2
    return 0;
}
*/

/*
  int main()
{
	int a = 0;
	
	int v = (a++)+(a++)+(++a);
	printf("v = %d\n",v);//1
	printf("a = %d\n",a);//3

	return 0;
} 
*/

/*
int main()
{
	int a = 0;
	
	int v = (a++)+(++a)+(a++);
	printf("v = %d\n",v);//3
	printf("a = %d\n",a);//3

	return 0;
}
*/

int main()
{
	int a = 0;
	
	int v = (++a)+(a++)+(a++);
	printf("v = %d\n",v);//3
	printf("a = %d\n",a);//3

	return 0;
} 
 
