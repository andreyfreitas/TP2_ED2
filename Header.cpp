#include"Header.h"

Lista * cria_lista()
{
	Lista*li = new Lista;
	if (li!=nullptr)
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

bool consulta_lista(Lista * li, int info)
{
	if (li == nullptr)
		return false;
	node * elem = *li;
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
		return 0;
	Lista * copy = cria_lista();
	node * aux = *li;
	while (aux != nullptr)
	{
		inserir_lista(copy, aux->data);
		aux = aux->next;
	}
		
	return copy;
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
	node * aux = *li;
	cout << endl;
	while (aux != nullptr)
	{
		cout << aux->data << " ";
		aux = aux->next;
	}
	cout << endl;
}
	

