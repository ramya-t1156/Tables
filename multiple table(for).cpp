#include<stdio.h>

int main(){
	int num_1=1,num_2;
	printf("Table to be calculated : ");
	scanf("%d",&num_2);
	for(;num_1<=10;num_1++){
		printf("%d  x  %d  =  %d\n",num_1,num_2,num_1*num_2);
	}
	return 0;
}
