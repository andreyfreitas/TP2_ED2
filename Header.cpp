#include"Header.h"

Lista * cria_lista()
{
	Lista*li = new Lista[TAM_TAB];
	if (li != nullptr)
	{
		for (size_t i = 0; i < TAM_TAB; i++)
		{
			li[i] = nullptr;
		}
		
	}
	return li;
}

void libera_lista(Lista * li)
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
}

int tamanho_lista(Lista * li)
{
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

bool lista_vazia(Lista * li)
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

bool inserir_lista(Lista * li, int info)
{
	if (li == nullptr)
		return false;
	node * elem = new node;
	if (elem == nullptr)
		return false;
	elem->data = info;
	elem->next = nullptr;
	if ((li[info % TAM_TAB] == nullptr))
		li[info % TAM_TAB] = elem;
	else
	{
		node * aux = li[info%TAM_TAB];
		while (aux->next != nullptr)
			aux = aux->next;
		aux->next = elem;
	}
	return true;
}

bool consulta_lista(Lista * li, int info)
{
	if (li == nullptr)
		return false;
	node * elem = li[info%TAM_TAB];
	while (elem != nullptr && elem->data != info)
		elem = elem->next;
	if (elem == nullptr)
		return false;
	else
		return true;
}

Lista * copia_lista(Lista * li)
{
	if (lista_vazia(li))
		return nullptr;
	Lista * copy = cria_lista();
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
		Lista * li = cria_lista();
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
		libera_lista(nova);
		nova = li;
	}
		
}

bool apaga_node(Lista * li, int info)
{
	if (li == nullptr || *li == nullptr)
		return false;
	if (consulta_lista(li, info))
	{
		node * ant = nullptr, *elem = *li;
		while (elem != nullptr && elem->data != info)
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
		return true;
	}
}
		
void imprime_lista(Lista * li)
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
	cout << endl;
}
