
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


	for (int i = 1; i <= tam_dir; i++)
	{
		Seg * dir = new Seg[TAMANHO_SEG];
			
		//inserindo na Lista encadeada.
		for (int j = 1; j <= nDist; j++) {

			Item_Lista * Item = new Item_Lista();
						
			dir->seg[funcao_Disp(dist(mt))]->chave;
			dir->seg[funcao_Disp(dist(mt))]->next = Item;
						
			/*Item->chave = dist(mt);
			Item->next = Item;*/

			cout << Item->chave << " " << Item->next << endl;
			cont = j;

		}
	}
	cout << cont << endl;

}

