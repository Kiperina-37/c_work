#include<stdio.h>
#define k 0.16204
#include<math.h>
/*int main()
{
	double a,t,sum;
	printf("input days:");
	scanf("%lf",&t);
	printf("input start people:");
	scanf("%lf",&a);
	sum=a;
	while(t>0){
		sum*=(1+k);
		t--;
	}
	printf("%f people",sum);
}
*/
int main()
{
	double a,t,sum;
	printf("input days:");
	scanf("%lf",&t);
	printf("input start people:");
	scanf("%lf",&a);
	sum=a*pow(1+k,t);
	printf("%f",sum);
}

