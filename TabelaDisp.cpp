
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

	for (int i = 0; i < 1001; i++) {
		cout << dist(mt) << endl;

		funcao_Disp(dist(mt));
	}
	
}

//Metodos de setar e retornar valores das variaveis.

void TabelaDisp::set_p(int novo_compart)
{
	p = novo_compart;
}

void TabelaDisp::set_l(int exp_tab)
{
	l = exp_tab;
}

void TabelaDisp::set_cont(int contador)
{
	cont = contador;
}

int TabelaDisp::get_p()
{
	return p;
}

int TabelaDisp::get_l()
{
	return l;
}

int TabelaDisp::get_cont()
{
	return cont;
}




