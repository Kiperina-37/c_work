#include<stdio.h>
#define people 3
#define cls 4
//3���ˣ�4�ſΡ� 
int main()
{
	int score[people][cls]; 
	printf("����ɼ���");
	int i=0,j=0;
	for(i=0;i<people;i++){
		printf("��%d��ѧ���ɼ�",i+1);
		for(j=0;j<cls;j++){
			scanf("%d",&score[i][j]);
		}
	}
	
	printf("\n�����˵ĳɼ���\n");
	for(i=0;i<people;i++){
		printf("ѧ��%d:",i+1);
		for(j=0;j<cls;j++){
			printf("%d",score[i][j]);
		}printf("\n");
	}
	
	printf("\nÿ���˵�ƽ���֣�\n");
	for(i=0;i<people;i++){
		int sum=0;
		for(j=0;j<cls;j++){
			sum+=score[i][j];
		}
		float average=(float)sum/cls;
		printf("ѧ��%d��ƽ���֣�%.2f\n",i+1,average);
	}
	
	printf("\nÿ�ſγ̵�ƽ����:\n");
	for(j=0;j<cls;j++){
		int sum=0;
		for(i=0;i<people;i++){
			sum+=score[i][j];
		}
		float average=(float)sum/people;
		printf("�γ�%d��ƽ���֣�%.2f\n",j+1,average);
	}
	
	
	
}
