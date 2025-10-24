#include<stdio.h>
int main()
{
	int m,n,t;
	printf("input two numbers: (m>n)");
	scanf("%d %d",&m,&n);
	if(n==0){
		printf("ERROR");
	}else if(m%n==0){
		printf("%d is zui da gong yeu shu",n);
	}else{
		do{
			t=m%n;
			m=n;
			n=t;
		}while(m%n!=0); 
		printf("%d is zui da gong yeu shu",n);
	}
	
	
}
