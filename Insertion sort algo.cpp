#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int size);
void insertion_sort(int arr[],int size);

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf(" %d ",arr[i]);
   }
}
void insertion_sort(int arr[],int size){
    int i,pos,min;
    for(i=1;i<size;i++){
        min=arr[i];
        pos=i-1;
        while(min<arr[pos] && pos>=0){
            arr[pos+1]=arr[pos];
            pos=pos-1;
        }
        arr[pos+1]=min;
    }
printf("After Insertion sort Elements are : ");
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
	printf("\n1. Insertion Sort\n2. Display Array.\n3. Exit\n");
    printf("\nEnter your Choice : ");
    scanf("%d",&choice);
	switch(choice){
    case 1:
        insertion_sort(arr,size);
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
