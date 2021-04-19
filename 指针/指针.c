#include <stdio.h>
#include <string.h>
//测试不同状态下sizeof的数据长度
//void text(int ch[])
//{
//	int sz = sizeof(ch) / sizeof(ch[0]);                //只传递了首地址--->指针地址 (win32:4B****win64:8B)
//	printf("%d\n", sz);
//}
//int main()
//{
//	int ch[10] = { 0 };
//	text(ch);
//	return 0;
//}





//字符指针
//int main()
//{
//	/*char ch[] = "abcdef";
//	char* p = ch;*/
//	const char* p = "abcdef";    //abcdef为常量字符串，不能够更改。内存的非法访问.
//	
//	                              //二者打印出来都是abcdef
//	printf("%s\n", p);
//}


////练习题
//int main()
//{
//	char c1[] = "abcdef";
//	char c2[] = "abdcef";
//	const char* p1 = "abcdef";             //常量字符串本身不可修改 所以加上const 来特指
//	const char* p2 = "abcdef";
//
//
//
//	//指针存放两相同常量，存放的内存空间在一个位置 ：
//	//所以这里打印   haha
//	/*if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;*/
//
//
//	//这里是字符数组   存放两个内存空间不同，所以 他们自然也就不相等。
//	if (c1 == c2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//

//}

//指针数组 ：数组中用来存放指针。
//int main()
//{
//	int* num[] = {0};     //--------------数组中存放的是整形指针地址
//
//	char* arr[] = { 0 };   
//}


//以下代码供新手玩家理解



//int main()
//{
//	int i;
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* p[] = { &a,&b,&c,&d };
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", *p[i]);
//	}
//
//	return 0;
//}


//解释指针数组的具体用法
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* p[] = { arr1,arr2,arr3 };                  //数组名不用加取地址符，并且默认打印首地址内容
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d  ", *p[i]+j);
		}
		printf("\n");
		
	}

	return 0;
}