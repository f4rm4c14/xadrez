#include <stdio.h>

 void torre(int n) {
    
      if(n >0){
            printf(" Torre cinco casas para direita\n");
            torre( n-1);
        }
 }

 void bispo(int n) {
    
      if(n >0){
            printf("Diagonal para cima e a Direita\n");
            bispo( n-1);
        }
 }
void rainha(int n) {
    
      if(n >0){
            printf("Rainha move-se em todas as direções\n");
            rainha( n-1);
        }
 }

int main ()
 {
    int i,j;
    char baixo;
    int num = 8;
    int numero = 5;
    torre(numero);
    

    bispo(numero);
    
    rainha(num);

     for (i =1, j = 2; i <2 || j < i;i++, j++ ){
        baixo = 'c';             
       
            printf("%c ", baixo);
            
       }
    

    
 }
