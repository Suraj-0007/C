#include<stdio.h>
int linearsearch(int a[],int n,int key)
{
	int i;
	for(i=0;i<n;i++){
		if(a[i]==key)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int a[100],n,key,pos,i;
	printf("Enter the total elements in the array ");
	scanf("%d",&n);
	printf("enter elements into array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search key elements");
	scanf("%d",&key);
	pos=linearsearch(a,n,key);
	if(pos>=0)
		printf("element found at %d position",pos+1);
	else
		printf("element not found");
		
	return 1;
}
