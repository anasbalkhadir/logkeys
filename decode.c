#include <stdio.h>
#include <stdlib.h>
#include "string.h"









int main(int argc, char ** argv){

   //char * text_cryp=malloc(strlen(argv[1])*sizeof(char));
   //text_cryp=argv[1]; 
   int N=110-65+1;
   char * tab=malloc(N*sizeof(char));
   //tab[0]='A';tab[1]='V';tab[2]='X';tab[3]='S';tab[4]='E',tab[5];tab[6]
     int i=0;
     int print;
     FILE * file;
     file=fopen("table","r+");
     fseek( file, 46, SEEK_SET );
     while(i<N){
       print=i+65+46;
       printf("%c:   ",print);
       scanf("%s",tab+i);
       i++;
   }
  fwrite(tab,1,N-46,file);
  fclose(file);
  printf("------------------\n");
  printf("%s\n",tab);

}
