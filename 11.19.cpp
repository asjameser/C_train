#include <stdio.h>

int main(void)
{
	int N;
	int cow = 0.9;
	int pig = 15;
	int  chicken = 20;
	printf("请输入你的钱(元):");
	scanf("%d",&N);
	printf("你可以买%d猪肉\n",N/15);
	printf("你可以买%d鸡肉\n",N/20);
	printf("你可以买%d头牛\n",N*9/10);
	
	return 0;
}
