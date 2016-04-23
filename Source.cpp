#include"Header.h"
#include<random>
int main()
{
	int nDist = 30;
	mt19937 mt(3);
	uniform_int_distribution<int> dist(1, nDist);

	vector<Lista *> dir;
	for (size_t i = 0; i < TAM_TAB-1; i++)
	{
		inserir_diretorio(dir, dist(mt));
	}
	imprime_segmento(dir[0]);
	libera_diretorio(dir);
	//Lista * li = cria_segmento();
	//for (size_t i = 0; i < 30; i++)
	//{
		//inserir_segmento(li, dist(mt));
	//}


	//imprime_segmento(li);
	//mostra_colisoes(li);
	
	//cout << tamanho_segmento(li) << endl;
	//libera_segmento(li);
	system("pause");
	return 0;
}

