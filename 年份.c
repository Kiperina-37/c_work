#include<stdio.h>
int main()
{	
	int year;
	printf("input year:\n");
	scanf("%d",&year);
	if((year%100==0&&year%2==0)||(year%400==0)){
		printf("1");
	}else{
		printf("0");
	}
	
	
	
}
