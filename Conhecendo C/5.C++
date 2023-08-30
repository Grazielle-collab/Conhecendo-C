//
//Estrutura de dados 
// O que é estrutuda de dados 
// Hoje em dia dizem que o petroleo do mundo chama se DADOS PQ TUDO QUE FIZEMOS GERA 
//MUITOS DADOS.
// Temos dispositivos que acabem envolvendo as nossas vidas como celulares 
//que sebem de tudo que gostamso e onde iremos ou prentendemos ir
// E tudo isso gera muitos dados 
// Nesse caso, precisamos de estruturas que armazene esses dados 
//E até o momento eu aprendi com estruturas do tipo int, float e até um vetor
//e mesmo assim não conseguimos gurdar muitos dados.
//E só conseguimos guardar dados do mesmo tipo. 

// Agora pensa em um programa ususal de uma empresa, e faz um cadastro de cliente 
//esse cadastro de cliente ele precisa de muito mais do que somente um nome
//ou  seja, nome, endereço, CPF, TELEFONE. 
// Tudo isso ja se configura tipos de dados 
// Exemplo: 
// um nome é um charp (char)
// a idade é um inteiro (int)
// o telefone é um duble (do)
//vc percebe que fica inviavel toda vez quando é um usuário, eu tenho que 
//declarar essas variáveis para ele. 
// E` muito mais facil usar uma estrutura 
// E com a estrutura de dados temos que conseguir fazer todos esses 
//dados de diferentes tipos que se organize tanto para nós 
//inserir, remover e fazer uma busca. essas estruturas de dados nos auxilia nisso...

// O desafio é listar os produtos de um cliente em  codigo

Lista 

// Ela se acemelha bastante com a lista de super mercado.

// Antes de entender a lista, e as demais estruturas de dados 
//teremos que conhecer mais um tipo de variável. 
// É uma variável muito especial, pq além de guardar diversos tipos de dados
//ela tbm guarda diversos tipos diferente de dados. 

// Exemplo: 

// ela pode guardar charp, int, duble float e até Vetor, tudo dentro dela 

Struct 

// Variável que armazena valores de tipos diferentes 

#include<stdio.h>

  Struct automove {
    char modelo[20];
    int ano; 
    float valor;
  }

  main() {
    struct automovel dadosAutomovel; 
    {
        
    };
    
  }

  Lista Ligada

  // ° Etrutura de dados linear e dinamica;
  // dinamica da para incerir dados e resolver a hora que eu desejar.
  // ° Cadaelemento da sequencia é armazenado em uma célula da lista;
  //celula da lista eu declaro os valores na Struct, ou seja, o que eu declarar na lista estara na minha Struct.


  // prim 
  // info1 --> info2 --> info3 
  
  //exemplo: 

  // cada valor no info é uma celula.
  // mas algo muito importante se tratando de lista é um quadradinho que esta sendo representado 
 //que se denomina em NÓ.
 //PQ NÓ? uma celula esta apontando para outra no que gera um 
 //encadeamento desses valores. Ou seja, um NÓ que chama o outro.
 // e essa sequencia permite que adicionamos valores.

 // Como declarar esse valor 

 struct lista {
    int info;
    struct lista* prox;
 };
 typedef struct lista Lista;
 
   struct alunos {
    char nome[25];
    struc alunos* prox;
   };
   typedef struct alunos classe;

   // OBS.: A lista é uma das mais complexas das estrutura de dados que temos
   //e ela tem alguns passos que nós conseguimos montar ela

   //Toda vez que tratar de uma estrutra de NÓ, teremos que inicialisar
   //pq toda struct tem uma inicialização 

   // Quais os passos para criar a lista 

// ° Criação ou definição da estrutura de uma lista.
// ° Inicialização.
// OBS.: Como estamos trabalhando com um ponteiro e com essa
//inicialização sempre será em NULL.
// ° Inserção com base em um endereço como referencia.
// ° Alocação de um endereço de nó para inserção na lista.
// ° Remoção do nó com base em um endereço como referencia. 
// ° Deslocamento do nó removido da lista. OBS; se esquesermos de remover acabamos ocupando memoria 

Lista* inicializa (void)
{
    return NULL;
}
int main() {
Lista* listaFinal;
listaFinal = inicializar();
listaFinal = inserir(listaFinal, 13);
listaFinal = inserir(listaFinal, 56);
}

  Operações com Lista Ligadas Inserção.

 // A lista não tem uma regra de onde inserir um elemento. 
 // Então podemos inserir ele no inicio, meio e fim. Nesse caso complica um pouco.
 //Se a logica permite essas tres implementações teremos que cuidar saparadamente.

Adicionar elementos na lista 

// ° Para inserirmos um elemento na lista ligada, é necessario alocarmos o 
//espaço na memória;
// ° Atualizar o valor do ponteiro;

 
 Posição do inserção 

 // ° Final da lista;
 // ° Primeira posição; 
 // ° No meio da lista;

Lista inserir

 Lista* inserir (Lista* l, int i) {
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo -> info = i;
    novo -> prox = l;
    return novo;
 }


Lista inserir posisão 

Lista* inserirPosição(Lista*l,int post, int v){
  int cont = 1;
  Lista *p = l;
  Lista* novo = (Lista*)malloc(Lista);
  while(cont != post){
    p = p -> prox;
    cont++;
  }
}

{
  novo -> info = v;
  novo -> prox = p -> prox;
  p -> prox = novo;
  return l;
}

Inserir no fim da Lista

lista* inserirFim(Lista* l, int v){
  Lista *p = l;
  Lista* novo = (Lista*)malloc(sizeof(Lista));
  while (p -> prox != NULL){
    P = P -> PROX;
    CONT++;
  }
  novo -> info = v;
  novo -> prox = p -> prox;
  p -> prox = novo;
  retur l;
}

Operações nas Listas ligadas 

Remover o elemento da lista: 

// Não precisa ficar fazendo remoções das listas 
// BOS.: Pode remover uma que abrange as tres 

Exemplo:

Adicionar elementos na lista 

 lista* remover (lista* I, int v) {
  Lista* anterior = NULL;
  Lista* p = l;
  while (p != NULL && P -> info != v) {
    anterior = p;
    p = p -> prox; 
  }

  if (p == NULL)
  return l; 

  if (anterior == NULL) {
    l = p -> prox; 
  } else {
    anterior -> prox = p -> prox;
  }
  return l;
 }

 // OBS.: Não remover um elemento em uma lista, nós acabamos fazendo apenas uma que abrange as tres 
 // com a condição de ver se o prox é nulo veremos tanoto no elemento 
 //do meio quanto no final. 

 exemplo:
 // Se eu for remover o do meio esse meu anterior vai apontar para o 
 //proximo e não mais para ele.

 Outras operções na lista ligada

 // ° Percorrer a lista ligada;
 // ° Saber quaiselementos fazem parte da estrutura de dados;
 // ° Verificar se um elemento se encontra na lista ligada 

 Imprimir

 void imprimir (lista* l) {
  Lista* p;
  printf("Elemento:\n"):
  for (p = l; p != NULL; p = p -> prox) {
    printf("%d ->", p -> info);
  }
 }

 Lista buscar 

 Lista* buscar(Lista* l, int v){
  Lista* p;
  for (p = l; p != NULL; p = p -> prox) {
    if (p -> info == v)
    return p;
  }
  return NULL;
 }

Pilha

// Quando se tratamos de pilha sempre tiramos o primeiro elemento 
// Qunado inserir algo na prilha sempre irá no topo

// São estruturas de dados do tipo LIFO (last-in first-out), onde o
//primeiro a ser retirado.

// OBS.: A pilha segue uma regra totalmente diferente da lista

Duas opções basicas:

// ° Empilhar um elemento (push())
// ° Desempilhar um elemento (pop())

// Adicionar um push 36 , push 7 , pop , push 23 , pop

struct Pilha {

  int topo;
  int capacidade;
  float* proxElem;
};

struct Pilha minhaPilha;

void cria_pilha(struct Pilha *p, int c ){
  p -> proxElem = (float*) malloc (c* sizeof(float));
  p -> topo =1;
  p -> capacidade = c;
}

void push_pilha(struct Pilha *p, float v){
  p -> topo++;
  p -> proxElem [p -> topo] = v;
}

float pop_pilha (struct Pilha *p){
  float aux = p -> proxElem [p -> topo];
  p -> topo--;
  return aux;
}


Fila 

// São estruturas de dados do tipo FIFO(first-in first-out), onde
//o primeiro elemento a ser inserido, será o primeiro a ser
//retirado, ou seja, adiciona-se itens no fim e remove-se do início.

Passos para a criação de uma Fila:

// ° criar uma fila vazia;
// ° inserir elemento no final; 
// ° retirar um elemento do início;
// ° verificar se a fila está vazia;

#define N 100

struct fila {
  int n;
  int ini;
  char vet[N];
};

tupedef struct fila Fila;

Fila* inicia_fila (void){
  Fila* f = (Fila*) malloc(sizeof(Fila));
  f -> n = 0;
  f ->  ini = 0;
  return f;

}

void inserir_fila (Fila* f, char elem){
  int fim;
  if (f -> n == N){
    printf("A fila está cheia \n");
    exit(1);
  }

  fim = (f -> ini + f -> n)%N;
  f -> vet[fim] = elem; 
  f -> n++;
}

float remove_fila (Fila* f){
  char elem;
  if (fila_vazia(f)){
    printf("A Fila esta vavia\n");
    exit(1);
  }

  elem = f -> vet[f -> ini];
  f -> ini = (f -> ini + 1) % N;
  f -> n--;

  return elem;
}

Lista 

// Exemplo: um cliente pediu para fazewr um programa e que insira 
//alguns elementos na lista. produtos


