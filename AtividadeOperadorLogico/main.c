#include <stdio.h>
#include <stdlib.h>

int main()
{/*: Tri�ngulo � uma forma geom�trica que tem tr�s
lados, e cada lado � menor que a soma dos outros dois lados.
� um tri�ngulo quando A<B+C, quando B<A+C e quando C<A+B.
(Sendo A,B e C os lados de um tri�ngulo).
*/

int A, B, C;

printf("Digite o primeiro valor do triangulo: ");
scanf("%d",&A);
printf("Digite o segundo valor do triangulo: ");
scanf("%d",&B);
printf("Digite o terceiro valor do triangulo: ");
scanf("%d",&C);


if(A<B+C &&  B<A+C && C<A+B)
    printf("Os valores digitados formam um triangulo ");

else
    printf("Os valores digitados nao formam um triangulo \n");

    printf("\n");

    /*Um tri�ngulo � �is�sceles� quando possui dois
lados iguais e um diferente, (A=B ou A=C ou B=C); � �escaleno�
quando possui todos os lados diferentes, (A != B e B != C) e �
�equil�tero� quando possui todos os lados iguais, (A=B e B=C).
*/

if(A==B || A==C )
    printf("O triangulo e isoceles ");
if(A!=B && B!=C)
    printf("O triangulo e escaleno ");
if(A==B && B==C)
    printf("O triangulo e equilatero");


 return 0;



}
