#include<stdio.h>

int main(){

    FILE *arquivo;
    double Vet[100];
    int result;
    int i;
    
    arquivo = fopen("teste", "r+");
     
    if (arquivo == NULL){
        printf("Problemas na abertura do arquivo \n");
        return(0);
    }

    result = fread (&Vet[0], sizeof(int), 100, arquivo);
    printf("Nro de elementos lidos: %d\n", result);

    for (i=0; i<result; i++)
    printf("%lf\n", Vet[i]);
  
    fclose(arquivo);
}