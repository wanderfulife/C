#include<stdio.h>
#include<stdlib.h>

int main(){
int choixMenu = 0;

	printf("=== Menu ===\n");
	printf("1. Royal Cheese\n");
	printf("2. MC Deluxe\n");
	printf("3. MC Bacon\n");
	printf("4. Big Mac\n");
	printf("votre choix:\n");

	scanf("%d",&choixMenu);

	switch(choixMenu){
		case 1:
		printf("Royal Cheese\n");
		break;
		case  2:
		printf("MC Deluxe\n");
		break;
		case 3:
		printf("MC Bacon\n");
		break;
		case 4:
		printf("Big Mac\n");
		break;
		default:
		printf("Vous n'avez pas mis un nombre correct !\n");
		break;
	
	}
	return 0;
}
