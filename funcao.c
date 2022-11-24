#include <stdio.h>

float SOMA(float a, float b){  //funcao
  float result;     
  result = a + b;
  return result;
}

float SUBTRASAO(float a, float b){  
  float result;     
  result = a - b;
  return result;
}

float MULTIPLICASAO(float a, float b){
  float result;
  result = a * b;
  return result;
}

float DIVISAO(float a, float b){
  float result;
  result = a / b;
  return result;
}

int main()
{
    float a, b, s, s1, s2, s3;

    printf("\nDigite o primeiro valor:");
      scanf("%f", &a);

    printf("\nDigite o segundo valor:");
      scanf("%f", &b);
    
    s = SOMA(a,b);
    printf("\nA soma de %f + %f é %f\n", a,b,s); 

    s1 = SUBTRASAO(a,b);
    printf("\nA subtracao de %f - %f é %f\n", a,b,s1); 

    s2 = MULTIPLICASAO(a,b);
    printf("\nA multiplicacao de %f * %f é %f\n", a,b,s2); 
    
    s3 = DIVISAO(a,b);
    printf("\nA divisao de %f com %f é %f\n", a,b,s3); 
    return 0;
}
