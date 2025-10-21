#include<stdio.h>
int main()
{
	int a[]={37,65,87,68,65,7};
	int min,max;
	finding(a,sizeof(a)/sizeof(a[0]),&min,&max);
	printf("%d %d",min,max);
}
int finding(int a[],int len,int *min,int *max)
{
	int i;
	*min=*max=a[0];
	for(i=1;i<len;i++){
		if(a[i]<*min){
			*min=a[i];
		}
		if(a[i]>*max){
			*max=a[i];
		}
	}
}
