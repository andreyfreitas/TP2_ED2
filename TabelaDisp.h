#include <iostream>
using namespace std;

const int TAMANHO_TABELA = 23;

struct No
{
	int info;
	No * next = nullptr;
};

struct Seguimento
{
	No * vet[TAMANHO_TABELA] = { nullptr };
};


class TabelaDisp
{
public:

	int p = 0; //Expandir um compartimento p significa criar um novo compartimento q no final da tabela:
	int l = 0; //o número de expansões da tabela:

	TabelaDisp();
	~TabelaDisp();
	int funcao_Disp(No);
	void inserir(No, Seguimento);
	
private:
	int fator_carga();
	void redimensao();

};


