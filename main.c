/*
#include <stdio.h>
#include <stdlib.h>

 run this program using the console pauser or add your own getch, system("pause") or input loop 

int main(int argc, char *argv[]) {
	printf("mensagem 1\n");
	printf("mensagem 2\n");
		printf("mensagem 3\n");

		printf("mensagem 4\n");

	
	return 0;
}
 
 
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 

int main(int argc, char *argv[]) {
	printf("Oi tudo bem? Tenho 6 anso e programo.\n");
	printf("Valor inteiro: %d\n",10);
		printf("Valor real: %f\n",3.14159265);
        printf("Valor real com apenas com duas casas %.2f\n:",3.14159265);
		printf("Dado de texto para 1 caracter :%c.\n",'a');
		printf("Dado de texto:%s.\n","teste");

	
	return 0;
}
*/



#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 

int main(int argc, char *argv[]) {
	int idade=0;// Importante a variavel começar com zero;
	
	printf("Valor da idade: %d\n",idade);
	printf("Digite uma idade:\n");
	scanf("%d",&idade);
		printf("Idade informada:%d",idade);
        

	
	return 0;
}



// Duas variaveis no mesmo scanf mas essse formato não é ideal 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int idade=0;// Importante a variavel começar com zero;
	int ano=1950;
	printf("Valor da idade: %d\n",idade);
	printf("Digite a idade e o ano de nascimento :\n");
	scanf("%d %d",&idade,&ano);
		printf("Idade e ano de nascimento informados:%d e %d",idade,ano);
        

	
	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int idade=0;// Importante a variavel começar com zero;
	int ano=0;
    float peso=0;
	
	printf("Digite a idade:"); 
	scanf("%d",&idade);
	printf("Digite o ano de nasciemnto:"); 
	scanf("%d",&ano);
		printf("Digite o peso:"); 
     	scanf("%f",&peso);
	
		printf("Idade, ano de nascimento e peso informados respectivamente: %d, %d e %.2f",idade,ano,peso);
        
// Essa seria a forma corret. Informando que é a parte sem \n
	
	return 0;
}
























 
 
