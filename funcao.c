#include <stdio.h>

float SOMA(float a, float aa, float b, float bb){  //funcao
  a =  a + b;
  b = aa + bb;

  printf("\n Resultado da soma %.3f + %.3fi\n",a,b); 
}

float SUBTRACAO(float a, float aa, float b, float bb){  
  a = a - b;
  b = aa - bb;

  printf("\n Resultado da subtração %.3f + %.3fi\n",a,b); 
}

float MULTIPLICACAO(float a, float aa, float b, float bb, float c, float d){
  c = a * b + (aa * bb) * (-1);
  d = (a * bb) + (aa * b); 
  
  printf("\n Resultado da multiplicação %.3f + %.3fi\n",c,d); 
}

float DIVISAO(float a, float aa, float b, float bb, float c, float d, float e, float f, float g){
  c = a * b + (aa * bb) * (-1);
  d = (a * bb) + (aa * b); 
  e = (b * b) + (bb * bb) ;
  f = c / e * (-1);
  g = d / e;
  
  printf("\n Resultado da divisão (%.3f) + (%.3fi)", g, f);
}

float CONJULGADO(float a,float b, float aa, float bb){
  float m = -1;
  aa = aa * m;
  bb = bb * m;

    printf("\nConjulgado");
    printf("\n Primeiro Valor %.3f + (%.3fi)\n",a,aa); 
    printf("\n Segundo Valor %.3f + (%.3fi)\n",b,bb); 
}

float IGUAL(float a,float aa, float b, float bb){
    
    if(a == b && aa == bb){
      printf("\n O Primeiro e o Segundo Valor Real são os mesmos");
      printf("\n O Primeiro e o Segundo Valor Imaginario são os mesmos");
    }
      else if(a == b && aa != bb){
        printf("\n O Primeiro e o Segundo Valor Real são os mesmos");
        printf("\n O Primeiro e o Segundo Valor Imaginario NÂO são os mesmo");
    }
      else if(a != b && aa == bb){
        printf("\n O Primeiro e o Segundo Valor Real NÂO são os mesmos");
        printf("\n O Primeiro e o Segundo Valor Imaginario são os mesmo");
    }
      else if(a != b && aa != bb){
        printf("\n Não são iguais");
    }  
}
float PUROS(float a,float aa, float b, float bb) {

    printf("\nReal");
      if(a != 0 && aa == 0){
        printf("\nPrimeiro valor é Puro");
      }
      else
        printf("\nPrimeiro valor Nâo é Puro");
    
     if(b != 0 && bb == 0){
        printf("\nSegundo valor é Puro");
      }
      else{
        printf("\nSegundo valor Nâo é Puro");
      }

    printf("\nImaginario");
      if(a == 0 && aa != 0){
        printf("\nPrimeiro valor é Puro");
      }
      else
        printf("\nPrimeiro valor Nâo é Puro");
    
     if(b == 0 && bb != 0){
        printf("\nSegundo valor é Puro");
      }
      else{
        printf("\n Segundo valor Nâo é Puro");
      }


} 
int main()
{
    float a, aa, b, bb, r, r1, r2, r3, c, d, e, f, g, retorno = 0, retorno1 = 0;  
    int op = 1;
    char letra, letra1;

  do{
    printf("\nDigite o Primeiro Valor Real: ");  // o usuario só pode digitar apenas numeros
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
      printf("\nDigite o Primeiro Valor Imaginario: ");
        retorno1 = scanf("%f", &aa);

       if(a == 0){
          printf("\nDígite um Valor Diferente de 0: ");  
            retorno = scanf("%f", &aa);      
        }    
        
        do{
          letra1 = getchar();
            printf("%c", letra1);
        
        }while(letra1 != '\n');
    
    }while(retorno1 == 0);

        do{
      printf("\nDigite o Segundo Valor Real: ");
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

        do{
      printf("\nDigite o Segundo Valor Imaginario: ");
        retorno1 = scanf("%f", &bb);

       if(a == 0){
          printf("\nDígite um Valor Diferente de 0: ");  
            retorno = scanf("%f", &bb);      
        }    
        
        do{
          letra1 = getchar();
            printf("%c", letra1);
        
        }while(letra1 != '\n');
    
    }while(retorno1 == 0);


    while (op != 8){    // opçoes

    
      printf("\n 1 - Soma");              // não da pra colocar letra que buga
      printf("\n 2 - Subtração");
      printf("\n 3 - Multiplicação");
      printf("\n 4 - Divisão");
      printf("\n 5 - Conjulgado");
      printf("\n 6 - Complexos Iguais");
      printf("\n 7 - Puros");
      printf("\n 8 - Sair"); 
      printf("\n Escolha uma opcao: ");
      scanf("%d",&op);

    switch(op){  // define cada opção
      
      case 1: {  // opcao 1

      SOMA(a, aa, b, bb);   // chamando a funcao
      
      break;
      }

    case 2: {
      
      SUBTRACAO(a, aa, b, bb);

      break;
      }

    case 3: {
      
      MULTIPLICACAO(a, aa, b, bb, c, d);

      break;
      
      }

    case 4: {
      
      DIVISAO(a, aa, b, bb, c, d, e, f, g);
  
      break;
      }

    case 5: {
      
      CONJULGADO(a, aa, b, bb);
  
      break;
      }
    
    case 6: {
      
      IGUAL(a, aa, b, bb);
  
      break;
      }
    
    case 7: {
      
      PUROS(a, aa, b, bb);
  
      break;
      }

  default:{ // opção padrão 
  
    if( op==8){  // se for escolhida a opção 8, ele pula o while utilizando continue p 
    
     continue;
    }

    printf("\nNÂO EXISTE ESSA OPÇÃO"); // se digitar numero negativo ou acima de 5
      break;
  }
}
}

  if( op==8)
  printf("\nTchau até a Proxíma!!! ");
}
