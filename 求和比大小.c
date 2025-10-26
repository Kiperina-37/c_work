#include<stdio.h>
int main()
{
	int him,num=1,i,sum=0,after=1,before=2;
	printf("input number: (>1)\n");
	scanf("%d",&him);
	if(him<=1){
		printf("ERROR");
	}else{
		for(i=0;;num++){
			sum+=after*before;
			after++;
			before++;
			if(sum>him){
				printf("min=%d",num);
				break;
			}
		}
	}
}
