#include "TabelaDisp.h"

using namespace std;

int main()
{

	mt19937 mt(3);
	uniform_int_distribution<int> dist(1, 1000);
	
	for (int i = 0; i < 1001; i++) {
		cout << dist(mt) << endl;
		cout << i << endl;
	}

	system("pause");
	return 0;
}
void inserir(seguimento * dir[], int x)
{
	if (dir == nullptr)
		dir = new seguimento[1];
}