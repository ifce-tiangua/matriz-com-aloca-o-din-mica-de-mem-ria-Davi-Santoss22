#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matriz;
    int i, j, linhas, colunas;
    
    scanf("%d %d", &linhas, &colunas);
    
    matriz = malloc (linhas * sizeof (int*)) ;
    
    for (i=0; i < linhas; i++)
       matriz[i] = malloc (colunas * sizeof (int)) ;
    
    for (i=0; i < linhas; i++){
        for (j=0; j < colunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    if(linhas != 0){
        for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d", matriz[i][j]);
            if(j != colunas - 1){
            printf(" ");
        }
        }
        
        printf("\n");
    }
    }else printf("[matriz vazia]");
    
    for (i=0; i < linhas; i++)
       free (matriz[i]) ;
    free (matriz);
}
