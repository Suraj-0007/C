#include<stdio.h>
int main(){
    int a[50], s, i, b, small;
	printf("\nEnter the size of the array: ");
    scanf("%d", &s);
	printf("\n\nEnter the elements: ", s);
    for(i = 0; i < s; i++)
    scanf("%d", &a[i]);
	b= a[0];
    for(i=1;i<s; i++){
        if(b<a[i]){
            b=a[i]; 
        }
    }
    printf("\n\nThe largest element is: %d", b);
	small = a[0];
    for(i=1;i<s; i++){
        if(small>a[i]){
            small = a[i];   
        }
    }
    printf("\n\nThe smallest element is: %d", small);

    return 0;
}
