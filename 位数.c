#include<stdio.h>
int main()
{
	int a,b,i,c;
	printf("input number:\n");
	scanf("%d",&a);
	b=a;
	c=a;
	if(a>0){
		while(c>0){
			i++;
			c/=10;
		}
		printf("%d is %d wei",b,i);
	}else if(a==0){
		printf("0 is 1 wei");
	}else{
		i=0;
		while(a<0){
			i++;
			a/=10;
		}
		printf("%d is %d wei",b,i);
	}
	
}
