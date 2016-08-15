#ifndef __base_h__
#define __base_h__
#include <stdio.h>
class Ponto{
private:
int x, y;
public:
Ponto();
void setX(int valor);
void setY(int valor);
void imprime();
};
#endif
