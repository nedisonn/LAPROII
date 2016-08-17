#ifndef __automovel_h__
#define __automovel_h__
#include <iostream>
#include <string>
#include <stdlib.h>
#include "pneu.h"
#include "motor.h"
using namespace std;

class Carro{
private:
int km;
string marca;
Motor *M;
Pneu *P[4];
public:
Carro(string _marca, int _quilometragem);
~Carro();
void setKm();
int getKm(int valor);
void setMarca ();
char getMarca(string _marca));
void desloca (int _kms); 
void abastece(float _lts, int _pressao);
void imprime();
int getTanque(); /*M.getQuantCombs();*/
};
#endif
