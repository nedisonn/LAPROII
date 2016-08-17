#ifndef __pneu_h__
#define __pneu_h__
#include <iostream>
#include <string>
using namespace std;

class Pneu{
private:
float pressaoAr;
string marca;
public:
Pneu(string _marca = "desconhecida", int _pressaoAr =-1);
~Pneu();
void setPressaoAr(float valor);
float getPressaoAr();
void setMarca (string _marca);
char getMarca();
void imprime();
};
#endif
