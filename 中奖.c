/*#include<stdio.h>
int main()
{
	double a,b,p;
	printf("what choice what:");
	scanf("%lf %lf",&a,&b);
	p=(b/a)*((b-1)/(a-1))*((b-2)/(a-2))*(1/(a-b+1));
	printf("%f",p); 
}*/
#include<stdio.h>
int main()
{
	double a,b,p=1.0,i;
	printf("what choice what:");
	scanf("%lf %lf",&a,&b);
	for(i=0;i<b;i++){
		p*=(b-i)/(a-i);
	}
	printf("%.15f",p); 
}
