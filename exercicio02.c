#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    //declara constantes para linhas e colunas
    const int linha = 10;
    const int coluna = 10;

    int contador = 1;

    //declara uma matriz de inteiros
    int matriz[linha][coluna];

    /* Atribui os valores a matriz
     * Percorre todos os valores da linha
    */
    for(int i = 0; i < linha; i++) {

        //para cada linha percorre as colunas
        for(int j = 0; j < coluna; j++) {
           //insere um inteiro incrementado na matriz
          matriz[i][j] = contador++;
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
