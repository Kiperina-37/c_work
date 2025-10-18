#include<stdio.h>
#define people 3
#define cls 4
//3个人，4门课。 
int main()
{
	int score[people][cls]; 
	printf("输入成绩：");
	int i=0,j=0;
	for(i=0;i<people;i++){
		printf("第%d个学生成绩",i+1);
		for(j=0;j<cls;j++){
			scanf("%d",&score[i][j]);
		}
	}
	
	printf("\n所有人的成绩：\n");
	for(i=0;i<people;i++){
		printf("学生%d:",i+1);
		for(j=0;j<cls;j++){
			printf("%d",score[i][j]);
		}printf("\n");
	}
	
	printf("\n每个人的平均分：\n");
	for(i=0;i<people;i++){
		int sum=0;
		for(j=0;j<cls;j++){
			sum+=score[i][j];
		}
		float average=(float)sum/cls;
		printf("学生%d的平均分：%.2f\n",i+1,average);
	}
	
	printf("\n每门课程的平均分:\n");
	for(j=0;j<cls;j++){
		int sum=0;
		for(i=0;i<people;i++){
			sum+=score[i][j];
		}
		float average=(float)sum/people;
		printf("课程%d的平均分：%.2f\n",j+1,average);
	}
	
	
	
}
