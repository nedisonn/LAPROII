#ifndef _CListasPonto_H
#define _CListasPonto_H

#include <stdlib.h>

class ListaP{
	

	ListaP();
	~ListaP();
	void Insere(CPonto *P, int Pos);
	int Localiza(Cponto *P);
	int Qtd();
	int Remove(int Pos);
};

#endif
