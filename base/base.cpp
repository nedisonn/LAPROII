#include "base.h"

Ponto::Ponto(){
x = y = 0;
}
void Ponto::setX(int valor){
x = valor;
}
void Ponto::setY(int valor){
y = valor;
}
void Ponto::imprime(){
printf("\n Dados do ponto: (x=%d, y=%d) ", x, y);
}
