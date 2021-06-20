#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
   int n;
   int num;
   FILE *fptr;

   //Abre o arquivo
   if ((fptr = fopen("arquivo.bin","rb")) == NULL){
       printf("Error!");

     
       exit(1);
   }
   num = 6664;
   
   // Vai pro fim do arquivo
   fseek(fptr, -sizeof(int), SEEK_END);

   for(n = 1; n < 15; ++n)
   {
      fread(&num, sizeof(num), 1, fptr); 
      printf("n1: %d\t", num);
      fseek(fptr, -sizeof(num, SEEK_CUR);
   }
   fclose(fptr); 
  
   return 0;
}


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
