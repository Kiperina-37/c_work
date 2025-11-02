#include<stdio.h>
void ending(int *arr,int ending,int n)
{
	int *fast=&arr[0];
	int *slow=&arr[0];
	int i,count=0;
	for(i=0;i<n;i++){
		if(*fast!=ending){
			*slow=*fast;
			slow++;
			count++;
		}
		fast++;
	}
	slow=&arr[0];
	printf("\n");
	for(i=0;i<count;i++){
		printf("%d\n",*slow);
		slow++;
	}
}
int main()
{
	int n,aim,i;
	printf("how many numbers you want?\n");
	scanf("%d",&n);
	i=n;
	int arr[n];
	printf("input your arr\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("input your aim\n");
	scanf("%d",&aim);
	ending(arr,aim,n);
	return 0;
}
