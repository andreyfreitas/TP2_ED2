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
		node * elem = nullptr;
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
		return nullptr;
	Lista * copy = cria_lista();
	node * aux = *li;
	while (aux != nullptr)
	{
		inserir_lista(copy, aux->data);
		aux = aux->next;
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
	node * aux = *li;
	cout << endl;
	while (aux != nullptr)
	{
		cout << aux->data << " ";
		aux = aux->next;
	}
	cout << endl;
}

Directory * cria_diretorio()
{
	Directory * dir = new Directory;
	if (dir != nullptr)
		*dir = nullptr;
	*dir = new segment;
	Lista * li = cria_lista();
		for (size_t i = 0; i < TAM_TAB; i++)
			dir[0]->vet[i] = * li;
	return dir;
}

void libera_dir(Directory * dir)
{
	int i = 0;
	while (i < 23) 
	{
		if (dir[0]->vet[i] != nullptr)
			delete dir[0]->vet[i];
		i++;
	}
	delete dir;
}


bool inserir_dir(Directory * &dir, int x)
{
	Lista * li = cria_lista();
	inserir_lista(li, x);
	dir[0]->vet[x / TAM_TAB];
 	dir[0]->vet[x%TAM_TAB] = * li;
	return true;
}
	

