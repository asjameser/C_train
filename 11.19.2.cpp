#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,c,p;
	double s;
	scanf("%d %d %d",&a,&b,&c);
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	if( a+b>c && a-b<c&&b+c>a){
		printf("能构成三角形\n");
		printf("三角形面积为:%.2lf",s);
	}
	else{
		printf("无法构成三角形！"); 
	}
	
	return 0;
}
