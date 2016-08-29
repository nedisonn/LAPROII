#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>
using namespace std;

struct candidato{
int numero,votos;
string nome;
}candidato[20];

int main() {

int maisvotos =0, menosvotos =0, i=0, voto =0, total = 0;
float porcentagem =0;
string maisvotado,menosvotado;
for (i =0; i<20;i++){
		candidato[i].numero = 0;
		candidato[i].nome = "desconhecido";
                 	}		


ifstream arq, urna1,urna2,urna3,urna4;

cout << "Abrindo arquivo texto..." << endl;
arq.open("candidatos.txt", ios::in);
urna1.open("urna1.txt", ios::in);
urna2.open("urna2.txt", ios::in);
urna3.open("urna3.txt", ios::in);
urna4.open("urna4.txt", ios::in);


if (!arq.is_open()) return 0;

for (i=0;i<20;i++){
	do{
	arq >> candidato[i].numero >> candidato[i].nome;
		if(! arq.fail ()) {
		cout<< candidato[i].numero << " " << candidato[i].nome<< endl;
				  }
	  } 
		  
while (arq.good());
		
}


do{
urna1 >> voto;
if (voto == 1) candidato[0].votos = candidato[0].votos +1;
if (voto == 2) candidato[1].votos = candidato[1].votos +1;
if (voto == 3) candidato[2].votos = candidato[2].votos +1;
if (voto == 4) candidato[3].votos = candidato[3].votos +1;
if (voto == 5) candidato[4].votos = candidato[4].votos +1;
if (voto == 6) candidato[5].votos = candidato[5].votos +1;
if (voto == 7) candidato[6].votos = candidato[6].votos +1;
if (voto == 8) candidato[7].votos = candidato[7].votos +1;
if (voto == 9) candidato[8].votos = candidato[8].votos +1;
if (voto == 10) candidato[9].votos = candidato[9].votos +1;
if (voto == 11) candidato[10].votos = candidato[10].votos +1;
if (voto == 12) candidato[11].votos = candidato[11].votos +1;
if (voto == 13) candidato[12].votos = candidato[12].votos +1;
if (voto == 14) candidato[13].votos = candidato[13].votos +1;
if (voto == 15) candidato[14].votos = candidato[14].votos +1;
if (voto == 16) candidato[15].votos = candidato[15].votos +1;
if (voto == 17) candidato[16].votos = candidato[16].votos +1;
if (voto == 18) candidato[17].votos = candidato[17].votos +1;
if (voto == 19) candidato[18].votos = candidato[18].votos +1;
if (voto == 20) candidato[19].votos = candidato[19].votos +1;

}while(!urna1.eof());

do{
urna2 >> voto;
if (voto == 1) candidato[0].votos = candidato[0].votos +1;
if (voto == 2)candidato[1].votos = candidato[1].votos +1;
if (voto == 3) candidato[2].votos = candidato[2].votos +1;
if (voto == 4) candidato[3].votos = candidato[3].votos +1;
if (voto == 5) candidato[4].votos = candidato[4].votos +1;
if (voto == 6) candidato[5].votos = candidato[5].votos +1;
if (voto == 7) candidato[6].votos = candidato[6].votos +1;
if (voto == 8) candidato[7].votos = candidato[7].votos +1;
if (voto == 9) candidato[8].votos = candidato[8].votos +1;
if (voto == 10) candidato[9].votos = candidato[9].votos +1;
if (voto == 11 )candidato[10].votos = candidato[10].votos +1;
if (voto == 12 )candidato[11].votos = candidato[11].votos +1;
if (voto == 13) candidato[12].votos = candidato[12].votos +1;
if (voto == 14) candidato[13].votos = candidato[13].votos +1;
if (voto == 15) candidato[14].votos = candidato[14].votos +1;
if (voto == 16) candidato[15].votos = candidato[15].votos +1;
if (voto == 17) candidato[16].votos = candidato[16].votos +1;
if (voto == 18) candidato[17].votos = candidato[17].votos +1;
if (voto == 19) candidato[18].votos = candidato[18].votos +1;
if (voto == 20) candidato[19].votos = candidato[19].votos +1;

}while(!urna2.eof());

do{
urna3 >> voto;
if (voto == 1) candidato[0].votos = candidato[0].votos +1;
if (voto == 2) candidato[1].votos = candidato[1].votos +1;
if (voto == 3) candidato[2].votos = candidato[2].votos +1;
if (voto == 4 )candidato[3].votos = candidato[3].votos +1;
if (voto == 5) candidato[4].votos = candidato[4].votos +1;
if (voto == 6 )candidato[5].votos = candidato[5].votos +1;
if (voto == 7 )candidato[6].votos = candidato[6].votos +1;
if (voto == 8 )candidato[7].votos = candidato[7].votos +1;
if (voto == 9 )candidato[8].votos = candidato[8].votos +1;
if (voto == 10) candidato[9].votos = candidato[9].votos +1;
if (voto == 11) candidato[10].votos = candidato[10].votos +1;
if (voto == 12) candidato[11].votos = candidato[11].votos +1;
if (voto == 13) candidato[12].votos = candidato[12].votos +1;
if (voto == 14) candidato[13].votos = candidato[13].votos +1;
if (voto == 15) candidato[14].votos = candidato[14].votos +1;
if (voto == 16) candidato[15].votos = candidato[15].votos +1;
if (voto == 17) candidato[16].votos = candidato[16].votos +1;
if (voto == 18) candidato[17].votos = candidato[17].votos +1;
if (voto == 19) candidato[18].votos = candidato[18].votos +1;
if (voto == 20) candidato[19].votos = candidato[19].votos +1;

}while(!urna3.eof());

do{
urna4 >> voto;
if (voto == 1 )candidato[0].votos = candidato[0].votos +1;
if (voto == 2 )candidato[1].votos = candidato[1].votos +1;
if (voto == 3 )candidato[2].votos = candidato[2].votos +1;
if (voto == 4 )candidato[3].votos = candidato[3].votos +1;
if (voto == 5 )candidato[4].votos = candidato[4].votos +1;
if (voto == 6 )candidato[5].votos = candidato[5].votos +1;
if (voto == 7 )candidato[6].votos = candidato[6].votos +1;
if (voto == 8 )candidato[7].votos = candidato[7].votos +1;
if (voto == 9 )candidato[8].votos = candidato[8].votos +1;
if (voto == 10 )candidato[9].votos = candidato[9].votos +1;
if (voto == 11 )candidato[10].votos = candidato[10].votos +1;
if (voto == 12 )candidato[11].votos = candidato[11].votos +1;
if (voto == 13 )candidato[12].votos = candidato[12].votos +1;
if (voto == 14 )candidato[13].votos = candidato[13].votos +1;
if (voto == 15 )candidato[14].votos = candidato[14].votos +1;
if (voto == 16 )candidato[15].votos = candidato[15].votos +1;
if (voto == 17 )candidato[16].votos = candidato[16].votos +1;
if (voto == 18 )candidato[17].votos = candidato[17].votos +1;
if (voto == 19 )candidato[18].votos = candidato[18].votos +1;
if (voto == 20 )candidato[19].votos = candidato[19].votos +1;

}while(!urna4.eof());


for (i=0;i<20;i++){if (candidato[i].votos > maisvotos){
	maisvotos = candidato[i].votos;
	maisvotado = candidato[i].nome;
}

if (candidato[i].votos <<menosvotos){
	menosvotos = candidato[i].votos;
	menosvotado = candidato[i].nome;
}

total = candidato[i].votos + total;
porcentagem = (maisvotos*100) / total;
}



cout << "O mais votado foi: " << maisvotos <<" "<< maisvotado << endl;
cout << "O porcentual de votos dele foi de: " << porcentagem << " %" << endl;
cout << "O menosvotado foi:" << menosvotos << menosvotado << endl;








cout << " Fechando arquivos..." << endl; 
arq.close();
urna1.close();
urna2.close();
urna3.close();
urna4.close();
        return 0;
    }
