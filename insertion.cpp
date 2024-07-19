#include<stdio.h>
main()
{
	int a[5],i,x,p,s;
	printf("size: ");
	scanf("%d",&s);
	
	printf("enter the elements:\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("elements to insert: ");
	scanf("%d",&p);
	for(i=5;i>=p;i--){
		a[i]=a[i-1];
	}
	a[i]=x;
	s++;
	printf("Array is:\n");
	for(i=0;i<s;i++){
		printf("%d",a[i]);
	}
	
	return 0;
}

