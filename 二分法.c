#include<stdio.h>
int search(int *arr,int size,int aim)
{
	int left=0;
	int right=size-1;
	int middle=0;
	while(left<=right){
		middle=(left+right)/2;
		if(aim==arr[middle]){
			printf("Found\n");
			return 1;
		}else if(aim<arr[middle]){
			right=middle-1;
		}else if(aim>arr[middle]){
			left=middle+1;
		}
	}
	printf("Not Found\n");
	return -1;
}
int main()
{
	int n,i,num=0,aim;
	printf("how many numbres you want?\n");
	scanf("%d",&n);
	i=n;
	printf("input your arr:\n");
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("input your aim:\n");
	scanf("%d",&aim);
	num=search(arr,n,aim);
	printf("%d",num);
	return 0;
}
