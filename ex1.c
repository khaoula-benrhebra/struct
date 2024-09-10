#include<stdio.h>

typedef struct 
{
int num;
char nom [50];
char poste [20];
}joueur ;
int main()
{
    joueur j1 ,j2 ,j3 ;
    printf("entrer le numero du 1er joueur :");
    scanf("%d",&j1.num);
    printf("entrer le nom du 1er joueur :");
    scanf(" %[^\n]s",&j1.nom);
    printf("entrer le poste du 1er joueur :");
    scanf(" %[^\n]s",&j1.poste);

    printf("entrer le numero du 2eme joueur :");
    scanf("%d",&j2.num);
    printf("entrer le nom du 2eme joueur :");
    scanf(" %[^\n]s",&j2.nom);
    printf("entrer le poste du 2eme joueur :");
    scanf(" %[^\n]s",&j2.poste);

    printf("entrer le numero du 3eme joueur :");
    scanf("%d",&j3.num);
    printf("entrer le nom du 3eme joueur :");
    scanf(" %[^\n]s",&j3.nom);
    printf("entrer le poste du 3eme joueur :");
    scanf(" %[^\n]s",&j3.poste);

    printf("le 1er joueur : %d - %s -%s \n",j1.num,j1.nom,j1.poste);
    printf("le 2eme joueur : %d - %s -%s \n",j2.num,j2.nom,j2.poste);
    printf("le 3eme joueur : %d - %s -%s \n",j3.num,j3.nom,j3.poste);
    return 0;
}