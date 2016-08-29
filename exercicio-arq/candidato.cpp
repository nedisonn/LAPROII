#include "candidato.h"

Candidato::Candidato(){
numero = 0;
nome = "Desconhecido"
}
void Candidato::setNum(int valor){
numero = valor;
}
void Candidato::setnome(string _nome){
nome = _nome;
}
void Candidato::imprime(){
cout << numero << nome << endl;
}
