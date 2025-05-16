#include <stdio.h>

 int main ()
 {

    int tor = 0, bis = 0;
    int i,j;
    char baixo;
   
    while (tor <=5)
    {
        printf (" Torre cinco casas para direita\n");
        tor++;
    }

    do
    {
        if (bis <=5)
        {
            printf("Diagonal para cima e a Direita\n");
        }else {
            printf(" teste inválido");
        }
        bis++;
    } while (bis <=5);
    
    for (int rai=0; rai<8; rai++)
    {
        printf("Rainha move-se em todas as direções\n");
    }

    for ( i=1; i<=2;i++ )
    {
        baixo = 'c';
            
        for ( j=1; j<=i;j++ )
            {
            printf("%c ", baixo);
            }
            printf("\n");
    }
    

    
 }
