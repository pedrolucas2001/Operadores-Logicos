#include <stdio.h>
#include <stdlib.h>

int main()
{
   int codigo;

   printf("Digite o codigo do genero da pessoa: ");
   scanf("%d",&codigo);

   if(codigo ==0 || codigo == 1)
        printf("O codigo e valido ");
   else
        printf("O codigo e invalido ");





    return 0;
}
