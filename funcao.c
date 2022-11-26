#include <stdio.h>

float SOMA(float a, float b){  //funcao
  float resultado;     
  resultado = a + b;
  return resultado;
}

float SUBTRACAO(float a, float b){  
  float resultado;     
  resultado = a - b;
  return resultado;
}

float MULTIPLICACAO(float a, float b){
  float resultado;
  resultado = a * b;
  return resultado;
}

float DIVISAO(float a, float b){
  float resultado;
  resultado = a / b;
  return resultado;
}

int main()
{
    float a, b, r, r1, r2, r3, retorno = 0, retorno1 = 0;  
    int op = 1;
    char letra, letra1;

  do{
    printf("\nDigite o Primeiro Valor: ");  // o usuario só pode digitar apenas numeros
      retorno = scanf("%f", &a);
       
        if(a == 0){
          printf("\nDígite um Valor Diferente de 0: ");  
            retorno = scanf("%f", &a);      
        }


        do{   // identifica se tem letra e pega os numeros limpos a esquerda
          letra = getchar(); // é como uns scanf mas é Voltado pra caracteres
            printf("%c", letra); 
        
        }while(letra != '\n');       // se o caracter lido for  diferente de \n escreve novamneto o valor
    
    }while(retorno == 0);

    do{
      printf("\nDigite o Segundo Valor: ");
        retorno1 = scanf("%f", &b);

       if(a == 0){
          printf("\nDígite um Valor Diferente de 0: ");  
            retorno = scanf("%f", &b);      
        }    
        
        do{
          letra1 = getchar();
            printf("%c", letra1);
        
        }while(letra1 != '\n');
    
    }while(retorno1 == 0);
    

  
    while (op != 5){    // opçoes

    
      printf("\n 1 - Soma");
      printf("\n 2 - Subtração");
      printf("\n 3 - Multiplicação");
      printf("\n 4 - Divisão");
      printf("\n 5 - Sair");
      printf("\n Escolha uma opcao: ");
      scanf("%d",&op);

    switch(op){  // define cada opção
      
      case 1: {  // opcao 1

      r = SOMA(a, b);   // chamando a funcao
        printf("\n A SOMA dos valores %f + %f = %f", a, b, r);

      break;
      }

    case 2: {
      
      r1 = SUBTRACAO(a, b);
        printf("\n A SUBTRAÇÂO dos valores %f - %f = %f", a, b, r1);

      break;
      }

    case 3: {
      
      r2 = MULTIPLICACAO(a, b);
        printf("\n A MULTIPLICAÇÃO dos valores %f * %f = %f", a, b, r2);

      break;
      
      }

    case 4: {
      
      r3 = DIVISAO(a, b);
        printf("\n A DIVISÃO dos valores %f / %f = %f", a, b, r3);

      break;
      }
       
  default:{ // opção padrão 
  
    if( op==5){  // se for escolhida a opção 5, ele pula o while utilizando continue p 
    
     continue;
    }

    printf("\nNÂO EXISTE ESSA OPÇÃO"); // se digitar numero negativo ou acima de 5
      break;
  }
}
}

  if( op==5)
  printf("\nTchau até a Proxíma!!! ");
}