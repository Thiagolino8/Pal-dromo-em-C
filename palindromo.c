#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int verificacao(int *v, int tam){
    int temp;
    int i;
    if(tam % 2 == 0){
        for(i=0; i<tam/2; i++){
            if(v[i] != v[tam - 1 - i]){
                return 0;
            }
            else{
                return 1;
            }
        }
    }
    else{
        for(i=0; i<(tam+1)/2; i++){
            if(v[i] != v[tam - 1 - i]){
                return 0;
            }
            else{
                return 1;
            }
        }
    }
}

int main(){
    int i, tam=0, *v;
    v = malloc(sizeof(int) * 100);
    printf("Entre com o vetor(enter para terminar): ");
    for(i=0; v[i] != 13; i++){
        v[i] = getche();
        if(v[i] == 13){
            i--;
        }
        else{
            tam++;
        }
    }
    printf("\n");
    if(verificacao(v, tam) != 0){
        printf("E um palidromo\n");
    }
    else{
        printf("Nao e um palidromo\n");
    }
    free (v);
    return 0;
}
