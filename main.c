#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int computeDet(int mat[3][3])
{
    int determinant = 0;

    determinant += mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]);
    determinant -= mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]);
    determinant += mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);

    return determinant;
}

int main(void)
{
    int mat[3][3];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (scanf("%d", &mat[i][j]) != 1) {
                return 0;
            }

            if (abs(mat[i][j]) >= 1000) {
                printf("Input harus kurang dari 1000 dalam nilai absolut.\n");
                return 1;
            }
        }
    }

    int det = computeDet(mat);

    printf("%d\n", det);

    return 0;
}
