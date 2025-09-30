#include <stdio.h>
//Váriavel global
float totalArrecadado = 0;

//Procedimento: adiciona a contribuição de um participante
void adicionaContribuicao(float valor){
     totalArrecadado += valor;
     printf("Contribuição de R$ %.2f adicionada! Total: R$",valor, totalArrecadado);
}

//Função: calcula quantidade de carne por pessoa(0,5kg por pessoa)

float calcularCarne(int qtdPessoas){
    return qtdPessoas * 0,5;
}


// Procedimento para mostrar o resumo
void mostraResumo(int qtdPessoas){
    float carne = calcularCarne(qtdPessoas);
    float media = totalArrecadado / qtdPessoas;
    printf("\n=== RESUMO CHURRASCO ====\n");
    printf("Participantes: %d\n", qtdPessoas);
    printf("Carne necessaria : %.2f KG\n", carne);
    printf("Média por pessoa: R$ %.2f\n", media);
    printf("===============================\n");
}

int main(){                      
 
  int pessoas;
  float valor;

  printf("Digite o número de participantes: ");
  scanf("%d",&pessoas);


  for (int i =1 ; 1<= pessoas; i++){
    printf("Digite a contribuição do participante %d: R$ ", i);
    scanf("%f", &valor);
    adicionaContribuicao(valor);
  }

  mostraResumo(pessoas);
}
