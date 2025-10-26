#include<stdio.h>
int Fibonacci_sequence(int t)
{
	int sum=0,i=1,a=1,b=1,c=0,count=0;
	if(t==0){
		printf("ERROR\n");
		count=0;
		return(count);
	}else if(t==1){
		count=1;
		return(count);
	}else if(t==2){
		count=1;
		return(count);
	}else if(t>=3){
		for(i=3;i<=t;i++){
			c=a+b;
			a=b;
			b=c;	
		}
		return(c);
	}
}
int Fibonacci_sequence_sum(int t)
{
	int sum=0,i=1,a=1,b=1,c=0;
	if(t==0){
		printf("ERROR\n");
		sum=0;
		return(sum);
	}else if(t==1){
		sum=1;
		return(sum);
	}else if(t==2){
		sum=2;
		return(sum);
	}else if(t>=3){
		sum=2;
		for(i=3;i<=t;i++){
			c=a+b;
			sum+=c;
			a=b;
			b=c;	
		}
		return(sum);
	}
}
int main()
{
	int time,sum,count;
	printf("input time:\n");
	scanf("%d",&time);
	count=Fibonacci_sequence(time);
	printf("count=%d\n",count);
	sum=Fibonacci_sequence_sum(time);
	printf("sum=%d",sum);
}
