#include <stdio.h>

int main()
{
	int numExchange,numBottles,a;
	scanf("%d %d",&numBottles,&numExchange);
	printf("numBottles=%d,numExchange=%d\n",numBottles,numExchange);
	a=numBottles+numBottles/numExchange+1;
	printf("�����Ժȵ�%dƿˮ\n",a); 
	
	return 0;
}
