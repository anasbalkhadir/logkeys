#include <stdio.h>
#include <stdlib.h>
#include "string.h"

char  indx(char lettre, char* tab,int N){
   for (int i=0;i<N;i++){
      if(lettre==tab[i])
          return i;        
   }
   return -30;
}





int main(int argc, char ** argv){
   //char * text="abaq ke vf";
   int taille=strlen(argv[1]);
   char * text_cryp=malloc(taille*sizeof(char));
   char * text_decryp=malloc(taille*sizeof(char));
   text_cryp=argv[1];//text; 
   int N=63;
   char * tab=malloc(N*sizeof(char));
   FILE * file;
   file=fopen("table","r+");
   fread(tab,1,N,file);
   fclose(file);
   //printf("------------------\n");
   //printf("%s\n",tab);
  for(int i=0;i<taille;i++){
     text_decryp[i]=indx(text_cryp[i],tab,N)+65;
  }
  printf("------------------\n");
  printf("%s\n",text_decryp);
    

   
   

}
