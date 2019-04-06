#include <stdio.h>
#include <stdlib.h>	//Plein de trucs utiles comme le random
#include <time.h>	//Fonctions de temps/date (utiles pour initialiser le random)*

int pouet(int val){
	return 2*val;
}

/*Paramètres du main :
argc : nombre d'arguments en comptant le nom du programme
argv : valeur des arguments sous forme de chaines de caractères*/
int main(int argc, char* argv[]){
	int i;		//4 octets (en général)
	float f;	//Pareil avec une virgule
	char c;		//Un octet
	for(i=0; i<10; i++){
		printf("%d ",i);
	}
	printf("\n");
	for(f=0; f<10; f+=0.1){
		printf("%f ",f);
	}
	printf("\n");
	for(c='A';c<='z';c++){	//Cherche une image de table ascii
		printf("%c ",c);
	}

	int a = 42;
	int b = pouet(a);
	printf("%d\n\nEntrer une valeur pour a : ",b);
	scanf("%d",&a);
	printf("a = %d",a);

	int tableau[10];
	for(int p = 0; p<10; p++){
		tableau[p] = p;
	}
	for(char w = 9; w>-1; w--){
		printf("%d ",tableau[w]);
	}
	printf("\n")

	char ch[256];	//Chaine = tableau de caractères
	printf("Donner une chaine de caractères\n");
	scanf("%s",&ch);
	printf("chaine lue : %s\n",ch);

	int s = 0;
	while(s<100){
		s++;
	}
	printf("%d\n",s);
	do{			//Execute la boucle une première fois avant de tester sa condition
		s--;
	}while(s>0);
	printf("%d\n",s);
}

//Pour compiler un programme simple : "gcc <programme.c> -o programme"

//Si il y a un Makefile pour compiler : "make"
