#include <iostream>

using namespace std;

struct No
{
	int info;
	No * next = nullptr;
};

struct seguimento
{
	No * vet[23] = { nullptr };
};

class TabelaDisp
{
public:

	TabelaDisp();
	~TabelaDisp();
	void inserir(int);
	void remover(int);

private:

};


