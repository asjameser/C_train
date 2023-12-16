#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	while(n/7==0){
		printf("false");
	}
	if(n/2/3/5==0){
		printf("true\n");
	}
	else if(n==1){
	printf("true\n");
	}
	
	
	return 0;
}
