#include"Header.h"
int main()
{
	Directory * dir = cria_diretorio();
	inserir_dir(dir, 12);
	cout<<dir[0]->vet[12%TAM_TAB]->data<<endl;
	libera_dir(dir);
	system("pause");
	return 0;
}

/*Lista * lo = cria_lista();
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
apaga_node(li, 5);
cout << "Tamanho da lista = " << tamanho_lista(li) << endl;
cout << "A lista esta vazia: " << bool(lista_vazia(li)) << endl;
cout << "O numero 10 esta na lista: " << bool(consulta_lista(li, 10)) << endl;
cout << "O numero 5 esta na lista: " << (bool)consulta_lista(li, 5) << endl;
cout << "O numero 20 esta na lista: " << (bool)consulta_lista(li, 20) << endl;
cout << "A lista esta vazia: " << (bool)lista_vazia(li) << endl;
imprime_lista(li);
apaga_node(li, 40);
imprime_lista(li);

libera_lista(li);
cout << "A lista esta vazia: " << (bool)lista_vazia(li) << endl;
*/

/*Lista * lo = cria_lista();
cout << "A lista esta vazia: " << (bool)lista_vazia(lo) << endl;
inserir_lista(lo, 10);
inserir_lista(lo, 20);
inserir_lista(lo, 30);
inserir_lista(lo, 40);
Lista * lu = cria_lista();
cout << "A lista esta vazia: " << (bool)lista_vazia(lo) << endl;
inserir_lista(lu, 50);
inserir_lista(lu, 60);
inserir_lista(lu, 70);
inserir_lista(lu, 80);
Lista * li = cria_lista();
inserir_copia_lista(li, lo);
inserir_copia_lista(li, lu);
imprime_lista(li);
libera_lista(lo);
libera_lista(lu);
libera_lista(li);*/