#include <stdio.h>
int main() {
   int a,b,c;
   printf("put three number:");
   scanf("%d %d %d",&a,&b,&c);
   if( (a+b)>c&&(a-b)<c){
   	if( a == b&&b == c){
   		printf("dengbiansanjiaoxing");
	   }
	   else if(a == b||b == c||a==c){
	   	printf("dengyao");
	   }
	   else {
	   	printf("putong");
	   }
   }
	else{
		printf("not a sanjiaoxing");
	}
	
	return 0; 
}
