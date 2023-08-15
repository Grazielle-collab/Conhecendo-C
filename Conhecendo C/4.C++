//
Procedimentos e Funções

Funçoes:

// A ideia de criar programas com blocos de funções vem de uma técnica de projeto
// de algoritmos chamada DIVIDIR PARA CONQUISTAR;

// Trecho de código escrito para solucionar um subproblema; 
// ° Dividir a complexidade de um problema maior;
// ° Evitar repetição de código;
// ° Modularização;

Tipos de retorno: 

// <tipo de retorno> - Obrigatório. Esse parãmetro indica qual
// o tipo de valor a função irá retornar. 
// Pode ser um valor inteiro (int), decimal (float ou duble),
//carctere (char), etc. 

//<nome> - Obrigatório. Parãmetro que especifica o nome que identificará
//a funçaõ. 

Parametros 

// <parametros> - Opcional.

//<retorno> - Quando o tipo de retorno for VOID esse parametro
//não precisa ser usado, porém, quando não for VOID é OBRIGATÓRIO.

Exemplos: 

#iclude<stdio.h>

int somar () {
    return 2 + 3;
}
int main () {
    int resultado = 0; 
    resultado =somar (); 
     printf ("O resultado da funcao e = %d", resultado)
     return 0;
}

Funçoes com ponteiros 

Ponteiro 

// Tipo especiais de variável, que armazena um endereço de memória;
// O acesso á mémoria é feito usando dois operadores:
// ° Asterisco (*): usada para criação do ponteiro; 
// ° "&": Acessar o endereço da memória; 

Exemplo:

// Se eu ver uma variáveu assim; a*, será um ponteiro  

estrutura

<tipo>*<nome_do_ponteiro>;

Exemplo:

// A creiação de um ponteiro só faz sentido se for associadaa 
//algum endereço de memória. 

// 1. 
int ano = 2018;

// 2. 
int *ponteiro_para_ano = &ano; 

Função com ponteiros 

Função que retorna um vetor:

int[10] calcular() --> ERRADO!

// O CORRETO para este caso é utilizar ponterios. 

//        tipo* nome() {
//          tipo vetor [tamanho];
//           return vetor; 
//        }

Exemplo:

#iclude<stdio.h>

int* geraeRandomico () {

    static int r [];
    int a;

    for (a = 0; a < 10; ++a) {
        r[a] = rand (); 
        printf("r[%d] = %d\n", a, r[a]);
    }
    return r;
}

Valores Randomicos gerados 

r [0] = 41
r [1] = 18467
r [2] = 6334
r [3] = 26500
r [4] = 19169
r [5] = 15724
r [6] = 11478
r [7] = 29358
r [8] = 26962
r [9] = 24464

// OBS.: Não é um valor de memória e sim um valor randomico

Função malloc ()

// ° Alocar memória dinamicamente;
// ° Exemplo:
 int* memoria = malloc (100);
 //OBS.: O 100 é a quantidade que armazena na qual é dinamica.
// ° Retorna dois valores: NULL ou um ponteiro genérico; ou seja, 
//se der errado vai dar NULL.


Escopo e Passagem de Parametros

Escopo 

int testar() {
    int x = 10;
    return x;
}
int main() {
    int x = 20;
    printf ("\n Valor de x na funcao main () %d", x);
    printf ("\n Valor de x na funcao testar () %d", testar ());

      return 0;
}

Variável Local: 

//São "enxergadas" somente dentro do corpo da função
//onde foram definidas;

//OBS: "CORPO", seria dentro dos {}

Variável Global:

//Criá-la fora da função, assim ela será visível por todas
//as funções do programa.
// Geralmente adota-se declará-las após as bibliotecas.

Exemplo: Variável global

int x = 10;

int testar (){
    return 2*x;
}
int main () {
    printf ("\n Valor de x global = %d",x);
    printf ("\n Valor de x global alterado na funcao testar ()
    = %d",testar());

    return 0,
}

Passagem de Parametro 

Parametros 

<tipo de retorno><nome>(parâmetros>)
{
    <Comandos da função>
    <Retorno>(não obrigatório)
}

//Ela é uma passagem de Valor: a função cria variáveis locais
//automaticamente para armazenar esses valores e após a execução
//da funçaõ essas variáveis são liberadas.

Exemplo:

#include<stdio.h>

int somar (int a, int b) {
    return a + b; 
}
int main () {
    int result;
    result = somar (10,15);
    printf ("\n Resultado da soma = %d", result);

     return 0;
}


Passagem por Referência

// ° Ponteiro e endereço de memória;
// ° Não será criada uma cópia dos argumentos passados;
// ° Será passado o endereço da variável e função trabalhará
//diretamente com os valores ali armazenados;

Exercicio:

// Foi solicitado a voce automatizar o cálculo de uma reação
//chamada de proteção. Nessa relação, um composto A, de massa
//321,43 g/mol será somando a um composto B de massa 150,72 g/mol.
// Seu programa, além de calcular o composto com base nas informações
//dousuário, deverá também exibir os valores de referencia das combinações:
//(1,2,1,0), (1,4 : 1,0) e 1,0 : 1,6).  

#include <iostream> 

float calcularMassa(float a, float b){
   const float mA=321.43;
   const float mB=150.72;

   printf("\n 1,2 : 1,0 \t: = %f", (1,2*mA+1*mB));
   printf("\n 1,4 : 1,0 \t: = %f", (1,4*mA+1*mB));
   printf("\n 1,0 : 1,6 \t: = %f", (1*mA+1,6*mB));

   return (a * mA) + (b*mB);
}
int main(int argc, char** argv) {
    float a=0, b=0, resultado=0; 

    printf("\n Digite as massas do elemento A e B:");
    scanf("%f %f", &a,&b);

    resultado = calcularMassa(a,b);
    printf("\n Resutado %f", resultado);
        return o;
}

Função Recursiva

// Um algoritmo recursivo resolve um problema dividindo-o em 
//subproblemas mais simples, cujo a solução é a aplicação dele mesmo.
// Caracteristicas:
// ° Ponto de Parada;
// ° Variável na memória de trabalho;
// ° As varáveis são independentes; 

// A função será invocada dentro dela mesma. 

<tipo>funcaoRecursiva(){
    //comandos
    funcaoRecursiva():
    //comandos
}

void main() {
    //comandos
    funcaoRecursiva():
    // A sua funçaoé chamar ela mesma
    //comandos
}

Memoria de trabalho: 

Exemplo:

// Aqui é a primeira vez que a FUNÇÃO RECURSIVA foi chamada
// Na qualfaz o seus comendos e logo chama ela mesma

Primeira Instancia

funcaoRecursiva() {

    variavel1;
    variavel2;
    //comandos;
    funçãoRecursiva()
    //comandos;
    return valor;
}


Segunda Instancia

// Quando ela chama ela mesma ela abre uma segunda instancia 
// Na qual ela cria as mesmas variaveis da primeira e executar os comandos
// E casoela não chega no lugar de parada ela acaba 
//chamando novamente essa função, naqual abre outra instancia dela mesma.

funcaoRecursiva() {

    variavel1;
    variavel2;
    //comandos;
    funçãoRecursiva()
    //comandos;
    return valor;
}

Terceira Instancia

//Com a repetição da segunda abre-se a terceira instancia, na qual 
//cria as mesmas variaveis e comandos até chegar no ponto deverificação 
//que é o ponto de parada.
// Tendo essa parada ela retorna para segunda e primeira instancia.
// Solucionando a instancia 2 e 1 para se ter o valor final.

funcaoRecursiva() {

    variavel1;
    variavel2;
    //comandos;
    //ponto de parada
    
    return valor;
}

Exemplo: 
 
int somar (int valor) {
    if(valor != 0) {
        return valor + somar(valor-1);
    }
    else {
        return valor;
    }
}

// OBS.: ELA PARA DE RETORNAR QUANDO O iF SE TORNAR falso.
 Exemplos de Recursividade

Fatorial e Fibonacci

Fatorial:

// O fatorial de um número qualquer N consiste em multiplicações
//sucessiva até que N seja igual ao valor unitário, ou seja,
//5!=5x4x3x2x1, que resulta em 120.

//OBS.: O simbolo do fatorial é !

Exemplo 

int fatorial (int valor) {
    if(valor != 1){
        return (valor * fatorial - 1);
    }
    else{
        return valor;
    }
}

outros exemplos

Instancia 1

int fatorial(3){
    if(3 != 1){
        return 3 * fatorial(3 -1);
    }
    else{
        return valor;
    }
}


Instancia 2

int fatorial(2){
    if(2 != 1){
        return2 * fatorial(2 -1);
    }
    else{
        return valor;
    }
}


Instancia 3 

int fatorial(1){
    if(1 != 1){
        return valor * fatorial(valor -1);
    }
    else{
        return 1;
    }
}

// obs.: Quando os comendos estiverem voltando estará mutiplicando 
//até dar o valor 6 

// Ele abre todo o problema e quando ele acha o valor ele volta 
//para dar o resultado.


Fibonacci:

// A sequencia de Fibonacci:

Fn = 0                   if n = 0
     1                   if n = 1
     Fn-1+Fn-2           if n > 1

     // OBS.: a SOMA É DO ANTERIOR COM A PROXIMA
     // Ou seja, 0+1=1+2=3+2=5

// Encontrar o n-ésimo elemento da sequencia.

Exemplo: 

int fibonacci(int n) {
    if(n == 0)
        return 0;
     else {
        if (n == 1)
        return 1;
        else
        return fibonacci(n-1) + fibonacci(n-2);
     }
}

Solução NÃO Recurciva do Fibonacci

int Fib (int n)
{
    int i, j, f;
    i = 1; f = 0;
    for (j = 1; j<= n; j++) {
        f + = i; 
        i = f - i; 
    }
    return f;
}

Situação problema: 

// Foi soliciatado a voce implementar o método de Newton para o 
//cálculo da raiz quadrada, porém, usando funções recursivas.

      2
Xn = Xn-1 + N
      2X
        n-1

// Voce precia solicitar ao usuário um número;
// Voce também deve especificar um valor inicial para a raiz 
//e um critério de parada; 

Declaração na biblioteca 

#include<stdio.h>
#nclude<math.h>

//OBS.: <MATH.H>
// Tem que declarar dentro da biblioteca "math"

float calcularRaiz (float n, float RaizAnt)
{
    float rais = (pow (raizAnt, 2) + n)/(2 * raizAnt);
    if (fabs(raiz - raizAnt) < 0.0001)
          return raiz;
    return calcularRaiz (n, raiz);

}

Exemplo:

// Irei inserir valores em um vetror e mostrar esse vetor
//com os valores dobrados

#include <iostream>

void inserir(int a[])
{
    int i;
    for(i=0; i<3; i++)
    {
    printf("\n Digite o valor %d \t", i);
    scanf("%d", &a[i]);
    }
}
void imprimir(int b[])
{
    int i;
    for(i=0; i<3; i++)

{
    printf("\n numeros[%d] = %d", i, (2*b[i]));
}
}
int main(int argc, char**) {

    int numero[3];
    printf("\n Preenchendo o vetor : \n");
    inserir(numero);

    printf("\n valor final");
    imprimir(numero);

    return 0;
}

Qundo usar a recursividade :

// Se a recursividade não foi bem ultilizada ela ira causar transtornos,
//como o não funcionamento do codigo e por visto que pode ter um estouro de pilha.

 // Pontos que posso presumir que será bem empregada e deixar o código mais inchuto no que ajuda a ter um programa muito mais claro 
 // Outro ponto, é que eu posso usar a recursiveidade quando a camada de para ela 
 //não vai ser muito grande. 




