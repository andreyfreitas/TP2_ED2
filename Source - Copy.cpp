#include"Header.h"

int main()
{
	Lista * li = cria_segmento();
	for (size_t i = 0; i < 30; i++)
	{
		inserir_segmento(li, 23);
	}

	
	imprime_segmento(li);
	cout << tamanho_segmento(li) << endl;
	libera_segmento(li);
	system("pause");
	return 0;
}

