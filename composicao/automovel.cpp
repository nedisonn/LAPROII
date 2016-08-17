#include "automovel.h"

Carro::Carro(string _marca, int _quilometragem){
marca = _marca;
km = _quilometragem;
m = new motor (2.0, 45);
for (int i=0; i<4; i++)
P[i] = new Pneu("Micehlin, 32");}

Carro::~Carro(){}

void Carro::setKm(int valor){
km = valor}

int Carro::getKm(){
return km;}

void Carro::setMarca (string _marca){
marca = _marca}

char Carro::getMarca(){
return marca;}

void Carro::desloca (int _kms){
float ltsNecessarios;
int maxKm =_kms;
//consumo medio do carro = 10kms/l

ltsNecessarios=maxKm/10
if(M->getQuantCombs()<ltsNecessarios){
maxKm=M->getQuantCombs()*10;
ltsNecessarios=M->getTanque()*10;
ltsNecessario=M->getTanque();
}
m->setTanque(m->
void Carro::abastece(float _lts, int _pressao){}

void Carro::imprime(){
cout <<"Automovel:"<<endl;
cout <<"Marca "<<marca<<endl;
cout <<" Km:"<<km<<endl;
cout <<"Motor:"<<endl;
cout <<"Potencia "<<M->getPotencia()<<endl;
cout <<" litragem "<<M->getQuantCombs()<<endl;
cout <<"Pneus:"<<endl;
cout <<"Marca "<<p[i]->getMarca()<<endl;
cout <<" pressão "<<p[i]->getPressao()<<endl;
}

int Carro::getTanque(){
return M.getQuantCombs();}
