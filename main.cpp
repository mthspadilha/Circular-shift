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

    fseek(arquivo, sizeof(int), SEEK_SET);
    fgets(Vet, 6664, arquivo);
    result = fread (&Vet[0], sizeof(int), 100, arquivo);
    printf("Nro de elementos lidos: %d\n", result);

    for (i=0; i<result; i++)
    printf("%lf\n", Vet[i]);
  
    fclose(arquivo);

    /**
     * CONTEUDO DO AQUIVO *
    0000000 0864 2306 ef77 bdbf bfef efbd bdbf 7927
    0000010 bfef efbd 1a08 0000 0000 bfef efbd bdbf
    0000020 7745 bfef efbd bdbf bfef 00bd          
    000002c
    
    6664 = 1A08

    Encontrar o 1A08, rotacionar ele
    fseek
    fgets
    Rotacionar como?
    
    **/
}