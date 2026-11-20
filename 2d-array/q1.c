/*Problem: Write a C program using a 2D array to:
Input marks of 3 students in 3 subjects.
Calculate the total marks obtained by each student.
Display the total marks of each student.
*/
#include <stdio.h>
int main()
{
    int a[3][3],sum;
    for(int i = 0; i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(int i = 0; i<3;i++)
    {
        sum = 0;
        for(int j = 0;j<3;j++)
        {
            sum += a[i][j];
        }
        printf("Sum of student %d = %d\n",i+1,sum);
    }
    return 0;
}