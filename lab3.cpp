#include <stdio.h>
#include <stdlib.h>


int main(void){

    long int M,y,x;
    system("cls");
    printf("Enter matrix size:(only 3,5,7,9)\n");
    printf(":");scanf("%d",&M);

    int matrix[M][M];{
        for (x=0;x<M;x++){
            for(y=0;y<M;y++){
                matrix[x][y]=rand()%(100);
                printf("  %d",matrix[x][y]);
            }
            puts("   \n");
        }
    }
    printf("------------------------------------\n\n");

    for(x=0;x<M;x++){
        for(y=0;y<M;y++){
            int matr = matrix[x][y];
            matrix[x][y] = matrix[M-(x+1)][y];
            matrix[M-(x+1)][y]= matr;
            matr = matrix[x][M-(x+1)];
            matrix[x][M-(x+1)]=matrix[M-(x+1)][M-(x+1)];
            matrix[M-(x+1)][M-(x+1)] = matr;
        }

    }
    for(x=0;x<M;x++){
        for(y=0;y<M;y++){
            int matr = matrix[x][M-(x+1)];
            matrix[x][M-(x+1)]=matrix[M-(x+1)][M-(x+1)];
            matrix[M-(x+1)][M-(x+1)] = matr;
            matr = matrix[x][M-(x+1)];
            matrix[x][M-(x+1)]=matrix[M-(x+1)][M-(x+1)];
            matrix[M-(x+1)][M-(x+1)] = matr;

            printf("%d  ",matrix[x][y]);
        }
        puts("  \n");
    }



    printf("\n");
    system("pause");
    return 0;
}