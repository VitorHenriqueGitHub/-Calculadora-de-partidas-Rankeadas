#include<stdio.h>

void rankeada(int rank){
	if(rank <= 10){
		printf("O heroi tem de saldo %d vitorias e esta no nivel Ferro",rank);
	}
	if(rank >= 11 && rank <= 20){
		printf("O heroi tem de saldo %d vitorias e esta no nivel Bronze",rank);
	}
	if(rank >= 21 && rank <= 50){
		printf("O heroi tem de saldo %d vitorias e esta no nivel Prata",rank);
	}
	if(rank >= 51 && rank <= 80){
		printf("O heroi tem de saldo %d vitorias e esta no nivel Ouro",rank);
	}
	if(rank >= 81 && rank <= 90){
		printf("O heroi tem de saldo %d vitorias e esta no nivel Diamante",rank);
	}
	if(rank >= 91 && rank <= 100){
		printf("O heroi tem de saldo %d vitorias e esta no nivel Lendario",rank);
	}
	if(rank >= 101){
		printf("O heroi tem de saldo %d vitorias e esta no nivel Imortal",rank);
	}
}

void calculo(int vitorias, int derrotas){
	int rank = vitorias - derrotas;
	
	rankeada(rank);
}

int main(){
	int vitorias, derrotas;
	
	printf("Digite a quantidade de vitorias: ");
	scanf("%d",&vitorias);
	
	printf("Digite a quantidade de derrotas: ");
	scanf("%d",&derrotas);
	
	calculo(vitorias, derrotas);	
	return 0;
}
