#include<stdio.h>
//#include<stdbool.h>
//�ж�һ�����ǲ�������

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
      
	   printf("������һ������:");
	   scanf("%d",&num);
	   
	   flag = Sushu(num);
	   if(flag)
	   {
	   	   printf("%d������\n",num);
	   }
		   else
		   {
		   printf("%d��������\n",num);
		   }
	}



}

