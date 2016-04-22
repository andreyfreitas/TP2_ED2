
#include "TabelaDisp.h"

TabelaDisp::TabelaDisp()
{
	p = 0;
	l = 0;
	cont = 1;
	tam_dir = 1;
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

int TabelaDisp::funcao_Disp(int entrada) {
	return (entrada % (TAMANHO_SEG * (2^l)));
}

void TabelaDisp::inserir() {

	//Gerar Aleatórios
	int nDist = 23;
	mt19937 mt(3);
	uniform_int_distribution<int> dist(1, nDist);

	

}

