#include<stdio.h>
int main()
{
	int id,age;
	char name[20];
	float score;
	printf("please input information(id,name,age,score)\n");
	scanf("%d %*s %d %f",&id,&age,&score);
	printf("\nplease input name");
	scanf("%s",&name);
	printf("\n==== user name ====\n");
	int width=5;
	printf("id: %*d\n",width,id);
	printf("name: %*s\n",width,name);
	printf("age: %*d\n",width,age);
	printf("score: %*.*f",width,2,score); 
}
