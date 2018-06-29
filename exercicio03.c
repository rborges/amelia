#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    //declara constantes para linhas e colunas
    const int linha = 7;
    const int coluna = 7;

    //declara uma matriz de inteiros
    int matriz[linha][coluna];

    /* Atribui os valores a matriz
     * Percorre todos os valores da linha
    */
    for(int i = 0; i < linha; i++) {

        //para cada linha percorre as colunas
        for(int j = 0; j < coluna; j++) {
                //se linha for igual a coluna
                if(i == j) {
                    matriz[i][j] = 1;
                } else {
                    matriz[i][j] = 0;
                }
        }
    }
    //Mostra os valores
    for(int i = 0; i < linha; i++) {

        //para cada linha percorre as colunas
        for(int j = 0; j < coluna; j++) {
           if(matriz[i][j] < 10){
               printf(" | 0%i", matriz[i][j]);
           } else {
               printf(" | %i", matriz[i][j]);
           }
        }
        printf("\n");
    }

    return 0;

}
