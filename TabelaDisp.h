#include <iostream>
#include <random>
#include <vector>
using namespace std;

const int TAMANHO_SEG = 23;

struct Item_Lista
{
	int chave;
	Item_Lista * next;
};


struct Seg
{
	Item_Lista * seg[TAMANHO_SEG] = {nullptr};
};


class TabelaDisp
{
public:

	TabelaDisp();
	~TabelaDisp();
	int funcao_Disp(int);
	void inserir();

		
	
private:

	int p; //Expandir um compartimento p significa criar um novo compartimento q no final da tabela:
	int l; //o número de expansões da tabela:
	int cont;
	int tam_dir;

	int fator_carga();
	void redimensao();


};


