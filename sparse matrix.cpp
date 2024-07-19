#include<stdio.h>
#include<stdlib.h>
int main(){
   int row,col,i,j,a[5][5],c=0;
   printf("Enter the row");
   scanf("%d",&row);
   printf("Enter the Column");
   scanf("%d",&col);
   printf("Enter the Element: ");
   for(i=0;i<row;i++){
      for(j=0;j<col;j++){
         scanf("%d",&a[i][j]);
      }
   }
   printf("Elements are:\n");
   for(i=0;i<row;i++){
      for(j=0;j<col;j++){
         printf("%d\t",a[i][j]);
      }
      printf("\n");
   }
   for(i=0;i<row;i++){
      for(j=0;j<col;j++){
         if(a[i][j]==0)
            c++;
      }
   }
   if(c>((row*col)/2))
      printf("The Matrix is a sparse matrix");
   else
      printf("The Matrix is not sparse matrix");
}
