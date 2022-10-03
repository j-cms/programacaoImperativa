/* Exercício 1 (valor: 5,0 pontos): Elabore um programa em C que calcule e
imprima os n primeiros termos da Sequência de Fibonacci, onde n é um valor
inteiro positivo fornecido pelo usuário. Muito embora a Sequência de Fibonacci 
seja, usualmente, definida de forma recursiva, o programa deve calcular os n termos
por meio de um algoritmo iterativo, isto é, com uso de um comando de repetição. 
Mais especificamente, o programa deve utilizar o comando for da
linguagem C, sendo que cada iteração do comando deve calcular e imprimir um
termo da sequência. Não pode ser usado o comando break, nem o comando
continue. */

#include <stdio.h>
int valor1 = 0;
int valor2 = 1; 
int proximo;
int main() {
  int n;
  printf("Quantos números da Sequência de Fibonacci deseja mostrar? ");
  scanf("%d", &n);
  
  for (int i = 0; i<n  ; i++){
    
    printf("Termo nº %d é %d", i, valor1);  /* começa a printar daqui para incluir 
o numero 0 na sequencia */
    printf("\n");
    proximo = valor2 + valor1;
    valor1 = valor2;
    valor2 = proximo;
  }
  return 0;
}
