#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int size);
void bubble_sort(int arr[],int size);

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf(" %d ",arr[i]);
   }
}
void bubble_sort(int arr[],int size){
  int i,j,temp;
  for(i=0;i<size;i++){
      for(j=0;j<size-i-1;j++){
          if(arr[j]>arr[j+1]){
          	temp=arr[j];
          	arr[j]=arr[j+1];
          	arr[j+1]=temp;
	       }
      }
  }
printf("After Bubble sort: ");
display(arr,size);
}
int main(){
   int size,choice,i;
   char ch[20];
   printf("Enter size of element you want to sort: ");
   scanf("%d",&size);
   int arr[size];
   for(i=0;i<size;i++){
        printf("Enter %d Element: ",i+1);
        scanf("%d",&arr[i]);
   }
while(1){
	printf("\n1. Bubble Sort\n2. Display Array.\n3. Exit\n");
    printf("\nEnter your Choice : ");
    scanf("%d",&choice);
	switch(choice){
    case 1:
        bubble_sort(arr,size);
        break;
    case 2:
        display(arr,size);
        break;
    case 3:
        return 0;
    default:
        printf("\nInvalid\n");
    }
}
return 0;
}
