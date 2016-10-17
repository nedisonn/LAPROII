#include "ponto.h" 

Ponto(){
x=y=0;}
Ponto (int _x, int _y){
x = _x;
y = _y;
}
void setPonto(int _x, int _y){
x = _x;
y = _y;}

int getX(
return x;);
int getY(
return y;);


float Ponto:: dist2(ponto _paux){
return dist2(_paux.x, _paux.y);}

float Ponto:: dist2(ponto _paux){
int a, b;
float d;
a= abs (x-_x);
b = abs (y-_y);

d= sqrt (pow (a,2) + pow (b,2));

return d;}


