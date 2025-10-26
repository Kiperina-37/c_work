#include<stdio.h>
#define n 5
int main()
{
	int arr[n]={1,3,5,4,2};
	int i,j,min_idx,temp;
	for(i=0;i<n-i;i++){
		min_idx=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min_idx]){
				min_idx=j;	
			}
		}
		temp=arr[min_idx];
		arr[min_idx]=arr[i];
		arr[i]=temp;
	}
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}

