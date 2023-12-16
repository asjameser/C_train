#include <stdio.h>

int main(void)
{
	int a,b;
	scanf("%d &d",&a,&b);
	if((a==2,b==4)||(a==4,b==5)||(a==5,b==1)||(a==1,b==3)||(a==3,b==2)||(b==2,a==4)||(b==4,a==5)||(b==5,a==1)||(b==1,a==3)||(b==3,a==2)){
		printf("%d sheng %d\n",a,b);
	}else if((a==1,b==2)||(a==2,b==5)||(a==5,b==3)||(a==3,b==4)||(a==4,b==1)||(b==1,a==2)||(b==2,a==5)||(b==5,a==3)||(b==3,a==4)||(b==4,a==1)){
		printf("%d ke %d\n",a,b);
	}else {
		
	}
	
	return 0;
}
