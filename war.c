#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#define TAM 3

struct Territorio{
    char nome[50];
    char cor[10];
    int tropas;
};

typedef struct Territorio territorio;

int main(){
    setlocale(LC_ALL, "portuguese");

    territorio lista[TAM];

    int i;

    for(i = 0 ; i < TAM; i++){

        printf("Insira os dados (%d):\n", i + 1);

        printf("Insira o nome do país:\n");
        scanf(" %50[^/\n]", &lista[i].nome);
        fflush(stdin);

        printf("Insira a cor do país:\n");
        scanf("%s", &lista[i].cor);
        fflush(stdin);

        printf("Insira a quantidade de tropas:\n");
        scanf("%d", &lista[i].tropas);
        fflush(stdin);

    }
    system("cls");
    printf("Seus dados:\n");
    for(i = 0; i < TAM; i++){
    printf("-----------------------------País %d---------------------------------", i+1);
    
    printf("\nNome do pa�s:%s\n", lista[i].nome);
    
    printf("\nCor escolhida:%s\n", lista[i].cor);

    printf("\nQuantidade de tropas:%d\n", lista[i].tropas);


}

}
