#include <stdio.h>

int main(void)
{
	int a[32];
	int num, i = 0;

	printf("请输入一个整数，将其转换为二进制：\n");
	scanf("%d", &num);

	while(num){
		a[i] = num % 2;
		num = num / 2;
		i++;
	}

	printf("转为二进制数为：");

	for(i = i-1; i >= 0; i--)
		printf("%d", a[i]);
	printf("\n");

	return 0;
          // �ڶ����ύ
}
