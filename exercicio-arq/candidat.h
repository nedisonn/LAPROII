#ifndef __candidato_h__
#define __candidato_h__
#include <stdio.h>
class Candidato{
private:
int numero;
string nome;

public:
Candidato(string = "desconhecido"; int num = 0);
void setNum(int valor);
void setNome(string _nome);
void imprime();
};
#endif
