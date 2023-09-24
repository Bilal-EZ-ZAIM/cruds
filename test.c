#include <stdio.h>
#include <string.h> // strcyp(t,s); t:makan fin radi n7to ans ; s = string
#include <time.h>
int count = 0;
int id = 1;
struct etdion
{
    int id;
    char nom[30]; // char nom[30] = {'s','a','l','m','a','\0'};
    char prenom[30];
    int age;
    int dedlian ;
} info[100];

void ajout()
{
    info[count].id = id;
    printf("ecrire age : ");
    scanf("%d", &info[count].age);
    printf("ecrire nom : ");
    getchar();
    scanf("%[^\n]", &info[count].nom);
    printf("ecrire prenom : ");
    getchar();
    scanf("%[^\n]", &info[count].prenom); // espace
    printf("ecrire deadlin : ");
    scanf("%d", &info[count].dedlian);
    count++;
    id++;
    printf("count = %d\n", count);
}
void fonctionMosa3ida(int index)
{
    printf("count = %d\n", count);
    printf("id = %d\n", info[index].id);
    printf("age = %d\n", info[index].age);
    printf("nom = %s\n", info[index].nom);
    printf("prenom = %s\n", info[index].prenom);
    printf("moyan = %d\n", info[index].dedlian);
}
void afficher()
{

    for (int i = 0; i < count; i++)
    {
        fonctionMosa3ida(i);
    }
}
int recherch()
{
    int rech = 0;
    int index = 0;
    printf("ecrere id ");
    scanf("%d", &rech);
    for (int i = 0; i < count; i++)
    {
        if (info[i].id == rech)
        {
            index = i;
            fonctionMosa3ida(index);
            break;
        }
    }
    return index;
}
void modiefir()
{

    int ind = recherch();
    printf("%d\n", ind);

    printf("novelle nom");
    getchar();
    scanf("%[^\n]", &info[ind].nom);
    printf("novelle renom");
    getchar();
    scanf("%[^\n]", &info[ind].prenom);

        printf("novelle dedlune");

 scanf("%d", &info[ind].dedlian);

    fonctionMosa3ida(ind);
    
}

void suppremi(){
    int ind = recherch();
    printf("%d\n", ind);
    for (int i = ind; i < count; i++)
    {
        info[i] = info[i+1];
    }
    count--;
}
void affich3jour(){
    for(int i = 0 ; i < count ; i++){
        if(info[i].dedlian <= 3){
            fonctionMosa3ida(i);
        }
    }
}

int main()
{
    int choix = 0;

    while (1)
    {
        printf("1.ajout\n");
        printf("2.aficharer\n");
        printf("3.recherch\n");
        printf("4.modiefier\n");
        printf("5.supprem\n");
        printf("6. 3 jour\n");
        printf("0.stop\n");

        printf("ecrire le choix : ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            ajout();
            break;
        case 2:
            afficher();
            break;
        case 3:
            recherch();
            break;
        case 4:
            modiefir();
            break;
        case 5:
            suppremi();
            break;
        case 6:
            affich3jour();
            break;
        case 0:
            return 0;
            break;

        default:
            break;
        }
    }

    //    strcpy(info.nom,"houda");
    //    strcpy(info.prenom,"prenom");
    //     info.id = 7;
    //     info.age = 17;

    return 0;
}
