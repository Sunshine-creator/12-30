#pragma warning(disable : 4996)
#include<stdio.h>
#include<CoreWindow.h>
#include<string.h>
#if 0
int isprime(int x)
{
	int i = 1;
	for (i = 1; i <= sqrt(x); i += 2)
	{
		if (x%i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 1;
	for (; i <= 100; i++)
	{

		if (isprime(i))
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}
	system("pause");
	return 0;
}
int main()
{
	char arr[8];
	memset(arr, '0', sizeof(arr));
	system("pause");
	return 0;
}
#endif
int main()
{
	char arry[20] = "hello";
	int ret = strlen(strcat(arry, "bit"));
	printf("%d\n", ret);
	system("pause");
	return 0;
}