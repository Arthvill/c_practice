/* Enter two matrices and add their elements to form a new matrix*/
#include <stdio.h>
int  main()
{
    int a[2][2] , b[2][2],c[2][2];
    printf("Enter matrix a :\n");
    for(int i = 0; i< 2;i++)
    {
        for(int j = 0; j< 2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter matrix b :\n");
    for(int i = 0; i< 2;i++)
    {
        for(int j = 0; j< 2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i = 0; i < 2;i++)
    {
        for(int j = 0;j < 2;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The final matrix i.e. sum of both a and b matrix is : \n");
    for(int i = 0; i< 2;i++)
    {
        for(int j = 0; j< 2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}