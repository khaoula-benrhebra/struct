#include<stdio.h>
typedef struct 
{
    char nom[30];
    char entraineur[40];
    char stade[40];
    char pays[30]
}Equipe;

typedef struct 
{
int num;
char nom [50];
char poste [20];
Equipe eqp;
}joueur ;
int main()
{
    joueur j[4] ;
    for (int i = 0; i < 4; i++)
    {
        printf("entrer le numero du joueur n%d :",i+1);
        scanf("%d",&j[i].num);
        printf("entrer le nom du joueur n%d :",i+1);
        scanf(" %[^\n]s",&j[i].nom);
        printf("entrer le poste du joueurn%d :",i+1);
        scanf(" %[^\n]s",&j[i].poste);
        printf("entrer le  nom de l'equipe du joueur n%d :",i+1);
        scanf(" %[^\n]s",&j[i].eqp.nom);
        printf("entrer le  nom de l'entraineur du joueur n%d :",i+1);
        scanf(" %[^\n]s",&j[i].eqp.entraineur);
        printf("entrer le  nom de stade du joueur n%d :",i+1);
        scanf(" %[^\n]s",&j[i].eqp.stade);
        printf("entrer le  nom de pays du joueur n%d :",i+1);
        scanf(" %[^\n]s",&j[i].eqp.pays);

    }
    
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