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

	int texto, contar, vezes;
	string text, word, replace, palavrasubs, novotexto;
	char letr, sbstituta, trocaletra ;
	cout<< "Entre com o texto para fazer o teste:";
	getline(cin, text);
	cout<< "Insira a letra que voce deseja contabilizar:"
	cin>>letr;
	contar = contaLetras(letr, text);
	cout<<"Insira a letra que voce deseja que seja trocada:";
	cin>>trocaletra;
	cout<<"insira a letra que ira substituir o item anterior:";
	cin>>sbstituta;
	substituirLetra(trocaletra, sbstituta, text);
	cout<<"Insira a palavra que voce deseja que seja contabilizada:";
	getline(cin, word);
	vezes = contaPalavras(word, text);
	cout<<"Insira a palavra que voce quer substituir:";
	getline(cin, palavrasubs);
	cout<<"Insira a palavra que voce deseja por no lugar:";
	getline(cin, replace);
	novotexto = substituirPalavras(palavrasubs, replace, text);
	
	cout<<"\nVezes em que a letra "<<letr<<" aparece no texto: "<<contar; 
	cout<<"\n Vezes em que a palavra "<<word<<" aparece: "<< vezes;
	cout<<"\n\n"<<novotexto;

	return 0;
}
