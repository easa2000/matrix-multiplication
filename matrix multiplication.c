// program to matrix multiply

#include<stdio.h>
#include<conio.h>
void main()
{
    int rows1, rows2, cols1, cols2, res_rows, res_cols;
    int mat1[10][10], mat2[10][10],res[10][10],i,j,k;
    printf("\n Enter the number of rows in first matrix: ");
    scanf("%d",&rows1);
    printf("\n Enter the number coloumn in first matrix: ");
    scanf("%d",&cols1);

    printf("\n Enter the number of rows in second matrix: ");
    scanf("%d",&rows2);
    printf("\n Enter the number coloumn in second matrix: ");
    scanf("%d",&cols2);

    // in matrix multiplication coloumn 1 not equal to row 2

    if(cols1 != rows2)
    {
        printf("\n The number of coloumns in the first matrix must be equal to the number of rows in the second matrix");
        getch();
        exit(0);
    }

    res_rows = rows1;
    res_cols = cols1;

    printf("\n Enter the element of first matrix: ");
    printf("\n **********************************************\n");
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<cols1;j++)
           scanf("%d",&mat1[i][j]);
    }

    printf("\n Enter the element of second matrix: ");
    printf("\n **********************************************\n");
    for(i=0;i<rows2;i++)
    {
        for(j=0;j<cols2;j++)
           scanf("%d",&mat2[i][j]);
    }

    // matrix calculation
    for(i=0;i<res_rows;i++)
    {
        j=0;
        for(j=0;j<res_cols;j++)
        {
            res[i][j] = 0;
            for(k=0;k<res_cols;k++)
               res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }

    printf("\n The elements of the product matrix are ");
    printf("\n***********************************************\n");
    for(i=0;i<res_rows;i++)
    {
        printf("\n");
        for(j=0;j<res_cols;j++)
        {
            printf("\t %d",res[i][j]);
        }
    }
    
}
