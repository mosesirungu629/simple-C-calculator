#include <stdio.h>

int main() {
    int matA[2][3] = {{2, 2, 2}, {2, 3, 4}};
    int matB[3][2] = {{3, 6}, {4, 8}, {5, 9}};
    int matR[2][2];
    int i, j, k;

    // Multiplication of two matrices
    for(i=0;i<2;i++)  {
        for(j=0;j<2;j++)  {
            matR[i][j]=0;
            for(k=0;k<3;k++)  {
                matR[i][j]=matR[i][j]+matA[i][k]*matB[k][j];
            }
        }
    }

    // Printing the result
    printf("\nFirst Matrix is \n");
    for(i=0;i<2;i++)  {
        for(j=0;j<3;j++)  {
            printf("%d\t",matA[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond Matrix is \n");
    for(i=0;i<3;i++)  {
        for(j=0;j<2;j++)  {
            printf("%d\t",matB[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix multiplication is \n");
    for(i=0;i<2;i++)  {
        for(j=0;j<2;j++)  {
            printf("%d\t",matR[i][j]);
        }
        printf("\n");
    }

    return 0;
}
