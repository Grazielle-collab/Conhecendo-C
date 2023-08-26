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


