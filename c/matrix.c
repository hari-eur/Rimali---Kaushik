#include<stdio.h>
int main(void)
{
    int mat[10][10],n,m;
    printf("Enter the size of the matrix(odd number only):\n");
    scanf("%d",&n);
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Enter the element to be found:\n");
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[0][j]==m) 
            {
                mat[i][j] = mat[i][j];
            }
            else if(mat[i][j]==m) 
            {
                mat[i][j] = mat[i-1][j];
            }
        }
    }
    printf("After replacing\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}