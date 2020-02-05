#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item {
    char name[20];
    int qt;
    int prix;


 }temp;

 typedef struct Item item;

int main(){


  item inventaire[20] = {{"potion de mana",1,15},{"arc",2,10},{"potion de soin",2,18},{"epee",2,13},{"fleches",1,11}};
  item magasin[20] = {{"katana",1,25},{"armure en cuir",2,15},{"bouclier",2,20},{"sacoche",2,10},{"arc enchantee",1,30}};
  int i, j, userInput, quit, n=4 , x=6;

for(;;){

  for (i = 0; i < n ; i++)
    {
      for (j = i ; j < n+1; j++)
      {
          if (strcmp(inventaire[i].name, inventaire[j].name) > 0)
          {
                          temp = inventaire[i];
                          inventaire[i] = inventaire[j];
                          inventaire[j] = temp;


          }
      }
  }

  printf("\n ------------------------------------------\n");
  printf("|                Inventaire               |\n");
  printf(" ------------------------------------------\n");
  printf("|         PRIX       |        NOM         |\n");
  printf(" ------------------------------------------\n");
  for (i = 0; i < n+1; i++)
  {
      printf("       %d rubis      |    %s         \n", inventaire[i].prix, inventaire[i].name);
  }
  printf(" ------------------------------------------\n");

  for (i = 0; i < (x-1); i++)
   {
       for (j = 0; j < (x-1); j++)
       {
           if (magasin[j].prix < magasin[j + 1].prix)
           {
               temp = magasin[j];
               magasin[j] = magasin[j + 1];
               magasin[j + 1] = temp;
           }
       }
   }

  printf("\n ------------------------------------------\n");
  printf("|                  Magasin                |\n");
  printf(" ------------------------------------------\n");
  printf("|         PRIX       |        NOM         |\n");
  printf(" ------------------------------------------\n");

  for (i = 0; i < x-1; i++)
    {
      printf("       %d rubis      |       %s         \n", magasin[i].prix, magasin[i].name);
    }

  printf(" ------------------------------------------\n");

  printf("\nSouhaitez vous acheter un objet au marchand ? \n1- Oui 2- Non\n");
  scanf("%d",&userInput);


while((1 > userInput || userInput > 2)){
  printf("Ce choix n'est pas valide\n" );
  scanf("%d",&userInput );

}
  if (userInput==1){
    printf("\nVeuillez entrer le numero de l'objet que vous souhaitez acheter.\n");
    scanf("%d",&userInput );

      while((1 > userInput || userInput >= x)){
        printf("Ce choix n'est pas valide\n" );
        scanf("%d",&userInput );
      }

    userInput=userInput-1;
    printf("Vous avez achete %s\n", magasin[userInput].name);
    n+=1;
    inventaire[n]=magasin[userInput];
    magasin[userInput]=magasin[x];
    x+=-1;
  }
  else if (userInput==2){
}

  printf("\nSouhaitez vous ajouter un objet au magasin ? \n1- Oui 2- Non\n");
    scanf("%d",&userInput);

    while((1 > userInput || userInput > 2)){
      printf("Ce choix n'est pas valide\n" );
      scanf("%d",&userInput );
    }


  if (userInput==1){
      printf("\nVeuillez entrer le nom de l'objet.\n");
      scanf("%s",&magasin[x].name);
      printf("\nVeuillez entrer le prix de l'objet.\n");
      scanf("%d",&magasin[x].prix);
      x+=1;

    }
    else if (userInput==2){
  }
}

}
