#include<stdio.h>
#define n 5
int main()
{
	int arr[n]={5,4,1,3,2};
	int i,j,num;
	for(j=0;j<n-1;j++){
		for(i=0;i<n-1-j;i++){
			if(arr[i]>arr[i+1]){
				num=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=num;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}
