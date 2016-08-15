#ifndef __PONTO_H__
#define __PONTO_H__
#include <stdio.h>
class Pessoa{
Private:
int altura, idade;
char nome[50];
public:
Pessoa();
void set_altura(int valor);
int get_altura();
void set_idade(int valor);
int get_altura();
void set_nome(char cnome[50]);
char get_altura();
void imprime();
};

#endif
