#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> //system();执行系统命令-cls-清理屏幕信息
#include<Windows.h>//Sleep();睡眠函数，单位是毫秒
#include<string.h>

#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 6;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了,下标是%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到了.\n");
	}
	return 0;
}
/*
//goto语句
//关机程序
int main()
{
	//关机
	//shutdown -s -t 60
	char input[100] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("你的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n");
	printf("请输入:");
	scanf("%s,input");
	if (0 == strcmp(input,"我是猪"))
	{
		system("shutdown -a");//取消关机
	}
	else
	{
		goto again;
	}
}
*/
//如果引入自己创建的头文件
//#include"test.h"
//如果引用库里面的头文件
//#include<stdio.h>

/*
//编写代码实现，模拟用户登录情景，
//并且只能登录三次。（只允许输入三次密码，
//如果密码正确则提示登录成，如果三次均输入错误，则退出程序
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; ++i)
	{
		printf("请输入密码:");
		scanf("%s", password);

		//判断
		//两个字符串比较不能直接用==，
		//而应该使用strcmp(),stringcompare
		if (0==strcmp(password,"123456"))
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("登录失败\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码输入失败，退出");
	}
	return 0;
 }
 */


 /*
 // 编写代码，演示多个字符从两端移动，向中间汇聚
 int main()
 {
	 char arr[] = "bit";
	 char arr1[] = "welcome to bit!!!!!!!!";
	 char arr2[] = "######################";
	 int len = strlen(arr1);
	 int left = 0;
	 int right = len - 1;

	 while (left <= right)
	 {
		 arr2[left] = arr1[left];
		 arr2[right] = arr1[right];
		 printf("%s\n", arr2);
		 Sleep(1000);//睡眠函数，单位是毫秒
		 system("cls");//执行系统命令-cls-清理屏幕信息
		 left++;
		 right--;
	 }
	 printf("%s\n", arr2);
	 return 0;
 }
 */

 /*
 //在一个有序数组中查找具体的某个数字n。
 //编写int binsearch(int x, int v[], int n);
 //功能：在v[0]<= v[1] <= v[2] <= …. <= v[n - 1]的数组中查找x
 //方法二折半查找/二分查找
 #include<stdio.h>
 int main()
 {
	 int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	 int k = 17;
	 int sz = sizeof(arr) / sizeof(arr[0]);
	 int left = 0;
	 int right = sz - 1;
	 while (left <= right)
	 {
		 int mid = (left + right) / 2;
		 if (arr[mid] < k)
		 {
			 left = mid + 1;
		 }
		 else if (arr[mid] > k)
		 {
			 right = mid - 1;
		 }
		 else
		 {
			 printf("找到了,下标是:%d\n", mid);
			 break;
		 }
	 }
	 if (left > right)
	 {
		 printf("找不到了.\n");
	 }
	 return 0;
 }
 */
 //方法一
   /*
 int main()
 {
	 int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	 int k = 7;
	 int sz = sizeof(arr) / sizeof(arr[0]);
	 int i = 0;
	 for (i = 0; i < sz; i++)
	 {
		 if (arr[i] == k)
		 {
			 printf("找到了,下标是:%d\n", i);
			 break;
		 }
	 }
	 if (i == sz)
	 {
		 printf("找不到了\n");
	 }
	 return 0;
 }*/