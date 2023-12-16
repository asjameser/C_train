#include <stdio.h>

int main()
{
	int i,n,b,a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		while(n%2==0){
			b=0;
		    n=n/2;
		    printf("%d\n",b);
		}
		while(n%2==1){
			a=1;
		    n=n/2;
		    printf("%d\n",a);
		}
	}
	return 0;
}
