#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    //declara constantes para linhas e colunas
    const int linha = 6;
    const int coluna = 8;

    //declara uma matriz de inteiros
    int matriz[linha][coluna];
    int vetor[linha];
    int negativos = 0;

    /* Atribui os valores a matriz
     * Percorre todos os valores da linha
    */
    for(int i = 0; i < linha; i++) {

        //para cada linha percorre as colunas
        for(int j = 0; j < coluna; j++) {
                int valor  = random_int();
                matriz[i][j] = valor;

                //se valor for negativo incrementa negativos
                if(valor == -1) {
                   negativos++;
                }

                //se indice do loop for igual ao final da coluna
                if(j == (coluna - 1)){
                    //pega valor de negativos e insere no vetor na posição da linha
                    vetor[i] = negativos;
                    //zera negativos
                    negativos = 0;
                }


        }
    }
    //Mostra os valores
     printf("IMPRIME MATRIZ\n");
    for(int i = 0; i < linha; i++) {

        //para cada linha percorre as colunas
        for(int j = 0; j < coluna; j++) {
           //se valor for menor ou igual a ZERO
           if(matriz[i][j] >= 0){
               printf(" | %i", matriz[i][j]);
           } else {
               printf(" |%i", matriz[i][j]);
           }
        }
        printf("\n");
    }

     printf("IMPRIME VETOR\n");
     for(int i = 0; i < linha; i++) {

        printf(" Linha %i = Negativos %i", i+1, vetor[i]);
        printf("\n");
    }

    return 0;

}
//funcão para retornar um numero entre -1 e 1
int random_int()
{
    int min = -1;
    int max = 1;

   return min + rand() % (max+1 - min);
}
