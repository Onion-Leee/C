#define _CRT_SECURE_NO_WARNINGS
//定义一个全局变量
static int g_val = 2020;//如果加入static，作用域就变了，出了这个.c文件就不能被使用了

int Add(int x, int y)
{
	int z = x + y;
	return z;
}