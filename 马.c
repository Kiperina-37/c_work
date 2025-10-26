#include<stdio.h>
int main()
{
	
	int object=100,load=0,big_horse,medium_horse,small_horse,count=0;
	if(object<=0){
		printf("ERROR");
	}else{
		for(big_horse=0;big_horse<=100;big_horse++){
			for(medium_horse=0;medium_horse<=100-big_horse;medium_horse++){
				small_horse=100-big_horse-medium_horse;
				load=3*big_horse+2*medium_horse+small_horse/2;
				if(load==object&&small_horse%2==0){
					count++;	
				}
			}
		}
		printf("%d choice",count);
	}
}
