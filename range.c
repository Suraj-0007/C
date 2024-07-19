//Display those in the range(0-10),(11-50) and (51-99)
#include<stdio.h>
int main()
{

    int a[5][5],i,j;
    printf("Enter the elements into the array");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]<=10)
            {printf("In the range (0-10)");
            printf("%d \t",a[i][j]);}

            else if(a[i][j]>10 && a[i][j]<51)
            {printf("In the range (11-50)");
            printf("%d \t",a[i][j]);}

            else
            {printf("In the range (51-99)");
            printf("%d \t",a[i][j]);}
        }
    }


return 0;


}
