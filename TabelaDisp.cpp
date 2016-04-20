#include <random>
#include "TabelaDisp.h"

TabelaDisp::TabelaDisp()
{
}

TabelaDisp::~TabelaDisp()
{
}

int TabelaDisp::fator_carga()
{
	return 0;
}

void TabelaDisp::redimensao()
{
}

int TabelaDisp::funcao_Disp(No entrada) {
	return (entrada.info % TAMANHO_TABELA);
}

void TabelaDisp::inserir(No, Seguimento) {
	mt19937 mt(3);
	uniform_int_distribution<long> dist(1, 10000);
	int cont = 1;
}




