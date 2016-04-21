
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

int TabelaDisp::funcao_Disp(int entrada) {
	return (entrada % (TAMANHO_SEG * (2^l)));
}

void TabelaDisp::inserir(Item, Seg, int l, int p) {
	
	//Gerar Aleatórios
	mt19937 mt(3);
	uniform_int_distribution<int> dist(1, 1000);

	Item * item = new Item();

	for (int i = 0; i < 1001; i++) {
		cout << dist(mt) << endl;

		funcao_Disp(dist(mt));
	}
	
		
	

	
}




