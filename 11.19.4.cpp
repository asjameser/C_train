#include <stdio.h>

int main(void)
{
	int i,j,k;
	int n;
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
		if(i==1){
			printf("*\n");
		}
		else if(i>1&&i<n){
			for (k=1;k<=i;k++) {
				if(k==1){
					printf("*");
				}
				else if(k==i){
					printf("*\n");
				}
				else {
					printf(" ");
				}
		}
		}
		else{
			for (j=1;j<=n;j++) {
				printf("*");
			}
		}
	}
	
	return 0;
}
