 Algoritimos

//uma sequencia ordenada de passos que deve ser seguida para a realização de uma tarefa;
// ENTRADA -> PROCESSAMENTO -> SAÍDA

//IMPORTANTE:
//° Passos finitos; ou seja, não podemos ter algoritimos infinitos, temos que solucionar problemas com passaos finitos
//° Sem redundância; ou seja, não pode ter redundancia, temos que evitar que aconteça repetiççoes de linha de codigos
//° Sem subjetividade; ou seja, tem que ser algo exato, OBJETIVO
//° Deve ser claro e objetivo; ou seja, sempre CLARO, OBJETIVO. 
//temos que ter uma programação limpa possivel sem gambiarras nos algoritimos

 Algoritimos

// Formas de representação:
// ° Decrição Narrativa;
// ° Fluxograma;
// ° Pseudocódigo;

 Descrição Narrativa

// Utiliza a linguagem natural;
// Receita do bolo:
// 1. Misturar todos os ingredientes;
// 2. Untar a forma;
// 3. Despejar a mistura na forma;
// 4. Levar a forma para o forno;
// 5. Deixar o bolo 45 minutos no forno á 180°;
// 6. Retirar a forma do bolo;
// 7. Desenformar o bolo;

// OBS.: nem sempre eu tenho um jeito de fazer o bolo a mesma coisa dos algoritimos que tem diversas VARIAÇÕES

 Descrição Narrativa

// Receita do bolo 2:
// 1. Misturar os ingredientes 
// 2. Untar a forma com manteiga 
// 3. Despejar a mistura na forma
// 4. (SE) houver coco ralado (ENTÃO) despejar sobre a mistura
// 5. Levar a forma para o forno
// 6. (ENQUANTO) não corar, deixar a forma no forno
// 7. Retirar a forma do bolo
// 8. Deixar esfriar

// OBS.: REPARA QUE MOSTRA QUE TENHO UMA CONDIÇÃO DIFERENTE NESSE SEGUNDO PASSO 

 Descrição Narrativa

// Vantagem:
// ° O uso da linguagem natural;

// Desvantagem:
// ° Imprecisão; ou seja, ela pode traser um puco de subjetividade
// ° Desvantagem; ela não é tão metodologico e é imprecisa

 Fluxograma

// ° Representação gráfica; ou seja, iremos desenhar esse nosso algoritimo
// ° Cada forma geométrica define uma função genérica;  
// ° As formas geométricas são ligadas por flechas que indicam o fluxo da execução;

 Pseudocódigo

// ° Assemlha-se a forma em que os programas são escritos;
// ° Portugues estruturado; obs: estuturado é diferente de linguagem estruturado
// ° A intenção é chegar na resolução do problema;

 Exemplo: 

// algoritimo "Calcula Media"
// var
      // nota 1, nota 2, media: real
// inicio
     // escreva("Digitea primeira nota:")
     // leia(nota 1)
     // escreva("Digite a segunda nota:")
     // leia(nota 2)
     // media<-(nota 1+nota 2)/2
     // escreve("Sua média é", media)
// fim algoritimo

// OBS.: VAR; ele vai mostrar as varaiaveis que irei ter no meu problema
// o que seria VARIAVEL: ela é uma locação de memoria. tipo para nota 1 e 2 e para media

 Variáveis

// Um local que armazena um conteúdo especifico na memória principal do computador

    VARIÁVEL | CONTEÚDO
// Nome        Grazielle nesse caso eu guardei CARACTERES, simbolos e letras
// Idade          30     nesse caso eu guardei UM VALOR NUMERICO 
// Telefone  9999-9999    nesse caso eu guardei UM VALOR NUMERICO

 Tipos de Dados

// Especifica as características, ou seja, os valores e operações
//possíveis de serem utilizadas com um dado desse tipo

   TIPO       |       DESCRIÇÃO

// Inteiro    | Representa valores inteiros. Ex: 18; 300; -100; ou seja, NEGATIVOS E POSITIVOS
// Real       | Valores reais (decimal). Ex.: 5.5; 899.3; -22.22; ou seja, os valores que tem a casa decimal as ;;;
// Caractere  | Sequencia de um ou mais caracteres. Ex.: Leo; A; as palavras
// Lógico     | Valores lógico: Verdadeiro, Falso. tem os valores logicos chamado BOOL

// REGRAS DE VARIÁVEIS

// Identificação única;
// Nomes para as variáveis significativos; ou seja, nome, endereço
// Caracteres válidos: númericos, letras 
//maiúsculas ou minusculas, underline (_);
// Caracteres inválidos: "branco", caracters especiais 
//(@,$,*,+,-,!,etc...) esses caracteres eu não posso usar para dar nome as variaveis
// O primeiro caractere de uma variável deve ser uma letra;
// Não pode usar palavras reservadas. ela faz parte da sintaxe que ja possue funções pré estabeleciadas

 // Exemplos de Variáveis

exemplos válidos:
 // > Salario, idade, nome, nota1, X2, nome_aluno

exemplos inválidos:
// > Endereço 
// > Nome 1
// > 1valor
// > Nota#

// EXERCICIOS 

// ° Fazer um fluxograma que apresenta o cadastro de um
// aluno, com as seguintes informações:

// Nome;
// Endereço;
// Idade;

// ° Apresentar as variáveis, e dar atenção aos seus TIPOS
//E CARACTERÍSTICAS.

Linguagem C 

// 1- Inicio do programa: precisamos da iniciação do programa, pois iremos mostrar 
//as bibliotecas que tem algumas funcionalidades prontas, usamos essas
//bobliotecas para nos auxiliar.
// 2- Definição das variáveis: as informações do 2 até o 5 tem que estar dentro de um boloco
//todas as linguagens de programação tem que dar um start nas operações
//Obs.: Aqui no caso do C é o MAIN, ele é um bloco que faz a criação 
// do programa do computador, mas tem que ser dentro do main.
// 3- Instruções de leitura dos dados
// 4- Instruções do formato de escrita
// 5- Demais instruções e funções
// 6- Fim do programa

Bibliotecas 

// como funcionas as bibliotecas e quais as funções

// As primeiras linhas de programação são definidas pelas
//bibliotecas.
// ° stdio: funções de entrada e saída;
// ° stdlib: transforma string em números; 
// ° string: manipulação de string;
// ° math: operações matemáticas; 

// #include <stdlib.h> : é dessa forma que começamos as inserções
// as declarações das bibliotecas
 
 Função main ()

 // Início da execução de um programa em C 

 // main() | int main () | void main ()
//  {        {             {
//  }        }             }

main () // é declarado assim para uma função de um programa
int main () // é usada para RETORNAR O VALOR PARA ELE, 
//É COMO SE ESTIVESSE VOLTANDO UM VALOR FINAL
void main () // ele é quando não retorna nada 
  
// E quando encontramos variavel em C
Variáveis  

   Tipo       |  Declaração em c
// Inteiro    |  int
// Real       |  float
// Caractere  |  char

Exemplo:
// #include <stdlib.h>
// void main() {
//     int valor1, valor2, soma;
// }

Palavras reservadas

// SÃO TIPOS DE VARIÁVEIS QUE NÓS DECLARAMOS

// auto      double  int       struct
// break     else    long      switch
// case      enum    register  typedef
// char      extern  return    union
// const     float   short     unsigned
// continue  for     signed    void
// default   goto    sizeof    volatile
// do        if      static    while
 // OBS: PARA DECLARAR AS VARIAVEIS É IMPORTANTE 

  Operadores 

 Operadores  |  Função       |     Exemplo 
   +           Adição            y+x; 2+9;
   -           Subtração         nota-extra; v-n;
   *           Multiplicação     7*8; a*b; n*4;
   /           Divisão           n1/n2; media/2;
   %           Resto da divisão  15 % 2

 // OBS: PODEMOS SOMAR DOIS VALORES NUMERICOS QUANTO Variaveis

 Opredor da atribuição 

// ° Fornece valor a uma variável;
// ° Pode ser uma expressão;
// ° Símbolo:
// °    =

Exemplo:

a = 2;
a = b+c;
a = b*2;

 Operadores relacionais 

 // OBS.: é muito importante!

 Operador em  |  Operador em  |  Descrição
 linguagem C  |  algoritimos  |
      >              >        // Maior
      <              <        // Menor
      >=             >=       // Maior ou igual
      <=             <=       // Menor ou igual
      ==             =        // Igual
      !=             <>       // Diferente


  Operador em  | Operador em  | Operador em 
  Linguagem C  |  algoritimos |  algoritimos
    &&                E       // Lógico E - conjunção
    ||                OU      // Lógico OU - disjunção
    !                 NÃO     // Lógico NÃO - negação
    

 Comando de saída de dados
 
 // As informações, mensagens e conteúdo de variáveis são enviadas
 //para o usuário visualiá-las;

 // ° printf ("expressão controle", listas de argumentos);

Exemplos:
 printf("O valor entrado foi %d", valor1);
 // o que vai aparecer para o meu usuário o valor %d e o valor1
 // exemplo: O valor 1 fosse = 10, no que vai aparecer para o meu
 //usuario a seguinte questão, o meu resutado foi 10 e nao %d
 //o %d vai refletir o valor que esta na minha variável
 // e sempre tem que estar dentro das "" para mostrar aos usuarios

 Comando de entrada de dados

// As informações dos usuarios são transferidas para variavel
// do programa;

Exemplo:
SCANF ("expressão de controle", lista de argumentos);

 EX: scanf ("%d", &valor;)
// O TIPO DE VARIÁVEL é o décimal %d 
// O & ecomercial representa o endereço dessa variavel 
// O valor que pegou do %d vai para o valor
 
#include <iostream>

int main(int argc, char** argv) {

    char nome [30];
    char endereço [30];
    int idade;

    printf("Nome \n");
    scanf("%s", &nome);

    printf("Endereço \n");
    scanf("%s", &endereço);

    printf("Idade");
    scanf("%d" &idade);

    printf("\n Nome: %s", nome);
    printf("\n Endereço: %s", endereço);
    printf("\n Idade: %d", idade);

    return 0;
}

 Outro EXEMPLO

 #include <iostream>

/* run this program using the console pauser or add your own getch */

int main(int argc, char** argv) {
    float nota1;
    float nota2;
    float media;

    printf("Insira nota 1: \n");
    scanf("%f, &nota1");

    printf("Insira nota 2:");
    scanf("%f", &nota2);

    madia = (nota1 + nota 2) / 2;

    printf ("media = %f", media);

    // Pode ser um do lado do outro...] 

    return 0;
}





#include <stdlib.h>

void main() {
    int valor1, valor2, soma;
}

// Comandos de saída de dados]
// As informações, msg e conteúdo de variáveis são enviadas para o usuario visualiá-las;]
// PRINTF ("expressão de controle", listas de argumentos);] 
printf("expressão do controle", listas de argumentos);
printf("o valor encontrado foi %c",valor1); // Permite a escrita de apenas um caractere]
printf("o valor encontrado foi %d",valor1); // Permite a escrita de números inteiros decimais]
printf("o valor encontrado foi %e",valor1); // Realiza-se a escrita de números em notção cientifica] 
printf("o valor encontrado foi %f",valor1); // É feita a escrita de números reais (ponto flutuante)]
printf("o valor encontrado foi %s",valor1); // Efetua-se a escrita de uma série de caracteres]

scanf("expressão de controle", lista de argumentos);
scanf("%d",&valor);

//
// Comando de entrada de dados]
// As informações dos usuarios são transferidas para variavel do programa;]
// SCANF ("expressão de controle", lista de argumentos);
// EX: scanf ("%d", &valor;)

main() {
    int valor;
    printf("Digite um número");
    scanf("%d",&valor);
    printf("\n o número é %d",valor);
}