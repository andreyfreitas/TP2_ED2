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

//vector<Seg> Dir;


class TabelaDisp
{
public:

	TabelaDisp();
	~TabelaDisp();
	int funcao_Disp(int);
	void inserir(Item, Seg, int, int);
	
	
private:

	int p = 0; //Expandir um compartimento p significa criar um novo compartimento q no final da tabela:
	int l = 0; //o número de expansões da tabela:
	int cont = 0;

	int fator_carga();
	void redimensao();


};


