#include<stdio.h>
int main()
{
    int rows1,cols1,rows2,cols2,i,j,k;
    scanf("%d",&rows1);
    scanf("%d",&cols1);
    scanf("%d",&rows2);
    scanf("%d",&cols2);
    int matrix1[rows1][cols1],matrix2[rows2][cols2],productMatrix[rows1][cols2];

    for(i=0;i<rows1;i++)
    {
        for(j=0;j<cols1;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    for(i=0;i<rows2;i++)
    {
        for(j=0;j<cols2;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<cols2;j++)
        {
            productMatrix[i][j]=0;
        }
    }
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<cols2;j++)
        {
            for(k=0;k<cols1;k++)
            {
                productMatrix[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<cols2;j++)
        {
            printf("%d ",productMatrix[i][j]);

        }
        printf("\n");

    }
    return 0;
}
