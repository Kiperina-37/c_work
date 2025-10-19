#include<stdio.h>
int main()
{
	char name[]="Kiperina";
	int age=19;
	float score=37.5;
	float attendance=0.955;
	printf("user name: \n");
	printf("%-10s|%-10s\n","name",name);
	printf("%-10s|%05d\n","age",age);
	printf("%-10s|%+3.1f\n","score",score);
	printf("%-10s|%.2f%%\n","attendance",attendance*100);
}
