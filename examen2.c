#include <stdio.h>

void Informacion (int c[3],float e[3][1], char n[3][10]);


int main()

{
int c[3];
char n[3][10];
float e[3][1];

Informacion(c[3],e[3][1],n[3][10]);


    printf("operando 1 :  %d\n",c[0]);
    printf("operando 1 :  %s\n",n[0]);


    return 0;
}


void Informacion (int c[3],float e[3][1], char n[3][10])
{

  printf("Dame la Clave del usuario ");
    scanf ("%d",&c[0]);
    printf("dame el nombre del usuario ");
    scanf ("%s",&n[0]);


	return ;
}
