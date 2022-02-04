#include <stdio.h>
#include <windows.h>
//constantes
#define FLOUR_PER_PERSONS 125
#define MILK_PER_PERSONS 0.25
#define EGGS_PER_PERSONS 1.5
#define SALT_PER_PERSONS 0.5
#define BUTTER_PER_PERSONS 0.5

int (Farine) {
Farine = persmangeurs * FLOUR_PER_PERSONS;
}
int Lait;
{
Lait = persmangeurs * MILK_PER_PERSONS;
}
int Oeufs;
{
Oeufs = persmangeurs * EGGS_PER_PERSONS;
}
int Sel;
{
Sel = persmangeurs * SALT_PER_PERSONS;
}
int Beurre;
{
Beurre = persmangeurs * BUTTER_PER_PERSONS;
}
int main() {
    // Gestion des accents dans la console
    SetConsoleOutputCP(65001);

    //le pc demande à l'utilisateur combien de mangeurs il y aura
    int persmangeurs;
    printf("---- CHANDELEUR ----\n");
    printf("Entre le nombre de personnes qui mangeront des crêpre :\n");
    scanf("%d", persmangeurs);
}


    printf("Les ingrédient nécssaire pour %f personnes sont :\n",persmangeurs);
    printf("Farine : %d g\n",Farine);
    printf("Lait : %d l\n",Lait);
    printf("Oeufs : %d\n",Oeufs);
    printf("Sel : %d pincées\n",Sel);
    printf("Beurre : %d cuille\n",Beurre);
    return 0;

}


