//write a program to create 5*5 2d array.
#include<stdio.h>
int main(){
	int a[5][5],i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("enter the elements: ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("array is: ");
	for(i=0;i<5;i++){
		printf("\n");
		for(j=0;j<5;j++){
		printf("%d\t",a[i][j]);
		}
	}
	return 0;
}
