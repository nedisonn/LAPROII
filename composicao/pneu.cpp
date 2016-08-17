#include "pneu.h"

Pneu::Pneu(string _marca, int _pressao){
marca = _marca;
pressao = _pressao;}
void Pneu::setPressaoAr(float valor){
pressaoAr = valor;}
float Pneu::getPressaoAr(){
return pressaoAr;}
void Pneu::setMarca (string _marca){
marca = _marca;}
char Pneu::getMarca(){}
void Pneu::imprime(){
cout<<""<< <<""<< << endl;}
