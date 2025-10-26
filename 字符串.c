#include<stdio.h>
int main()
{
	int upper=0,lower=0,digit=0;
	char ch;
	printf("Please enter a string of characters and press Enter to finish.\n");
	while((ch=getchar())!='\n'){
		if(ch>='A'&&ch<='Z'){
			upper++;
		}else if(ch>='a'&&ch<='z'){
			lower++;		
		}else if(ch>='0'&&ch<='9'){
			digit++;
		}
	}
		printf("Number of uppercase letters:%d\n",upper);
		printf("Number of lowercase letters:%d\n",lower);
		printf("Number of numeric characters:%d",digit);
		
		return 0;
}
