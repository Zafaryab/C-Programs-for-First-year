#include <stdio.h>
void main()
{
    int i, j, r, c, temp = 0;
    int mat[10][10];

    printf("Enter the number of Rows: ");
    scanf("%d", &r);
    printf("Enter the number of Columns: ");
    scanf("%d", &c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter value [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n\nInitial Matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i < j)  //this logic is working fine for square matrix but not for others. Make necessary changes so that it works fine for any order of matrix
            {
                temp = mat[j][i];
                mat[j][i] = mat[i][j];
                mat[i][j] = temp;
            }
        }
    }

    // Output

    printf("\n\nTranspose Matrix:\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

// for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             trans[j][i] = mat[i][j];
//         }
//     }
