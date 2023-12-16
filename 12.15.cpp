#include<stdio.h>
int main()
{
	int n;
	int j=0;
	scanf("%d",&n);
    char c[n];
    while(j<=n)
    {
    	scanf("%c",&c[j]);
    	j++;
	}
    int i=0;
    for(i=0;i<=n;i++)
    {
        c[i]+=4;
        printf("%c",c[i]);
    }
	return 0;
}
