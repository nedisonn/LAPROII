#ifndef __motor_h__
#define __motor_h__
#include <iostream>
using namespace std;

class Motor{
private:
float quantCombs, potencia;
public:
Motor(float, float);
~Motor();
void setQuantCombs(float valor);
int getQuantCombs();
void setPotencia (float valor);
int getPotencia (float valor);
void imprime();

};
#endif
