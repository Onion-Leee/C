#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
/*
typedef struct Test
{

	int b;   //4
	char d;  //1+3
	double c;//8 


}Test;
void main()
{
	Test t;
	printf("%d\n", sizeof(t));
}
*/


/*
void main()
{
	int n = 0;
	printf("input n:>");
	scanf("%d", &n);
	int* ar = (int)malloc(sizeof(int) * n);
	for (int i = 1; i <= n; ++i)
	{
		ar[i - 1] = i;
		for (int i = 0; i < n; ++i)
		{
			printf("%d ", ar[i]);
		}
		printf("\n");
	}
}

typedef union IpAddress
{
	struct
	{
		unsigned char ip1;
		unsigned char ip2;
		unsigned char ip3;
		unsigned char ip4;
	};
	unsigned  long ip;
}IpAddress;
void main()
{
	unsigned ip = 123456789;
	IpAddress MyIp;
	MyIp.ip = ip;
	printf("ip = %d.%d.%d.%d\n", MyIp.ip1, MyIp.ip2, MyIp.ip3, MyIp.ip4);
}

union Un1
{
	char c[5];  //5
	int i;      //4
};
union Un2
{
	short c[7];  //14
	int i;       //4
};
void main()
{
	//��������Ľ����ʲô��
	printf("%d\n", sizeof(union Un1));  //8
	printf("%d\n", sizeof(union Un2));  //16
}

bool Check()
{
	int i = 0x00000001;
	return (i & 0x01 == 1);
}
bool Check1()
{
	union
	{
		char ch;
		int i;
	}un;
	un.i = 1;
	return (un.ch == 1);
}
void main()
{
	bool flag = Check1();
	if (flag)
		printf("This is Little\n");
	else
		printf("This is Big\n");
}

union Un
{
	int i; //4
	char c;//1
};
void main()
{
	union Un un;
	// ��������Ľ����һ������
	printf("0x%p\n", &(un.i));
	printf("0x%p\n", &(un.c));  //���ʵ���ͬһ���ռ�
	//��������Ľ����ʲô��
	un.i = 0x11223344;
	//un.c = 0x55;
	printf("%x\n", un.i);
}

//ö��
typedef enum Test
{
	ADD,//0
	SUB,//1
	MUL,
	DIV,
	MOD
}Test;
void main()
{
	printf("Test size = %d\n",sizeof(Test));   //4(int)
	printf("ADD = %d\n", ADD);
	printf("SUB = %d\n", SUB);
	printf("MUL = %d\n", MUL);
	printf("DIV = %d\n", DIV);
	printf("MOD = %d\n", MOD);
}

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
}S;
void main()
{
	printf("%d\n", sizeof(S));
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
}

struct A
{
	int _a : 2;   //4  000000000000000     0000000000   00000   00
	int _b : 5;
	int _c : 10;
	int _d : 30;
};
void main()
{
	printf("%d\n", sizeof(struct A));
}

//λ�����������������
//1�����ܿ��ֽڴ洢
//2�����ܹ������ʹ洢

struct Test
{
	char a : 1;  // 1 + 3
	int  b : 1;   // 4

}Test;
void main()
{

	printf("%d", sizeof(Test));
}


struct Test
{
	char a : 2;   //λ��   //λ��
	char b : 2;
	char c : 5;

}Test;
void main()
{

	printf("%d", sizeof(Test));
}

//�ĸ�����
//Ĭ�������Ĭ�ϵĶ���ֵ  8�ֽ�
//1.��������������һ������ֵ
//2.�Զ���������һ������ֵ  =  �ڲ���Ա���͵����ֵ
//3.�����ָ������ֵ��#pragma pack(n)   n == 2���ݴη�    n���Ե���2 4 8 16 ......
//4.�������Ч����ֵ�������ָ������ֵ���������Ͷ���ֵ�ý�Сֵ



typedef struct Test
{
	double c;//8
	int b;   //4
	char d;  //1 + 3

}Test;
void main()
{
	Test t;
	printf("Test size = %d", sizeof(Test));
}

typedef struct Test
{

	int b;   //4
	char d;  //1
	double c;//8 + 3


}Test;
void main()
{
	Test t;
	printf("Test size = %d", sizeof(Test));
}


struct S1
{
	char c1;
	int i;
	char c2;
};

typedef struct Test
{
	short a; //2 + 6
	struct
	{
		double c[10];//80
		int b;   //4
		char d;  //1 + 3
	};//88
	int e;    //4 + 4
}Test;
void main()
{
	Test t;
	printf("Test size = %d", sizeof(Test));
}
*/
#pragma pack(2)
typedef struct Test
{
	short a; //2
	struct
	{
		int b;   //4
		double c;//8
		char d;  //1 + 1
	};//14
	int e;    //4
}Test;
void main()
{
	Test t;
	printf("Test size = %d", sizeof(Test));
}
/*
typedef struct Test
{
	short a; //2 + 6
	struct
	{
		int b;   //4 + 4
		double c;//8
		char d;  //1 + 7
	};
	int e;    //4 + 4
}Test;
void main()
{
	Test t;
	printf("Test size = %d", sizeof(Test));
}
*/
/*
#pragma pack(4)
typedef struct Test //8
{
	char a;     //1 + 3
	double b;   //8
	int c;      //4
}Test;

void main()
{
	Test t;
	printf("Test size = %d", sizeof(Test));

}
*/
/*
typedef struct Test //8
{
	char a;     //1 + 3
	int c;      //4
	double b;   //8
}Test;
void main()
{
	Test t;
	printf("Test size = %d", sizeof(Test));

}
*/
/*
typedef struct Test //8
{
	char a;     //1 + 7
	double b;   //8 + 0
	int c;      //4 + 4
}Test;
void main()
{
	Test t;
	printf("Test size = %d", sizeof(Test));

}
*/
/*
int main()
{
	char str[] = "- This, a sample string.";
	char* pch;
	pch = strtok(str, " ,.-");
	while (pch != NULL)
	{
		printf("%s\n", pch);
		pch = strtok(NULL, " ,.-");//���յ�Ŀ�ľ��Ǵ����λ�ÿ�ʼ�������Ǵ���ʼλ�ÿ�ʼ
	}
	return 0;
}
*/