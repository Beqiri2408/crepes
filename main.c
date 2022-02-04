/**
 * Auteur:      Musli Beqiri (CPNV)
 * Date:        04.02.2022
 * Titre:       Crepes
 * Description: il calcule les ingrédients pour la pate à crepes selon le nombre de personnes présentes.
 */
#include <stdio.h>
#include <windows.h>
//constantes
#define FLOUR_PER_PERSONS 125
#define MILK_PER_PERSONS 0.25
#define EGGS_PER_PERSONS 1.5
#define SALT_PER_PERSONS 0.5
#define BUTTER_PER_PERSONS 0.5
// fonction qui calcule la farine
float Farine (int NbPersonnes) {
    return NbPersonnes * FLOUR_PER_PERSONS;
}
// fonction qui calcule la quantité du lait par le nombre de personnes
float Lait (int NbPersonnes){
    return NbPersonnes * MILK_PER_PERSONS;
}
// fonction qui calcule le nombre d'oeufs par le nombre de personnes
int Oeufs(int NbPersonnes){
    return NbPersonnes * EGGS_PER_PERSONS;
}
// fonction qui calcule le nombre de pincées de sel par le nombre de personnes
int Sel(int NbPersonnes){
    return NbPersonnes * SALT_PER_PERSONS;
}
// fonction qui calcule la quantité de beurre par le nombre de personnes
int Beurre(int NbPersonnes){
    return NbPersonnes * BUTTER_PER_PERSONS;
}
// fonction main
int main() {
    // Gestion des accents dans la console
    SetConsoleOutputCP(65001);

    //le pc demande à l'utilisateur combien de personne  il y aura
    int NbPersonnes;
    printf("---- CHANDELEUR ----\n"); // il écrit ---- CHANDELEUR ---- dans la console
    printf("Entre le nombre de personnes qui mangeront des crêpre :\n"); //
    scanf("%d", &NbPersonnes); // il instrit le nombre de personnes


    printf("Les ingrédient nécssaire pour %d personnes sont :\n",NbPersonnes);
    printf("Farine : %.2f g\n",Farine(NbPersonnes));
    printf("Lait : %.2f l\n",Lait(NbPersonnes));
    printf("Oeufs : %d\n",Oeufs(NbPersonnes));
    printf("Sel : %d pincées\n",Sel(NbPersonnes));
    printf( "Beurre : %d cuillères\n",Beurre(NbPersonnes));
    printf("\nBonne dégustation !");
    return 0;

}


