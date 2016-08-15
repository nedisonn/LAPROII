#ifndef __elevador_h
#define __elevador_h
#include <iostream>
using namespace std;
class elevador{
	private:
	  int andarAtual, totalAndares, nroPessoas, capacidade;
	public:
		elevador();
		~elevador();
		void inicializa(int,int);
		void entra();
		void sai();
		void sobe();
		void desce();

		int getAndarAtual();
		int getCapacidade();
		int getTotalAndares();
		int getNroPessoas();
};
#endif
