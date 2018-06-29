#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    //declara constantes para linhas e colunas
    const int linha = 20;
    const int coluna = 15;

    //declara uma matriz de inteiros
    int matriz[linha][coluna];
    int vetor[linha];
    int somatorio = 0;

    /* Atribui os valores a matriz
     * Percorre todos os valores da linha
    */
    for(int i = 0; i < linha; i++) {

        //para cada linha percorre as colunas
        for(int j = 0; j < coluna; j++) {
            int valor  = random_int();

            matriz[i][j] = valor;

            if (i % 2 == 0) {
                somatorio += valor;
            } else {
                //zera somatorio
                somatorio = 0;
            }
            //se indice do loop for igual ao final da coluna
            if(j == (coluna - 1)){
                //pega valor de somatorio e insere no vetor na posição da linha
                vetor[i] = somatorio;
            }
        }
    }
    //Mostra os valores
     printf("IMPRIME MATRIZ\n");
    for(int i = 0; i < linha; i++) {

        //para cada linha percorre as colunas
        for(int j = 0; j < coluna; j++) {
           //se valor for menor ou igual a ZERO
           if(matriz[i][j] < 10){
               printf(" | %i", matriz[i][j]);
           } else {
               printf(" |%i", matriz[i][j]);
           }
        }
        printf("\n");
    }

     printf("IMPRIME VETOR\n");
     for(int i = 0; i < linha; i++) {

        printf(" Linha %i = Somatorio %i", i+1, vetor[i]);
        printf("\n");
    }

    return 0;

}
//funcão para retornar um numero entre 0 e 99
int random_int()
{
    int min = 0;
    int max = 99;

   return min + rand() % (max+1 - min);
}
