#include<stdio.h>
//#include<stdbool.h>
//判断一个数是不是素数

bool Sushu(int num)
{
	int i;
	for (i = 2;i< num;++i)
									{
										if(num%i==0)
											return false;
										
									}
									return true;
}
    
void main()
{
	int num;
	bool flag;
	int IsSushu;
	while(1)
	{
      
	   printf("请输入一个数字:");
	   scanf("%d",&num);
	   
	   flag = Sushu(num);
	   if(flag)
	   {
	   	   printf("%d是素数\n",num);
	   }
		   else
		   {
		   printf("%d不是素数\n",num);
		   }
	}



}

