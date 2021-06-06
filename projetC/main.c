#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct date
{
int jour;
int mois;
int annee;
}date;
typedef struct Voiture
{
int idVoiture;
char marque[15];
char nomVoiture[15];
char couleur[7];
int nbplaces;
int prixJour;
char EnLocation[4];
} voiture;

typedef struct contratLocation
{
float numContrat;
int idVoiture;
int idClient;
date debut;
date fin;
int cout;
} contrat;

typedef struct Client
{
int idClient;
char nom[20];
char prenom[20];
char cin[10];
char adresse[100];
int telephone;
}client;

int MenuPrincipal()
{
    int choix;

	printf("\n                               \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                               \xb3 Menu Principal  \xb3");
	printf("\n                               \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n\n");

    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Location..............................1   \xba");
    printf("\n               \xba    Gestion voitures......................2   \xba");
    printf("\n               \xba    Gestion clients.......................3   \xba");
    printf("\n               \xba    Quitter...............................4   \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n                                Votre choix  :  ");

    scanf("%d",&choix);

    return choix;
}

int MenuVoitures()
{
    int choix;

	printf("\n                      \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                      \xb3    Gestion des voitures   \xb3");
	printf("\n                      \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n\n");

    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Liste des voitures....................1   \xba");
    printf("\n               \xba    Ajouter voiture.......................2   \xba");
    printf("\n               \xba    Modifier voiture......................3   \xba");
    printf("\n               \xba    supprimer voiture.....................4   \xba");
    printf("\n               \xba    Retour................................5   \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n                                Votre choix  :  ");

    scanf("%d",&choix);

    return choix;
}

int MenuClients()
{
    int choix;

	printf("\n                      \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                      \xb3     Gestion des clients   \xb3");
	printf("\n                      \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n\n");

    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Liste des clients.....................1   \xba");
    printf("\n               \xba    Ajouter client........................2   \xba");
    printf("\n               \xba    Modifier client.......................3   \xba");
    printf("\n               \xba    supprimer client......................4   \xba");
    printf("\n               \xba    Retour................................5   \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n                                Votre choix  :  ");

    scanf("%d",&choix);

    return choix;
}

int MenuLocations()
{
    int choix;

	printf("\n                      \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n                      \xb3    Location d'une voiture     \xb3");
	printf("\n                      \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

    printf("\n\n");

    printf("\n               \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n               \xba                                              \xba");
    printf("\n               \xba    Visualiser contrat....................1   \xba");
    printf("\n               \xba    Louer voiture.........................2   \xba");
    printf("\n               \xba    Retourner voiture.....................3   \xba");
    printf("\n               \xba    Modifier contrat......................4   \xba");
    printf("\n               \xba    Supprimer contrat.....................5   \xba");
    printf("\n               \xba    Retour................................6   \xba");
    printf("\n               \xba                                              \xba");
    printf("\n               \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("\n\n                                Votre choix  :  ");

    scanf("%d",&choix);

    return choix;
}

void gestionvoitures()
{
    int choix;
    char *file=(char*)malloc(20*sizeof(char));
    char *ch=(char*)malloc(10*sizeof(char));
    file="Voitures.txt";
    ch="voiture";
    do
    {
        choix=MenuVoitures();
        switch (choix)
        {
        case 1 : list(file,ch);
                 break;
        case 2 : ajouterv(file);
                 break;
        case 3 : modifier(file,ch);
                 break;
        case 4 : supprimer(file,ch);
                 break;
        case 5 : break;
        default : printf("\n                           le nombre incorrect !!!\n");
        }
    }while(choix!=5);
    free(file);
    free(ch);
}

void gestionclients()
{
    int choix;
    char *file=(char*)malloc(20*sizeof(char));
    char *ch=(char*)malloc(10*sizeof(char));
    file="Clients.txt";
    ch="client";
    do
    {
        choix=MenuClients();
        switch (choix)
        {
        case 1 : list(file,ch) ;
                 break;
        case 2 : ajouterc(file);
                 break;
        case 3 : modifier(file,ch);
                 break;
        case 4 : supprimer(file,ch);
                 break;
        case 5 : break;
        default : printf("\n                           le nombre incorrect !!!\n");
        }
    }while(choix!=5);
    free(file);
    free(ch);
}

void gestionlocations()
{
    int choix;
    char *file=(char*)malloc(20*sizeof(char));
    char *ch=(char*)malloc(10*sizeof(char));
    file="ContratsLocations.txt";
    ch="contrat";
    do
    {
        choix=MenuLocations();
        switch (choix)
        {
        case 1 : visualiser() ;
                 break;
        case 2 : louer();
                 break;
        case 3 : ;
                 break;
        case 4 : modifier(file,ch);
                 break;
        case 5 : supprimer(file,ch);
                 break;
        case 6 : break;
        default : printf("\n                           le nombre incorrect !!!\n");
        }
    }while(choix!=6);
}

void list(char * nom,char *ch)
{
    FILE* fichier=fopen(nom,"r");
    char T[150];
    printf("\n");
    printf("\n\n                              List des %ss  :  ",ch);
    printf("\n");
    printf("\n");
    while(fgets(T,100,fichier))
    {
        printf("    %s",T);
    }

    fclose(fichier);
}

void ajouterv(char *nom)
{
    FILE *fichier=fopen(nom,"a");
    voiture car;
    printf("          entrer le ID \t");
    scanf("%d",&car.idVoiture);
    printf("          entrer la marque \t");
    scanf("%s",car.marque);
    printf("          entrer le nom \t");
    scanf("%s",car.nomVoiture);
    printf("          entrer le couleur \t");
    scanf("%s",car.couleur);
    printf("          entrer le numero du place \t");
    scanf("%d",&car.nbplaces);
    printf("          entrer le prix de location par jour\t");
    scanf("%d",&car.prixJour);
    printf("          la voiture est il louee ?  Oui | Non\t");
    scanf("%s",car.EnLocation);

    fprintf(fichier,"n:%d | %s | %s | %s | place:%d | prix par jour:%d | Location:%s .\n",car.idVoiture,car.marque,car.nomVoiture,car.couleur,car.nbplaces,car.prixJour,car.EnLocation);

    fclose(fichier);
}

void ajouterc(char *nom)
{
    FILE *fichier=fopen(nom,"a");
    client per;
    printf("              entrer le ID \t");
    scanf("%d",&per.idClient);
    printf("              entrer le nom \t");
    scanf("%s",per.nom);
    printf("              entrer le prenom \t");
    scanf("%s",per.prenom);
    printf("              entrer le CIN \t");
    scanf("%s",per.cin);
    printf("              entrer l'adressse \t");
    scanf("%s",per.adresse);
    printf("              entrer le telephon \t");
    scanf("%d",&per.telephone);

    fprintf(fichier,"n:%d | %s | %s | CIN:%s | adresse:%s | Telephone:%d .\n",per.idClient,per.nom,per.prenom,per.cin,per.adresse,per.telephone);

    fclose(fichier);
}

void modifier(char *nom,char *t)
{
    char T[100],id[10]="n:",ch[6],info[50],ninfo[50],rest[100];
    int x=0,n,y,z,r,i=0;
    FILE *fichier=fopen(nom,"r+");
    do{
    printf("                           entrer l'id du %s :\t",t);
    getchar();
    gets(ch);
    strcat(id,ch);
    while(fgets(T,150,fichier))
    {
        if(strstr(T,id))
        {
            puts(T);
            x=1;
            do{printf("entrer la valeur complet du case que vous voullez changer :\t");
            scanf("%s",info);
            if(strstr(T,info))
            {
                printf("                         entrer la nouvelle valeur :\t");
                scanf("%s",ninfo);
                n=(-1)*(strstr(T,".")-strstr(T,info)+3);
                z=n;
                while(info[i]!='\0')
                {
                    i++;
                    z++;
                }
                fseek(fichier,z,SEEK_CUR);
                fgets(rest,150,fichier);
                fseek(fichier,n,SEEK_CUR);
                fprintf(fichier,"%s",ninfo);
                fprintf(fichier,"%s",rest);
            }
            else printf("\n Cette valeur n'existe pas dans les infomations de %s que vous avez choisi !!!\n",t);
                printf("\n voullez-vous changer une autre valeur ?  1=OUI  0=NON\t");
                scanf("%d",&y);
                printf("\n");
            }while(y==1);
            break;
        }
    }
    if(x==0)
        {
            printf("\n ce id n'existe pas dans la liste des %ss \n",t);
            printf("\n voulez-vous entre un nouveau id ??   1=OUI  0=NON\t");
            scanf("%d",r);
        }
    }while(r==1);

    fclose(fichier);
}

int supprimer(char *nom,char *t)
{
    char ch[100],c[5],id[7]="n:";
    int x=0,y=0,r;
    FILE *fichier=fopen(nom,"r+");
    FILE *fich=fopen("copie.txt","w+");
    do{
    r=0;
    printf("                  entrer l'id de %s que tu veux supprimer:\t",t);
    scanf("%s",c);
    strcat(id,c);
    while(fgets(ch,100,fichier))
    {
       if(strstr(ch,id))
       {
          y=1;
          printf("                           vous avez choisi :\n");
          puts(ch);
          printf("\nvoulez-vous supprime ces information ??: 1=Oui  0=Non\t",t);
          scanf("%d",&x);
          if(x)continue;
       }
       fprintf(fich,"%s",ch);
    }
    fclose(fichier);
    fclose(fich);
    remove(nom);
    rename("copie.txt",nom);
    if(!y)
    {
        printf("ce id n'existe pas dans la liste des %ss \n",t);
        printf("voulez-vous entre un nouveau id ??   1=OUI  0=NON\t");
        scanf("%d",r);
    }
    }while(r==1);
}

void visualiser()
{
    char T[100],ch[4],id[10]="n:";
    int r,x=0;
    FILE *fichier=fopen("ContratsLocations.txt","r");
    do{
    r=0;
    printf("                           entrer l'id du cotrat :\t");
    getchar();
    gets(ch);
    strcat(id,ch);
    while(fgets(T,100,fichier))
    {
        if(strstr(T,id))
        {
            x=1;
            printf("\n                              vous avez choisi :\n\n   ");
            puts(T);
        }
    }
    if(!x)
    {
        printf("\nce id n'existe pas dans la liste des contrats \n");
        printf("\nvoulez-vous entre un nouveau id ??   1=OUI  0=NON\t");
        scanf("%d",&r);
    }
    }while(r==1);
    fclose(fichier);
}

void louer()
{
    char separ[4]=" | ",nom[40],prenom[20];
    char mark[30],vnom[10],color[7],location[15]="Location:Oui";
    char T[100];
    int c,r,v,a;
    FILE *fichv=fopen("Voitures.txt","r+");
    FILE *fichc=fopen("Clients.txt","r+");
    FILE *fichl=fopen("ContratsLocations.txt","r+");
    do
    {
        c=0;
        printf("                    entrer votre nom\t");
        getchar();
        gets(nom);
        printf("                    entrer votre prenom\t");
        scanf("%s",prenom);
        strcat(nom,separ);
        strcat(nom,prenom);
        while(fgets(T,100,fichc))
        {
            if(strstr(T,nom))
            {
                c=1;
                break;
            }
        }
        if(!c)
        {
            printf("\n        ce nom n'exist pas dans la list des clients !!!\n");
            printf("\n        Veuillez enregistrer votre nom dans la list des clients  !!!");
            printf("\n        Voullez-vous entrer a nouveau votre nom et prenom 1=OUI 0=NON\t");
            scanf("%d",&r);
            if(r==0) break;
        }
    }while(c==0);

    while(c==1)
    {
        v=0;
        printf("                    entrer la marque de la voiture\t");
        scanf("%s",mark);
        printf("                    entrer la nom de la voiture\t");
        scanf("%s",vnom);
        printf("                    entrer le couleur de la voiture\t");
        scanf("%s",color);
        strcat(mark,separ);
        strcat(mark,vnom);
        strcat(mark,separ);
        strcat(mark,color);
        while(fgets(T,100,fichv))
        {
            if(strstr(T,mark))
               {
                   v=1;
                   fseek(fichv,-16,SEEK_CUR);
                fprintf(fichv,"%s",location);
                   break;
               }
        }
        if(v==1)
        {

            if(strstr(T,"Location:Oui"))
            {
                printf("\n        cette voiture est dejat louee !!!\n");
                printf("\n        Voullez-vous entrer une autre voiture 1=OUI 0=NON\t");
                scanf("%d",&r);
                if(r==0) break;
            }
        }
        else
        {
            printf("\n        cette voiture n'exist pas dans la list des voitures !!!\n");
            printf("\n        Voullez-vous entrer une autre voiture 1=OUI 0=NON\t");
            scanf("%d",&r);
            if(r==0) break;
        }

    }



    fclose(fichv);
    fclose(fichc);
    fclose(fichl);
}

main()
{
    int choix;
	do
    {
        choix=MenuPrincipal();

        switch(choix)
        {
            case 1 : gestionlocations();
                     break;
            case 2 : gestionvoitures();
                     break;
            case 3 : gestionclients();
                     break;
            case 4 : break;
            default : printf("\n                           le nombre incorrect !!!\n");
        }
    }while(choix!=4);
}

