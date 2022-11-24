#include<stdio.h>
#include<conio.h>

int soma1(int pn, int sn); // funcao


int main (void){

 int n1, n2, r,

    printf('Escreva o primeiro numero: ');
      scanf('%d', &n1);
    
    printf('Escreva o segundo numero: ');
      scanf('%d', &n2);

    r = soma1(n1 , n2);
      printf();
}
int soma1(int N1, int N2) //multiplica recebe N1,N2 e retorna um int
{
  int resultado;
  resultado = N1 * N2;
  return(resultado); //retornando o valor para main
}