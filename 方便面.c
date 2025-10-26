#include<stdio.h>
int main()
{
	int need,buy=0,free=0,sum=0,i,sum1=0;
	printf("input how many you need:");
	scanf("%d",&need);
	if(need==0){
		printf("ERROR");
	}
	for(i=0;;i++){
		sum++;
		sum1++;
		if(sum>3){
			free+=sum/3;
			sum/=3;
		}
		buy=sum1;		
		if(free+buy==need){
			break;
		}
	}
	printf("buy=%d",buy);
}
