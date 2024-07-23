#include <stdio.h>

int main(){
    int matrix[3][3] = {
                    {1,2,1},
                    {3,4,1},
                    {5,6,1}
                        };
    
    int i,j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}