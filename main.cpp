#include<stdio.h>
#include<stdlib.h>

int main(){
   
    FILE *arquivo;
    double Vet[5];
    int result;
    int i;
    
    arquivo = fopen("arquivo.bin", "rb");
     
    if (arquivo == NULL){
        printf("Problemas na abertura do arquivo \n");
        return(1);
    }

    int n;
    fread(&n, sizeof(int), 1, arquivo);


    int *vet = (int*)malloc(n*sizeof(int));
    fread(vet, sizeof(int), n, arquivo);

    for(i=0; i<n; i++){
        printf("(%d), %d", i, vet[i]);
    }    
    

    printf("n = %d\n", n);

    free(vet);
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

    return 0;
}