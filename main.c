#include <stdio.h>
#include <stdlib.h>

// définition de la fonction increment de type void
void increment(int* nombre) // paramètre de int
{
    (*nombre)++; // incrémente (ajoute 1 à la valeur) la valeur contenue dans le pointeur
}

// fonction main, le point d'entrée du programme
int main() {
    int compteur = 0; // assigner 0 à la variable compteur de type int
    // assigner l'adresse de la variable compteur
    int* compteurPointeur =& compteur;

    while (compteur < 10) // boucle "tant que" compteur est inférieur à 10
{
    // affiche la valeur contenue dans le pointeur ; ce qui donne ' 12345678910 '.
    increment(compteurPointeur); 
    printf("%d\n", *compteurPointeur); 
    /* incrémente la valeur contenue dans le pointeur à l'aide
    de la fonction increment qui prend en argument un pointeur */
}

    return 0; // fin du programme, on retourne la valeur 0
}