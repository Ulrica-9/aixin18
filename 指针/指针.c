#include <stdio.h>
#include <string.h>
//���Բ�ͬ״̬��sizeof�����ݳ���
//void text(int ch[])
//{
//	int sz = sizeof(ch) / sizeof(ch[0]);                //ֻ�������׵�ַ--->ָ���ַ (win32:4B****win64:8B)
//	printf("%d\n", sz);
//}
//int main()
//{
//	int ch[10] = { 0 };
//	text(ch);
//	return 0;
//}





//�ַ�ָ��
//int main()
//{
//	/*char ch[] = "abcdef";
//	char* p = ch;*/
//	const char* p = "abcdef";    //abcdefΪ�����ַ��������ܹ����ġ��ڴ�ķǷ�����.
//	
//	                              //���ߴ�ӡ��������abcdef
//	printf("%s\n", p);
//}


////��ϰ��
//int main()
//{
//	char c1[] = "abcdef";
//	char c2[] = "abdcef";
//	const char* p1 = "abcdef";             //�����ַ����������޸� ���Լ���const ����ָ
//	const char* p2 = "abcdef";
//
//
//
//	//ָ��������ͬ��������ŵ��ڴ�ռ���һ��λ�� ��
//	//���������ӡ   haha
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
//	//�������ַ�����   ��������ڴ�ռ䲻ͬ������ ������ȻҲ�Ͳ���ȡ�
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

//ָ������ ���������������ָ�롣
//int main()
//{
//	int* num[] = {0};     //--------------�����д�ŵ�������ָ���ַ
//
//	char* arr[] = { 0 };   
//}


//���´��빩����������



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


//����ָ������ľ����÷�
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* p[] = { arr1,arr2,arr3 };                  //���������ü�ȡ��ַ��������Ĭ�ϴ�ӡ�׵�ַ����
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