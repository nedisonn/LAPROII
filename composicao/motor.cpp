#include "motor.h"

Motor::Motor(float _potencia, float _tanque){
quantCombs = _tanque;
potencia= _potencia;
}
Motor::~Motor(){
}
void Motor::setQuantCombs(int valor){
quantCombs = valor;
}
int Motor::getQuantCombs(){
return quantCombs;}
void Motor::setPotencia (int valor){
potencia = valor;}
int Motor::getPotencia (){
return potencia;}
void Motor::imprime(){
cout << "Quantidade de combustivel:"<<quantCombs << "  Potencia:" << potencia<<endl;
}
