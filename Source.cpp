#include"Header.h"
int main()
{
	Lista * lo = cria_lista();
	Lista * li = cria_lista();
	cout << "A lista esta vazia: " << (bool)lista_vazia(lo) << endl;
	inserir_lista(lo, 10);
	inserir_lista(lo, 20);
	inserir_lista(lo, 30);
	inserir_lista(lo, 40);
	cout << "Tamanho da lista = " << tamanho_lista(li) << endl;
	cout << "A lista esta vazia: " << bool (lista_vazia(li)) << endl;
	cout << "O numero 10 esta na lista: " << bool (consulta_lista(li, 10)) << endl;
	cout << "O numero 5 esta na lista: " << (bool)consulta_lista(li, 5) << endl;
	cout << "O numero 20 esta na lista: " << (bool)consulta_lista(li, 20) << endl;
	li = copia_lista(lo);
	libera_lista(lo);
	cout << "A lista esta vazia: " << (bool)lista_vazia(lo) << endl;
	apaga_node(li, 10);
	cout << "Tamanho da lista = " << tamanho_lista(li) << endl;
	cout << "A lista esta vazia: " << bool(lista_vazia(li)) << endl;
	cout << "O numero 10 esta na lista: " << bool(consulta_lista(li, 10)) << endl;
	cout << "O numero 5 esta na lista: " << (bool)consulta_lista(li, 5) << endl;
	cout << "O numero 20 esta na lista: " << (bool)consulta_lista(li, 20) << endl;
	cout << "A lista esta vazia: " << (bool)lista_vazia(li) << endl;
	libera_lista(li);
	cout << "A lista esta vazia: " << (bool)lista_vazia(li) << endl;
	system("pause");
	return 0;
}