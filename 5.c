#include<stdio.h>
int sum(int a){
    int i,sum=0;
    for(i=1;i<=a;i++){
        sum+=i;
    }
    return(sum);
}
int smu(int b){
    int i,smu=0;
    for(i=-1;i>=b;i--){
        smu+=i;
    }
    return(smu);
}
int main()
{
    printf("输入目标：");
    int a;
    scanf("%d",&a);
    if(a<0){
    	int b=smu(a);
        printf("%d",b);
    }else if(a>0){
    	int c=sum(a);  
        printf("%d",c); 
    }else{
        printf("输入正确的数");
    }
    return 0;

}
