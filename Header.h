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
Lista* copia_lista(Lista *);
bool apaga_node(Lista *, int);
void imprime_lista(Lista *);

struct segment {
	Lista vet[TAM_TAB];
};
typedef segment * Diretory;

Diretory * cria_diretorio();
void libera_dir(Diretory *);
int tamanho_dir(Diretory *);
bool inserir_dir(Diretory *, int, int);
bool consultar_dir(Diretory *, int, int);
bool realocar_dir(Diretory *, int, int);
