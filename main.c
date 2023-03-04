#include "ramzi_and_mahdi.h"


int main()
{
    char hx[50];
    int h,dec_16,dec_2,nn,dec_8,q;      //pour stocker les nombere traiter par les fonction et après l'afficher
    int b_start,b_finish;               //la base de départ et la base d'arriver
    printf("This program can convert : \n");//pour afficher a l'utilisateur qu'est ce que peut le programme convertir vers
    printf("      base 10 --> base 2\n");
    printf("      base 10 --> base 8\n");
    printf("      base 10 --> base 16\n");
    printf("      base 16 --> base 2\n");
    printf("      base 16 --> base 8\n");
    printf("      base 16 --> base 10\n");
    printf("      base 8 --> base 2\n");
    printf("      base 8 --> base 16\n");
    printf("      base 8 --> base 10\n");
    printf("      base 2 --> base 16\n");
    printf("      base 2 --> base 8\n");
    printf("      base 2 --> base 10\n");

    do{//cette do boucle va répéter la convertion si l'utilisateur tapez 1
           do{ // cette do boucle verif si la base de départ entrée c'est entre les bases que le programme peut convertir
    printf("\n enter the base of the number : ");//afficher le message qui demander la base du nombre entrée
    scanf("%d",&b_start);
           }while((b_start!=10) && (b_start!=16) && (b_start!=8) && (b_start!=2));//la boucle va entrer dans l'instruction suivante si et seulement si la base entrée est 8/2/10/16
    switch(b_start){
        //-----la base 10 est la base de départ-----------------------------------------------------
    case 10 :{
    do{printf("Enter the base that u wanna convert to : "); // demander d'entrer la base d'arriver et pour la boucle do sa fonctionalété c'est la précédente
    scanf("%d",&b_finish);}while((b_finish!=10) && (b_finish!=16) && (b_finish!=8) && (b_finish!=2));
                switch (b_finish){
                case 10 :{
                     printf("\n Enter the number : ");
                     scanf("%d",&nn);
                     printf("\n the number in base %d is %d \n",b_finish,nn);};break;//si l'utilisteur entre un nombre de méme base
                case 16 :{
                    printf("\n Enter the number : ");
                    scanf("%d",&nn);
                    dec_hex(nn);};break;//appelle a la fonction dec_hex qui converte un nombre dans la base de départ decimale vers l'hexadecimal
                case 2 :{
                     printf("\n Enter the number :");
                     scanf("%d",&nn);
                     printf("\n the number in base %d is %d \n",b_finish, Dec_to_base(b_finish,nn));};break;//appelle a la fonction dec_to_base pour convertir un nombre dans la base 10 vers la base 2
                case 8 :{
                     printf("\n Enter the number :");
                     scanf("%d",&nn);
                     printf("\n the number in base %d is %d \n",b_finish, Dec_to_base(b_finish,nn));};break;//appelle a la fonction dec_to_base pour convertir un nombre dans la base 10 vers la base 8
                                 };break;
             };break;
        //-----la base 16 est la base de départ-----------------------------------------------------
    case 16 :{
   do{printf("Enter the base that u wanna convert to : ");
    scanf("%d",&b_finish);}while((b_finish!=10) && (b_finish!=16) && (b_finish!=8) && (b_finish!=2));
                switch (b_finish){
                case 10 :{
                    do{
                    printf("\n Enter the number :");
                    scanf("%s",&hx);
                    }while(v(hx)==0);//appelle a la fonction v pour verifier si les chiffres ou les caractère entront son a la base 16 ou non si elle retourner 1 elle va sauter vers la prochaine fonction
                    hh(hx);}break;//appelle a la fonction hh qui converte un nombre a la base 16 vers la base 10
                case 16 :{
                    do{
                    printf("\n Enter the number :");
                    scanf("%s",&hx);
                    }while(v(hx)==0);
                    printf("\n the number in hexadecimal is %s\n",hx);};break;
                case 2 :{
                    do{
                    printf("\n Enter the number :");
                    scanf("%s",&hx);
                    }while(v(hx)==0);


                    printf("\n the number in base 2 is %d \n",Dec_to_base(2,hh(hx)));

                };break;
                case 8 :{
               do{
                    printf("\n Enter the number :");
                    scanf("%s",&hx);
                    }while(v(hx)==0);
                    printf("\n the number in base 10 is %d \n",nn);
                    h=Dec_to_base(8,nn);
                    printf("\n the number in base 8 is %d \n",h);
                };break;
                };break;
                };break;
        //-----la base 8 est la base de départ------------------------------------------------------
    case 8 :{
        do{printf("Enter the base that u wanna convert to : ");
    scanf("%d",&b_finish);}while((b_finish!=10) && (b_finish!=16) && (b_finish!=8) && (b_finish!=2));
                switch (b_finish){
                case 10 :{
                do{
                          printf("\n Enter the number :");
                          scanf("%d",&nn);
                          }while(verif_rest(nn,8)!=1);
                printf("\n the number in decimal is %d \n", to_dec(8,nn));
                };break;
                case 16 :{
                 do{
                          printf("\n Enter the number :");
                          scanf("%d",&nn);
                          }while(verif_rest(nn,8)!=1);
                     dec_8=to_dec(8,nn);
                     dec_hex(dec_8);
                };break;
                case 2 :{
                            do{
                          printf("\n Enter the number :");
                          scanf("%d",&nn);
                          }while(verif_rest(nn,8)!=1);
                      dec_8=to_dec(8,nn);
                      printf("\n the number in base %d is %d \n",b_finish, Dec_to_base(b_finish,dec_8));
                };break;
                case 8 :{
                      do{
                          printf("\n Enter the number :");
                          scanf("%d",&nn);
                          }while(verif_rest(nn,8)!=1);
                printf("\n the number in %d is %d \n",b_finish, nn);
                };break;
                };break;
                };break;
        //-----la base 8 est la base de départ------------------------------------------------------
    case 2 :{
     do{printf("Enter the base that u wanna convert to : ");
    scanf("%d",&b_finish);}while((b_finish!=10) && (b_finish!=16) && (b_finish!=8) && (b_finish!=2));
                switch (b_finish){
                case 10 :{
                    do{
                          printf("\n Enter the number :");
                          scanf("%d",&nn);
                          }while(verif_rest(nn,2)!=1);
                          printf("\n the number in decimal is %d \n", to_dec(2,nn));
                };break;
                case 16 :{
                      do{
                          printf("\n Enter the number :");
                          scanf("%d",&nn);
                          }while(verif_rest(nn,2)!=1);
                          printf("\n the number in decimal is %d \n", to_dec(2,nn));
                      dec_2=to_dec(2,nn);
                      dec_hex(dec_2);

                };break;
                case 2 :{
                          do{
                          printf("\n Enter the number :");
                          scanf("%d",&nn);
                          }while(verif_rest(nn,2)!=1);
                          printf("\n the number in decimal is %d \n", to_dec(2,nn));
                          printf("\n the number in decimal is %d \n", nn);
                };break;
                case 8 :{
                      do{
                          printf("\n Enter the number :");
                          scanf("%d",&nn);
                          }while(verif_rest(nn,2)!=1);
                          printf("\n the number in decimal is %d \n", to_dec(2,nn));
                      dec_2=to_dec(2,nn);
                      printf("\n the number in base %d is %d \n",b_finish, Dec_to_base(b_finish,dec_2));

                };break;
                };break;
                };break;

    }                printf("\nSi vous voullez convertir encore une fois tapez 1 ,sinon tapez n'import quelle autre chiffre : \n");
                scanf("%d",&q);}while(q==1);
   return 0; }
