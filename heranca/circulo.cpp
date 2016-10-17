#include "circulo.h"

Circulo::Circulo():Ponto(){
raio=0;
}

Circulo::Circulo(int _x,int _y,int _raio):ponto(_x,_y){
raio =_raio;
}

