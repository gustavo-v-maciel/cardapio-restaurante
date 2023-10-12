//IMPORTANDO BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>


int main(void){

//SETA O IDIOMA PARA PORTUGU�S DO BRASIL
setlocale(LC_ALL, "Portuguese");

    //DEFINI��O DAS VARI�VEIS - FORAM USADAS TIPOS DE DADOS INT -OCUPA 4 BYTES DE MEM�RIA- E FLOAT -TAMB�M OCUPA 4 BYTES DE MEM�RIA-
    int menu = 0, porcao = 0, sobremesa = 0, bebidas = 0, decisao = 0, fim = 0;
    float batata = 12.50 , frango = 16.80, tilapia = 32.99, alcatra = 65.99;
    float bolo = 7.99, pudim = 9.49, brigadeiro = 1.50, petit = 18.50;
    float agua = 2.00, suco = 8.49, coca = 6.99, chopp = 12.99;
    float total = 0;

            //IN�CIO DO LA�O DE REPETI��O PRINCIPAL
            do{
                printf("---------- POR��ES & CIA ----------\n\n");
                printf("----------------MENU---------------\n");
                printf("| 1- Por��es                       |\n");
                printf("| 2- Sobremesa                     |\n");
                printf("| 3- Bebidas                       |\n");
                printf("|    Qual op��o deseja abrir?      |\n");
                printf("-----------------------------------\n");
                scanf("%d", &menu);


                    if((menu == 1) || (menu == 2) || (menu == 3)){

                        //OP��O POR��O
                        if(menu==1){
                        printf("--------------POR��O----------------\n");
                        printf("| 1- Batata Frita     |   R$12,50  |\n");
                        printf("| 2- Frango Frito     |   R$16,80  |\n");
                        printf("| 3- Fil� de til�pia  |   R$32,99  |\n");
                        printf("| 4- Alcatra          |   R$65,99  |\n");
                        printf("|    Qual op��o deseja abrir?      |\n");
                        printf("-----------------------------------\n");
                        scanf("%d", &porcao);

                            if(porcao == 1){
                                printf("\nBatata Frita - R$12,50 | Adicionada ao pedido\n");
                                //VARI�VEL TOTAL ASSUME E RECEBE O VALOR FLOAT DA VARI�VEL BATATA
                                total += batata;
                                }

                            if(porcao == 2){
                                printf("\nFrango Frito - R$16,80 | Adicionada ao pedido\n");
                                //VARI�VEL TOTAL ASSUME E RECEBE O VALOR FLOAT DA VARI�VEL FRANGO
                                total += frango;
                                }

                            if(porcao == 3){
                                printf("\nFil� de Til�pia - R$32,99 | Adicionada ao pedido\n");
                                //VARI�VEL TOTAL ASSUME E RECEBE O VALOR FLOAT DA VARI�VEL TILAPIA
                                total += tilapia;
                                }

                            if(porcao == 4){
                                printf("\nAlcatra - R$65,99 | Adicionada ao pedido\n");
                                //VARI�VEL TOTAL ASSUME E RECEBE O VALOR FLOAT DA VARI�VEL ALCATRA
                                total += alcatra;
                                }

                        //SE OP��O DIGITADA FOR DIFERENTE DE 1,2,3 e 4, APAGA A TELA E IMPRIME A MENSAGEM DE OP��O INV�LIDA
                           if((porcao!= 1) && (porcao != 2) && (porcao != 3) && (porcao != 4)){

                                printf("Op��o inv�lida. Por favor, tecle ENTER para selecionar novamente!\n\n");
                                //UTILIZA A FUN��O GETCHAR(); DUAS VEZES PARA QUE O SOFTWARE AGUARDE AT� O USU�RIO TECLAR ENTER PARA CONTINUAR
                                getchar();
                                getchar();
                                system("cls");
                            }
                            else{
                                printf("\nDeseja algo mais?\n");
                                printf("1- Sim\n");
                                printf("2- N�o\n");
                                scanf("%d", &decisao);

                                //SE SELECIONADO 1 MANT�M DENTRO DO LA�O DE REPET��O
                                if(decisao == 1){
                                    system("cls");
                                }

                                //SE SELECIONADO 2 SAI DO LA�O DE REPETI��O
                                if(decisao == 2){
                                    menu = fim;
                                    system("cls");

                                    /* AO SAIR DO LA�O, TENDO O PEDIDO ENCERRADO, SER� APRESENTADO O
                                        VALOR FLOAT DA VARI�VEL TOTAL, CONFORME A MESMA FOI ACUMULANDO
                                        VALORES DE ACORDO COM O PEDIDOS */
                                    printf("\nTotal do pedido: R$%5.2f", total);
                                    printf("\nSEU PEDIDO EST� SENDO PREPARADO!\n");
                                    printf("\nOBRIGADO PELA CONFIAN�A!!!\n");
                                }
                            }
                        }

                //OP��O SOBREMESA
                if(menu == 2){

                    printf("-------------SOBREMESA--------------\n");
                    printf("| 1- Bolo de Chocolate  |  R$7,99  |\n");
                    printf("| 2- Pudim              |  R$9,49  |\n");
                    printf("| 3- Brigadeiro         |  R$1,50  |\n");
                    printf("| 4- Petit Gateau       |  R$18,50 |\n");
                    printf("|    Qual op��o deseja abrir?      |\n");
                    printf("-----------------------------------\n");
                    scanf("%d", &sobremesa);

                            if(sobremesa == 1){
                                printf("\nBolo de Chocolate - R$7,99 | Adicionada ao pedido\n");
                                //VARI�VEL TOTAL ASSUME E RECEBE O VALOR FLOAT DA VARI�VEL BOLO
                                total += bolo;
                              }
                            if(sobremesa == 2){
                                printf("\nPudim - R$9,49 | Adicionada ao pedido\n");
                                //VARI�VEL TOTAL ASSUME E RECEBE O VALOR FLOAT DA VARI�VEL PUDIM
                                total += pudim;
                              }
                            if(sobremesa == 3){
                                printf("\nBrigadeiro - R$1,50 | Adicionada ao pedido\n");
                                //VARI�VEL TOTAL ASSUME E RECEBE O VALOR FLOAT DA VARI�VEL BRIGAGEIRO
                                total += brigadeiro;
                              }
                            if(sobremesa == 4){
                                printf("\nPetit Gateau - R$18,50 | Adicionada ao pedido\n");
                                //VARI�VEL TOTAL ASSUME E RECEBE O VALOR FLOAT DA VARI�VEL PETIT
                                total += petit;
                              }

                            //SE OP��O DIGITADA FOR DIFERENTE DE 1,2,3 e 4, APAGA A TELA E IMPRIME A MENSAGEM DE OP��O INV�LIDA
                             if((sobremesa != 1) && (sobremesa != 2) && (sobremesa != 3) && (sobremesa != 4)){

                                printf("Op��o inv�lida. Por favor, tecle ENTER para selecionar novamente!\n\n");
                                //UTILIZA A FUN��O GETCHAR(); DUAS VEZES PARA QUE O SOFTWARE AGUARDE AT� O USU�RIO TECLAR ENTER PARA CONTINUAR
                                getchar();
                                getchar();
                                system("cls");
                             }

                        else{
                        printf("\nDeseja algo mais?\n");
                        printf("1- Sim\n");
                        printf("2- N�o\n");
                        scanf("%d", &decisao);

                            //SE SELECIONADO 1 MANT�M DENTRO DO LA�O DE REPET��O
                            if(decisao == 1){
                            system("cls");}

                            //SE SELECIONADO 2 SAI DO LA�O DE REPETI��O
                            if(decisao == 2){
                            menu = fim;
                            system("cls");

                            /* AO SAIR DO LA�O, TENDO O PEDIDO ENCERRADO, SER� APRESENTADO O
                                VALOR FLOAT DA VARI�VEL TOTAL, CONFORME A MESMA FOI ACUMULANDO
                                VALORES DE ACORDO COM O PEDIDOS */
                            printf("\nTotal do pedido: R$%5.2f", total);
                            printf("\nSEU PEDIDO EST� SENDO PREPARADO!\n");
                            printf("\nOBRIGADO PELA CONFIAN�A!!!\n");
                        }
                    }
                }

                //OP��O BEBIDAS
                if(menu == 3){

                    printf("--------------BEBIDAS-------------\n");
                    printf("| 1- �gua            |   R$2,00   |\n");
                    printf("| 2- Suco de Laranja |   R$8,49   |\n");
                    printf("| 3- Coca-Cola       |   R$6,99   |\n");
                    printf("| 4- Chopp           |   R$12,99  |\n");
                    printf("|    Qual op��o deseja abrir?     |\n");
                    printf("-----------------------------------\n");
                    scanf("%d", &bebidas);

                            if(bebidas == 1){
                                printf("\n�gua - R$2,00 | Adicionada ao pedido\n");
                                //VARI�VEL TOTAL ASSUME E RECEBE O VALOR FLOAT DA VARI�VEL AGUA
                                total += agua;
                             }
                            if(bebidas == 2){
                                printf("\nSuco de Laranja - R$8,49 | Adicionada ao pedido\n");
                                //VARI�VEL TOTAL ASSUME E RECEBE O VALOR FLOAT DA VARI�VEL SUCO
                                total += suco;
                             }
                            if(bebidas == 3){
                                printf("\nCoca-Cola - R$6,99 | Adicionada ao pedido\n");
                                //VARI�VEL TOTAL ASSUME E RECEBE O VALOR FLOAT DA VARI�VEL COCA
                                total += coca;
                             }
                            if(bebidas == 4){
                                printf("\nChopp - R$12,99 | Adicionada ao pedido\n");
                                //VARI�VEL TOTAL ASSUME E RECEBE O VALOR FLOAT DA VARI�VEL CHOPP
                                total += chopp;
                             }

                            //SE OP��O DIGITADA FOR DIFERENTE DE 1,2,3 e 4, APAGA A TELA E IMPRIME A MENSAGEM DE OP��O INV�LIDA
                            if((bebidas!= 1) && (bebidas != 2) && (bebidas != 3) && (bebidas != 4)){

                                printf("Op��o inv�lida. Por favor, tecle ENTER para selecionar novamente!\n\n");
                                //UTILIZA A FUN��O GETCHAR(); PARA QUE O SOFTWARE AGUARDE AT� O USU�RIO TECLAR ENTER PARA CONTINUAR
                                getchar();
                                getchar();
                                system("cls");
                            }
                            else{
                                printf("\nDeseja algo mais?\n");
                                printf("1- Sim\n");
                                printf("2- N�o\n");
                                scanf("%d", &decisao);

                                //SE SELECIONADO 1 MANT�M DENTRO DO LA�O DE REPET��O
                                if(decisao == 1){
                                    system("cls");
                                }

                                //SE SELECIONADO 2 SAI DO LA�O DE REPETI��O
                                if(decisao == 2){
                                    menu = fim;
                                    system("cls");

                                    /* AO SAIR DO LA�O, TENDO O PEDIDO ENCERRADO, SER� APRESENTADO O
                                        VALOR FLOAT DA VARI�VEL TOTAL, CONFORME A MESMA FOI ACUMULANDO
                                        VALORES DE ACORDO COM O PEDIDOS */
                                    printf("\nTotal do pedido: R$%5.2f", total);
                                    printf("\nSEU PEDIDO EST� SENDO PREPARADO!\n");
                                    printf("\nOBRIGADO PELA CONFIAN�A!!!\n");
                                }
                            }
                        }
                    }
                    else{
                        printf("Op��o inv�lida. Por favor, tecle ENTER para selecionar novamente!\n\n");
                        //UTILIZA A FUN��O GETCHAR(); DUAS VEZES PARA QUE O SOFTWARE AGUARDE AT� O USU�RIO TECLAR ENTER PARA CONTINUAR
                        getchar();
                        getchar();
                        system("cls");
                    }

        /* FIM DO LA�O DE REPETI��O PRINCIPAL.
        PARA SAIR DO LA�O, A VARI�VEL MENU DEVE SER DIFERENTE
        DA VARI�VEL FIM.
        ISSO OCORRE QUANDO O USU�RIO SELECIONA A OP��O 2 QUANDO
        RECEBE A PERGUNTA "DESEJA ALGO MAIS?" */
        }while(menu != fim);

return(0);
}
