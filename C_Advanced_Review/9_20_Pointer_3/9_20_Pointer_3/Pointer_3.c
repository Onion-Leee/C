//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////void qsort(void* base, //base中存放的是待排序数据中第一个对象的地址
////			size_t num, //排序数据元素的个数
////			size_t size,//排序数据中一个元素的大小，单位是字节
////			int (*cmp)(const void* e1, const void* e2)//是用来比较待排序数据中的2个元素的函数
////			);
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//
//	}
//	printf("\n");
//}
//
//int *cmp_arr(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
////int main()
////{
////	int arr[] = { 7,6,5,4,8,9,10,1,2,3 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	printf("待排序列为：");
////	Print(arr, sz);
////	qsort(arr, sz, sizeof(arr[0]), cmp_arr);
////	Print(arr, sz);
////	return 0;
////}
//
////结构体中的信息进行排序
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int qsort_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name , ((struct stu*)e2)->name);
//}
//
//int qsort_by_age(const
//	void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//int main()
//{
//	struct stu s[3] = { {"wushangle",26},{"liyangqing",23},{"hujiarui",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//通过姓名来进行排序
//	//qsort(s, sz, sizeof(s[0]), qsort_by_name);
//
//	//通过年龄来进行排序
//	qsort(s, sz, sizeof(s[0]), qsort_by_age);
//	return 0;
//}