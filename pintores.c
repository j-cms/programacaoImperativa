/* Exercício Único (valor: 10,0 pontos): Considere o programa contido no arquivo 
Pintores.c, em anexo. Estenda o código de modo que o programa permita o 
usuário pesquisar todos os pintores nascidos em certo mês. O programa deverá 
apresentar uma interface de usuário em conformidade com os exemplos de 
interação a seguir. */

#include <stdio.h>
#include <string.h>
#define NUM_MESES 12
const int NUM_PINTORES = 20;
enum Mes {JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ };
char mes_str[NUM_MESES][10] = {"janeiro",  "fevereiro", 
"março","abril","maio","junho","julho","agosto","setembro", "outubro","novembro", 
"dezembro"};
struct Pessoa {
  char nome[50];
  enum Mes mes; // mês de aniversário
};
int main() {
  struct Pessoa pintor[NUM_PINTORES];
  pintor[0].mes = JAN;
  strcpy(pintor[0].nome, "Leonardo da Vinci");
  pintor[1].mes = ABR;
  strcpy(pintor[1].nome, "Sandro Botticelli");
  pintor[2].mes = AGO;
  strcpy(pintor[2].nome, "Georges Seurat");
  pintor[3].mes = ABR;
  strcpy(pintor[3].nome, "Vincent van Gogh");
  pintor[4].mes = SET;
  strcpy(pintor[4].nome, "Paul Gauguin");
  pintor[5].mes = JUN;
  strcpy(pintor[5].nome, "Edouard Manet");
  pintor[6].mes = OUT;
  strcpy(pintor[6].nome, "Paul Cezanne");
  pintor[7].mes = JUN;
  strcpy(pintor[7].nome, "Auguste Renoir");
  pintor[8].mes = JUN;
  strcpy(pintor[8].nome, "Claude Monet");
  pintor[9].mes = AGO;
  strcpy(pintor[9].nome, "Pablo Picasso");
  pintor[10].mes = DEZ;
  strcpy(pintor[10].nome, "Edgar Degas");
  pintor[11].mes = ABR;
  strcpy(pintor[11].nome, "Edvard Munch");
  pintor[12].mes = JAN;
  strcpy(pintor[12].nome, "Michelangelo Merisi (Caravaggio)");
  pintor[13].mes = JAN;
  strcpy(pintor[13].nome, "Michelangelo Buonarroti");
  pintor[14].mes = SET;
  strcpy(pintor[14].nome, "Tarsila do Amaral");
  pintor[15].mes = AGO;
  strcpy(pintor[15].nome, "Gustav Klimt");
  pintor[16].mes = NOV;
  strcpy(pintor[16].nome, "Rembrandt van Rijn");
  pintor[17].mes = MAI;
  strcpy(pintor[17].nome, "Amedeo Modigliani");
  pintor[18].mes = SET;
  strcpy(pintor[18].nome, "Caillebotte");
  pintor[19].mes = SET;
  strcpy(pintor[19].nome, "Joseph Turner");
  /* menu */ 
  for (int i =0 ; i< NUM_MESES ; i ++){
    printf("(%d) %s \n", i+1, mes_str[i]);
  }
  
  printf("\n");
  
  int mes_desejado;
  printf("Escoha um mês pelo seu número  : ");
  scanf("%2d", &mes_desejado);
  printf("\n");
  while (mes_desejado > 12) {
    printf("Escolha inválida!");
    return 0;
  };
  
  printf("\n");
   /* fazer um for pra ver quais os pintores e  ja imprimir */ 
  
  int n_pintores=0;
  printf("Pintores nascidos no mês de %s:",   mes_str[mes_desejado-1]);
  printf("\n");
  for (int i = 0; i < NUM_PINTORES; i++){
    if (pintor[i].mes == mes_desejado-1){
      n_pintores+= 1;
      printf("(%d) %s \n", n_pintores, pintor[i].nome);
    }
  }
  
  /* formatar a saida com o numero de pintores */
  switch (n_pintores){ 
    case 0:
      printf("\n");
      printf("==> Nenhum pintor foi encontrado.");
      break;
    case 1: 
      printf("\n");
      printf("==> Apenas um pintor foi encontrado.");
      break;
    default:
      printf("==> %d pintores foram encontrados", n_pintores);
    break;
      
    }
  return 0;
}
