#include<stdio.h>
void squire(int *arr,int n)
{
	int i,m,k;
	int small[n];
	i=0;
	m=n-1;
	k=m;
	while(i<=m){
		if(arr[i]*arr[i]>arr[m]*arr[m]){
			small[k]=arr[i]*arr[i];
			i++;
			k--;
		}else{
			small[k]=arr[m]*arr[m];
			m--;
			k--;
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",small[i]);
	}
	printf("\n");
}
int main()
{
	int n,i;
	printf("how many numbers you want?\n");
	scanf("%d",&n);
	i=n;
	int arr[n];
	printf("input your arr\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	squire(arr,n);
	return 0;
}
