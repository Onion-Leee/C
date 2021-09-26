#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>




/*
enum ENUM_A
{
	X1,//0
	Y1,//1
	Z1 = 255,
	A1,//256
	B1,//257
};
void main()
{
	enum ENUM_A enumA = Y1;
	enum ENUM_A enumB = B1;
	printf("%d %d\n", enumA, enumB);//1  257
}

int main()
{
	union
	{
		short k;   //2
		char i[2]; //2
	}*s, a; //2
	s = &a;
	s->i[0] = 0x39;
	s->i[1] = 0x38;
	printf(" % x\n", a.k);
	return 0;
}


union Un
{
	short s[7];  //14
	int n;       //4
};//18
int main()
{
	printf("%d\n", sizeof(union Un));
	return 0;
}

int main()
{
	unsigned char puc[4];   //4
	struct tagPIM
	{
		unsigned char ucPim1;  //1
		unsigned char ucData0 : 1; // 0000 0000
		unsigned char ucData1 : 2;
		unsigned char ucData2 : 3;
	}*pstPimData;//2 + 2
	pstPimData = (struct tagPIM*)puc;
	memset(puc, 0, 4);
	pstPimData->ucPim1 = 2;//010
	pstPimData->ucData0 = 3;//011  只剩下1
	pstPimData->ucData1 = 4;//100  只剩下00
	pstPimData->ucData2 = 5;//101  101
	//0010 1001
	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
	return 0;
}


#define MAX_SIZE A+B
struct _Record_Struct
{
	unsigned char Env_Alarm_ID : 4;  //0000 0000
	unsigned char Para1 : 2;
	unsigned char state;
	unsigned char avail : 1;
}*Env_Alarm_Record;
void main()
{
	struct _Record_Struct* pointer = (struct _Record_Struct*)malloc
	(sizeof(struct _Record_Struct) * MAX_SIZE);
}

#pragma pack(4)/*编译选项，表示4字节对齐 平台：VS2013。语言：C语言
int main(int argc, char* argv[])
{
	struct tagTest1
	{
		short a; //2
		char d;  //1 + 1
		long b;  //4
		long c;  //4
	};//12
	struct tagTest2
	{
		long b; //4
		short c;//2
		char d; //1 + 1
		long a; //4
	};//12
	struct tagTest3
	{
		short c; //2 + 2
		long b;  //4
		char d;  //1 + 3
		long a;  //4
	};//16
	struct tagTest1 stT1;
	struct tagTest2 stT2;
	struct tagTest3 stT3;

	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
	return 0;
}
#pragma pack()

struct A
{
	int a;  //4
	short b;//2 + 2
	int c;  //4
	char d; //1 + 3
};//16
struct B
{
	int a;  //4
	short b;//2
	char c; //1 + 1
	int d;  //4
};//12


typedef struct
{
	int a;   //4
	char b;  //1 + 1
	short c; //2
	short d; //2 + 2
}AA_t;
*/