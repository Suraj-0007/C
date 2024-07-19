#include<stdio.h>
int main()
{
	int i,n,Sum=0,no;
	float Avg;
	printf("enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;++i)
	{
    	scanf("%d",&no);
    	Sum = Sum +no;
	}
	Avg = Sum/n;
	printf("\nSum of the %d Numbers = %d",n, Sum);
	printf("\nAverage of the %d Numbers = %.2f",n, Avg);
	return 0;
}
