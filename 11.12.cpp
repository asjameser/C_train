#include <stdio.h>

int main(void)
{
	int hour1,hour2;
	int min1,min2;
	scanf("%d %d",&hour1,&min1);
	scanf("%d %d",&hour2,&min2);
	int t1 = hour1 - hour2;
	int t2 = min1 - min2;
	if ( t2 < 0 ){
		t2 += 60;
		t1--;
	}
	printf("时间为%d时%d分",t1,t2);
	
	
	return 0;
}
