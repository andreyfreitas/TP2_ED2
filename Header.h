#include<iostream>
#include<vector>
using namespace std;
#define TAM_TAB 23
struct node {
	int data;
	node * next;
};
typedef node * Lista;

Lista * cria_lista();
void libera_lista(Lista *);
int tamanho_lista(Lista *);
bool lista_vazia(Lista *);
bool inserir_lista(Lista *, int);
bool consulta_lista(Lista*, int);
Lista * copia_lista(Lista *);
void inserir_copia_lista(Lista *&, Lista *);
bool apaga_node(Lista *, int);
void imprime_lista(Lista *);

