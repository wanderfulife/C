#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main( int argc, char** argv) {

int number = 0, continuer = 1, nombreMystere = 0, nombreDeTour = 1;
int MAX = 0, MIN = 0;
srand(time(NULL));
char response[3];
char yes[4] = "yes";
int value;
int numberOfPlayers = 0;
int nombreChoisi, level;

while(continuer){

printf("Number of players ? (1 or 2)\n");
scanf("%d",&numberOfPlayers);


if(numberOfPlayers == 1) {
  printf("Choose Level of Difficulty 1/2/3 :\n");
  scanf("%d",&level);
if(level == 2){
  MAX = 1000;
  } else if(level == 3) {
  MAX = 10000;
  } else {
  MAX = 100;
  }
nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
printf("Find the number : ");
}
else
 {
printf("==== 2 Players ====\n\n");
printf("Player 1 \n  Choose a number : ");
scanf("%d",&nombreChoisi);
nombreMystere = nombreChoisi;
system("clear");
printf("Player 2 \n Find the number : ");

}


do {

scanf("%d",&number);

	
if (number < nombreMystere){
printf("C'est plus ! ");
nombreDeTour++;

}

else if (number > nombreMystere){
printf("C'est moins ! ");
nombreDeTour++;
}

else {
printf("Bravo, vous avez trouve le nombre mystere en %d coups !!! \n",nombreDeTour);
printf("Encore? (yes / no)\n");
scanf("%s",response);
value = strcmp(response,yes);
if (value == 0){
continuer = 1;
nombreDeTour = 1;
} else {
continuer = 0;
}


 }
}
while (number != nombreMystere);
}
return 0;
}
