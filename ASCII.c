#include<stdio.h>
int main()
{
	int a;
	printf("input ASCII:");
	scanf("%d",&a);
	if(a>=0&&a<=127){
		printf("%c",a);
	}else{
		printf("please input right number");
	}
		

}
