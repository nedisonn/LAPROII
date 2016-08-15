#include "elevador.h"

elevador:: elevador(){
	cout << "elevador sendo instanciado" << endl;
	andarAtual = totalAndares = nroPessoas = capacidade = 0;
}

elevador::~elevador(){
	cout << "objeto sendo deslocado" <<endl;
}

void elevador:: inicializa (int _capacidade ,int _totalAndares){
	cout<<"Inicializando capacidade e nro de andares do predio" << endl;
	capacidade = _capacidade;
	totalAndares=_totalAndares;}

void elevador:: entra(){
	if (nroPessoas<capacidade){
		cout << "Seja bem vindo ao elevador" << endl;
		nroPessoas++;}
		else cout <<"Elevador lotado." << endl;
}
void elevador:: sai(){
if(nroPessoas>0){
 cout << "Saiu uma pessoa" <<endl;
	nroPessoas--;}
	else
 		cout << "Ninguem saiu" <<endl;}

void elevador:: sobe(){
	if (andarAtual<totalAndares){
		cout <<"Subindo"<<endl;
		andarAtual++;}
			else
				cout <<"Elevador no topo do prédio"<<endl;
}

void elevador:: desce(){

	if (andarAtual>0){
		cout <<"Descendo"<<endl;
		andarAtual--;}
			else
				cout <<"Elevador no topo do prédio"<<endl;
}

int elevador:: getAndarAtual(){
	return andarAtual;}
int elevador:: getCapacidade(){
	return capacidade;}
int elevador:: getTotalAndares(){
	return totalAndares;}
int elevador:: getNroPessoas(){
	return nroPessoas;}
