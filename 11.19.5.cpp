#include <stdio.h>

int main(void)
{
	int a,b,c,d,re1,re2;
	double x,y;
	scanf("%d %d %d",&a,&b,&re1);
	scanf("%d %d %d",&c,&d,&re2);
	y=(c*re1-a*re2)/(b*c-a*d);
	x=(re1-b*y)/a;
	printf("X=%.2f y=%.2f",x,y);
	
	
	return 0;
}
