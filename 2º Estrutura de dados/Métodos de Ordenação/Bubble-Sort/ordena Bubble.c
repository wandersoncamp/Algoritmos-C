

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct lista{
    int numero;
    struct lista *prox;
}Lista;

Lista *primeiro = NULL;
Lista *novo = NULL;
Lista *aux = NULL;
int tamanho = 0;

Lista *alocaMemoria();
void pegaNumero();
void exibir();
void bubble();
Lista *alocaMemoria(){
    return (Lista*) malloc(sizeof(Lista));
}
void pegaNumero(){
    char numero[10];

    FILE *arquivo = fopen("arquivo.txt", "r");//aqui muda o arquivo so por o nome ou o caminho do arquivo

    if(arquivo == NULL){ //se n encontrar o arquivo da erro
        printf("Erro, Arquivo nao enconrado!");
    }else{
        while(fgets(numero, sizeof numero, arquivo) != NULL){
            if(primeiro == NULL){
                primeiro = alocaMemoria();
                primeiro->prox = NULL;
                aux=primeiro;
                primeiro->numero = atoi(numero);
                tamanho++;
            }else{
                novo = alocaMemoria();
                novo->prox = NULL;
                aux->prox = novo;
                aux = novo;
                novo->numero = atoi(numero);
                tamanho++;
            }
        }
    }
}
void exibir(){
    aux = primeiro;

    if(primeiro == NULL){
        printf("Sua lista vazia");
    }else{
        while(aux != NULL){
            printf("%d\n", aux->numero);
            aux = aux->prox;
        }
        printf("Numero de elementos: %d\n", tamanho);
    }
}
void bubble(){
    clock_t tempo;
	tempo = clock();
	int apoio;

    aux= primeiro;
    novo= primeiro;

    while(aux != NULL){
        novo = aux->prox;
        while(novo != NULL){
            if(aux->numero > novo->numero){
                apoio = aux->numero;
                aux->numero = novo->numero;
                novo->numero = apoio;
            }
            novo = novo->prox;
        }
        aux = aux->prox;
    }
   printf("Tempo:%f",(clock() - tempo) / (double)CLOCKS_PER_SEC);
}
int main(){
    pegaNumero();

    Lista *lista;
    int opcao;

    while(opcao != 0){
        printf("exibir digite: 1\n");
        printf("ordenar digite: 2(em desenvolvimento)\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                exibir();
            break;

            case 2:
                bubble();
            break;
        }
    }
return 0;
}

