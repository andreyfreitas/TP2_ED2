#include<iostream>
#include<vector>
using namespace std;
#define TAM_TAB 23
static int level = 0;
static int cont_node = 0;
struct node {
	int data;
	node * next;
};
typedef node * Lista;

Lista* cria_lista();
void libera_lista(Lista *);
Lista * cria_segmento();
void libera_segmento(Lista *);
int tamanho_lista(Lista *);
int tamanho_segmento(Lista *);
bool lista_vazia(Lista *);
bool segmento_vazio(Lista *);
bool inserir_lista(Lista *, int);
bool inserir_segmento(Lista *, int);
bool consulta_lista(Lista*, int);
Lista * copia_lista(Lista *);
void inserir_copia_lista(Lista *&, Lista *);
bool apaga_node(Lista *, int);
void imprime_lista(Lista *);
void imprime_segmento(Lista *);
int funcao_dispersao(int data);
