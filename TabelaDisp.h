#include <iostream>
#include <random>
#include <vector>
using namespace std;

const int TAMANHO_SEG = 23;

struct Item
{
	int chave;
	Item * next = nullptr;
};

struct Seg
{
	Item * vet[TAMANHO_SEG] = { nullptr };
};


class TabelaDisp
{
public:

	TabelaDisp();
	~TabelaDisp();
	int funcao_Disp(int);
	void inserir(Item, Seg, int, int);
	void set_p(int novo_compart);
	int get_p();
	void set_l(int exp_tab);
	int get_l();
	void set_cont(int contador);
	int get_cont();
	
	
private:

	int p; //Expandir um compartimento p significa criar um novo compartimento q no final da tabela:
	int l; //o número de expansões da tabela:
	int cont;

	int fator_carga();
	void redimensao();


};


