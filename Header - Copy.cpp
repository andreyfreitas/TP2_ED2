#include"Header.h"

Lista * cria_lista()
{
	Lista*li = new Lista;
	if (li != nullptr)
		*li = nullptr;
	return li;
}

void libera_lista(Lista * li)
{
	if (li != nullptr)
	{
		node * elem;
		while ((*li) != nullptr)
		{
			elem = *li;
			*li = (*li)->next;
			delete elem;
		}
	}
}

Lista* cria_segmento()		//INICIALIZA UM SEGMENTO COMO UM VETOR DE TAM_TAB POSIÇÕES APONTANDO CADA UMA PARA nullptr 
{
	Lista* li = new Lista[TAM_TAB];
	if (li != nullptr)
	{
		for (size_t i = 0; i < TAM_TAB; i++)
		{
			li[i] = nullptr;
		}
		
	}
	return li;
}

void libera_segmento(Lista * li)		//PERCORRE O SEGMENTO LISTA A LISTA LIBERANDO CADA NÓ
{
	
	if (li != nullptr)
	{
		node * elem = nullptr;
		for (size_t i = 0; i < TAM_TAB; i++)
		{
			while ((li[i]) != nullptr)
			{
				elem = li[i];
				li[i] = li[i]->next;
				delete elem;
			}
		}
		
	}
	cont_node = 0;
}

int tamanho_lista(Lista * li)
{
	if (li == nullptr)
		return 0;
	int cont = 0;
	node * elem = *li;
	while (elem != nullptr)
	{
		cont++;
		elem = elem->next;
	}
	return cont;
}

int tamanho_segmento(Lista * li)		//CONTA E RETORNA O NUMERO DE ELEMENTOS DE UM SEGMENTO EXISTENTE 
{									//NAO UTILIZADO NA INSERÇÃO DE ELEMENTOS
	if (li == nullptr)
		return 0;
	int cont = 0;
	node * elem;
	for (size_t i = 0; i < TAM_TAB; i++)
	{
		elem = li[i];
		while (elem != nullptr)
		{
			cont++;
			elem = elem->next;
		}
	}
	
	return cont;
}

bool segmento_vazio(Lista * li)		// RETORNA SE O SEGMENTO ESTA VAZIO, PERCORRENDO LISTA A LISTA 
{
	if (li == nullptr)
		return true;
	for (size_t i = 0; i < TAM_TAB; i++)
	{
		if (li[i] == nullptr)
			return true;
	}
	
	return false;
}

bool lista_vazia(Lista * li)
{
	if (li == nullptr)
		return true;
	if (*li == nullptr)
		return true;
	return false;
}

bool inserir_lista(Lista * li, int info)
{
	if (li == nullptr)
		return false;
	node * elem = new node;
	if (elem == nullptr)
		return false;
	elem->data = info;
	elem->next = nullptr;
	if ((*li) == nullptr)
		*li = elem;
	else
	{
		node * aux = *li;
		while (aux->next != nullptr)
			aux = aux->next;
		aux->next = elem;
	}
	return true;
}

bool inserir_segmento(Lista * li, int data)
{
	if (li == nullptr)
		return false;
	if ((cont_node)/ (TAM_TAB*(int)pow(2,level)) < 1)
	{
		node * elem = new node;
		if (elem == nullptr)
			return false;
		elem->data = data;
		elem->next = nullptr;
		if ((li[funcao_dispersao(data)] == nullptr))
			li[funcao_dispersao(data)] = elem;
		else
		{
			node * aux = li[funcao_dispersao(data)];
			while (aux->next != nullptr)
				aux = aux->next;
			aux->next = elem;
		}
		cont_node++;
	}
	
	
	return true;
}

bool consulta_lista(Lista * li, int data)
{
	if (li == nullptr)
		return false;
	node * elem = li[data%TAM_TAB];
	while (elem != nullptr && elem->data != data)
		elem = elem->next;
	if (elem == nullptr)
		return false;
	else
		return true;
}

Lista * copia_lista(Lista * li)
{
	if (segmento_vazio(li))
		return nullptr;
	Lista * copy = cria_segmento();
	node * aux;
	for (size_t i = 0; i < TAM_TAB; i++)
	{
		aux = li[i];
		while (aux != nullptr)
		{
			inserir_lista(copy, aux->data);
			aux = aux->next;
		}
	}
	return copy;
}

void inserir_copia_lista(Lista * &nova, Lista * copia)
{
	if (copia != nullptr || *copia != nullptr)
	{
		Lista * li = cria_segmento();
		node * aux = *nova;
		while (aux != nullptr)
		{
			inserir_lista(li, aux->data);
			aux = aux->next;
		}
		aux = *copia;
		while (aux != nullptr)
		{
			inserir_lista(li, aux->data);
			aux = aux->next;
		}
		libera_segmento(nova);
		nova = li;
	}
		
}

bool apaga_node(Lista * li, int data)		// APAGA UM NO EM UMA LISTA E NAO EM UM SEGMENTO
{
	if (li == nullptr || *li == nullptr)
		return false;
	if (consulta_lista(li, data))
	{
		node * ant = nullptr, *elem = *li;
		while (elem != nullptr && elem->data != data)
		{
			ant = elem;
			elem = elem->next;
		}
		if (elem == nullptr)
			return false;
		if (elem == *li)
			*li = elem->next;
		else
			ant->next = elem->next;
		delete elem;
		cont_node --;
		return true;
	}
}

void imprime_lista(Lista * li)
{
	node * aux = *li;
	cout << endl;
	while (aux != nullptr)
	{
		cout << aux->data << " ";
		aux = aux->next;
	}
	cout << endl;
}
		
void imprime_segmento(Lista * li)
{
	node * aux;
	cout << endl;
	for (size_t i = 0; i < TAM_TAB; i++)
	{
		aux = li[i];
		while (aux != nullptr)
		{
			cout << aux->data << " ";
			aux = aux->next;
		}
	}
	cout << endl<<endl;
}


int funcao_dispersao(int data) 
{
	
	return data % (TAM_TAB * (int)pow(2,level));
}