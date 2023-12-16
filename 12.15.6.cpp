#include <stdio.h>
 
void transfer(int x)
{
        char    buf[32];
        int     i=0;
        while( (x/2)!=0 )
        {
                buf[i] = x%2;
                x = x/2;
                i++;
        }
 
        buf[i] = x%2;
        for(int j=i; j>=0 ;j--)
        {
                printf("%d",buf[j]);
        }
 
        printf("\n");
}
int main(void)
{
        int x;
 
        while(1)
        {
                scanf("%d",&x);
                if(x<0)
                        break;
              
                printf("%d",x);
 
                transfer(x);
 
                printf("\n");
    }
        return 0;
}
