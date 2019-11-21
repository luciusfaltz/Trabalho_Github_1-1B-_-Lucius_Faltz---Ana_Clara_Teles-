#include <iostream>
#include <string>
using namespace std;

/*
	Conta todas as letras 'letra' contidas em 'texto'
*/
int contaLetras(char letra, string texto)
{
	int qtd, i, vezes=0;
	qtd = texto.length();
	for(i=0; i< qtd; i++)
	{
		if(texto[i] == letra)
			vezes++
	}
	return 0;
}

/*
	Substitui todas as ocorrencias de 'letra1' por 'letra2' contidas em 'texto'
*/
void substituirLetra(char letra1,char letra2, string texto)
{
		int qtd, i;
	qtd = texto.length();
	for(i=0; i< qtd; i++)
	{
		if(texto[i] == letra1)
			texto[i] = letra2;
	}
	
}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{
	size_t pos = texto.find(palavra);
	int contador = 0;
	while(pos != string::npos)
	{
		contador++;
		texto = texto.substr(pos + 1);
		pos = texto.find(palavra);
	}
	return contador;
}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
string substituirPalavras(string palavra1, string palavra2, string texto)
{
	size_t pos = texto.find(palavra1);
	while(pos != string::npos)
	{
		texto.replace(pos, palavra1.length(), palavra2);
		pos = texto.find(palavra1);
	}
	return texto;
}

int main(){

	cout << "Entre com o texto para fazer o teste:";




	return 0;
}
