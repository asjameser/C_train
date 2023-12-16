#include <stdio.h>

int main()
{
	int n,i,max,j;
	scanf("%d\n",&n);
	char a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(j=1;j<=n-1;j++){
		if(a[j]>a[j++]){
			max=a[j];
		}
		else{
		max=a[j++];
		}
	}
	printf("最大值为%d",max*max);
	return 0;
}
