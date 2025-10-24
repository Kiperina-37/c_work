#include<stdio.h>
int main()
{
	double i,sum=0,a,cs;
	printf("input paper'thick: (mm)");
	scanf("%lf",&i);
	a=i/1000;
	for(cs=0;;cs++){
		if(a>=8848.86){
			printf("over\n");
			printf("%f",cs);
			break;
		}
		a=a*2;
	}
	
} 
/*#include<stdio.h>
int main()
{
    double a, cs;
    printf("input paper'thick: (mm)");
    scanf("%lf", &a);
    a = a / 1000; // ×ª»»ÎªÃ×
    for(cs = 0; ; cs++) {
        if(a >= 8848.86) {
            printf("over\n");
            printf("%f", cs);
            break;
        }
        a = a * 2;
    }
}*/
