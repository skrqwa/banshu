//#define CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

 


//main 主函数
//printf是库函数，要调用stdio库
//main函数是程序执行的入口，有且仅有一个
//int返回一个整数
//

//int main()
//{
//	int i = 1;
//	int n = 100;
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 ==1)
//		{
//		    printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	//1-10
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i=1; i <= 10; i++)
//	{
//		ret = 1;
//		for (j=1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//		
//	}
//	printf("%d", ret);
//	return 0;
//}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d\n", a);
	return 0;

}