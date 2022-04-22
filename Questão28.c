//Escreva um programa que receba dois valores numericos X e Y (unsigned char ) e esconda todos os bits de X em cada um dos bits menos significativos dos 4 elementos imediatamente anteriores e posteriores a Y. (Obs.:  Nao utilizar valores para Y menores que 5).


#include <stdio.h>

 int Binario(int Num){

   if(Num == 0){

  printf("%d", Num);

} else{
     
   Binario(Num/2);
   printf("%d", Num % 2);

  }
}


int main() {
    unsigned char X, Y;

    puts("Digite o valor de X:");
    scanf("%d", &X);
    puts("Digite o valor de Y:");
    scanf("%d", &Y);

     puts("\n --- Resultado --- \n");

   printf("O valor de X: %d", Binario(X));
   printf("O valor de Y: %d", Binario(Y));
  
    return 0;
}



