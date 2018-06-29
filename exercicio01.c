#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    //declara constantes para linhas e colunas
    const int linha = 7;
    const int coluna = 9;

    int resultado = 0;

    //declara uma matriz de inteiros
    int matriz[linha][coluna];

    /* Atribui os valores a matriz
     * Percorre todos os valores da linha
    */
    for(int i = 0; i < linha; i++) {

        //para cada linha percorre as colunas
        for(int j = 0; j < coluna; j++) {

           //insere um inteiro digitado pelo usuario e insere no array
           printf("Digite um valor para linha %i e coluna %i->", i, j);
           scanf("%i", &matriz[i][j]);

           resultado +=  matriz[i][j];
        }
    }
    //Mostra os valores
    for(int i = 0; i < linha; i++) {

        //para cada linha percorre as colunas
        for(int j = 0; j < coluna; j++) {
           printf("|%i ", matriz[i][j]);
        }
        printf("\n");
    }

     printf("\n\n");
     printf("o resultado da soma da matriz eh:%i", resultado);

    return 0;

}
