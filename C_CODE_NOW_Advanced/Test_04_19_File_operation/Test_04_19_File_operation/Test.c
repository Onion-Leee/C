#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define N 4
//#define Y(n) ((N+2)*n) 
//void main()
//{
//	int z = 2 * (N + Y(5 + 1));
//	printf("%d", z);
//}

//#include<stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	int c; // 注意：int，非char，要求处理EOF
//	FILE* fp = fopen("myfile.txt", "r");
//	if (!fp) {
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//	{
//		putchar(c);
//	}
//	//判断是什么原因结束的
//	if (ferror(fp))
//		puts("I/O error when reading");
//	else if (feof(fp))
//		puts("End of file reached successfully");
//	fclose(fp);
//}
/*
#include<stdio.h>
int main()
{
	FILE* pFile;
	pFile = fopen("myfile.txt", "w");
	if (pFile != NULL)
	{
		fputs("fopen example", pFile);
		fclose(pFile);
	}
	return 0;
}
*/

//21.写一个宏，可以将一个整数字的奇数位和偶数位交换。
//#include<stdio.h>
//#include<stdlib.h>
//#define EXCHANGE(n) (((n)&0x55555555)<<1)|(((n)&0xaaaaaaaa)>>1)
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d", &n);
//	printf("Before Exchange:%d\n", n);
//	m = EXCHANGE(n);
//	printf("After Exchange:%d\n", m);
//	return 0;
//}

/*
//22.写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
#include<stdio.h>
#define offsetof(StructType, MemberName) (size_t)&(((StructType *)0)->MemberName)
typedef struct student {
	int a;
	char ch[2];
	double d;
}student_t;

int main(int argc, char const* argv[])
{
	student_t stu = { 0 };
	int offset;
	student_t d;
	offset = GET_OFFSET(stu, d);
	printf("%d\n", offset);
	return 0;
}
*/
#include<stdio.h>
#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
void main()
{
	int x = 5;
	int y = 8;
	int z = MAX(x++, y++);
	printf("x=%d y=%d z=%d\n", x, y, z);
}