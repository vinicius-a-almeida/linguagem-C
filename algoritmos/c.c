#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){

    setlocale(LC_ALL,"");

    //VARIAVEIS
    char senha [6];
    int menu1 = 0, numero_eleitores = 0, votos = 0, representante [5],certo = 0,confirmar = 0,VotoRepresentante = 0, VotoPresidente = 0;
    int BrancoRepresentante = 0;
    int NuloRepresentante = 0;
    int BrancoPresidente = 0;
    int NuloPresidente = 0;
    int David = 0;
    int Vinicius = 0;
    int Pollyana = 0;
    int Karla = 0;
    int Dyego = 0;
    int Hadija = 0;
    int Lavinia = 0;
    

    //INICIO
        do
        {
            //MENU PRINCIPAL
            // system("clear||cls");
            printf("E: %d", numero_eleitores);
            system("clear||cls");
            printf("                                         UNIVERSIDADE FEDERALIS RURAL DO SEMI-ÁRIDO\n\n\n");
            printf("1 - Definir quantidade de votantes\n2 - Iniciar votação\n3 - Contabilizar votos\n4 - Sair\nOpção:");
            scanf("%i",&menu1);
            switch (menu1){
            case 1:
                //DETERMINAR ELEITORES
                while (certo!=1) {
                    system("clear||cls");
                    printf("                                         UNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
                    printf("                                                   Sistema de Autenticação\n\n");
                    printf("Chave de acesso:");
                    scanf(" %s", senha);
                    if (strcmp(senha,"magno")==0){
                        certo=1;
                    } 
                    else {
                        system("clear||cls");
                        printf("                                         UNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
                        printf("Codigo incorreto\n\n");
                        system("pause");
                        certo=0;
                    }   
                }
                system("clear||cls");
                printf("                                         UNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
                printf("Numero de Eleitores:");
                scanf("%i", &numero_eleitores);
                if (numero_eleitores<31){
                    printf("Numero de eleitores insuficiente;\n\n");
                    system("pause");
                    numero_eleitores=0;
                } else {
                    system("clear||cls");
                    printf("                                         UNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
                    printf("%i Eleitores cadastrados\n\n",numero_eleitores);
                    system("pause");
                }
                break;
            case 2:
                //PAINEL DE VOTAÇÃO
                printf("%d", numero_eleitores);
                if (numero_eleitores==0){
                    system("clear||cls");
                    printf("                                         UNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
                    printf("Eleitores não cadastrados %d\n\n", numero_eleitores);
                    system("pause");
                } else
                {
                    do
                    {
                        printf("CONTOU ELEITOR ");
                        numero_eleitores--;
                        votos++;
                        while (confirmar!=1)
                        {
                            // system("clear||cls");
                            system("clear||cls");
                            printf("                                         UNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
                            printf(" ______________________________________________________________________________________________________________________\n");
                            printf(" |                VOTO PARA REPRESENTANTE                   ||                    JUSTIÇA ESTUDANTIL                  |\n");
                            printf(" |                                                          ||                                                        |\n");
                            printf(" |                                                          ||                      1    2    3                       |\n");
                            printf(" |                                                          ||                      4    5    6                       |\n");
                            printf(" |                                                          ||                      7    8    9                       |\n");
                            printf(" |                   _   _   _   _   _                      ||                           0                            |\n");
                            printf(" |                                                          ||                                                        |\n");
                            printf(" |                                                          ||             BRANCO     CORRIGIR     CONFIRMAR          |\n");
                            printf(" |__________________________________________________________||________________________________________________________|\n");
                            
                            printf("Voto: ");
                            scanf("%i",&VotoRepresentante);
                            //parte de confirmação de VotoRepresentante
                            if (VotoRepresentante == 00000) {
                                printf("Branco // CONFIRMAR? [1]SIM [2]NÃO: ");
                                scanf("%i",&confirmar);
                                switch (confirmar)
                                {
                                    case 1:
                                        BrancoRepresentante++;
                                        confirmar=0;
                                        break;
                                    case 2:
                                        break;
                                    default:
                                        printf("Comando invalido");
                                }
                            }
                            else if (VotoRepresentante == 12345)
                            {
                                printf("David // CONFIRMAR? [1]SIM [2]NÃO: ");
                                scanf("%i",&confirmar);
                                switch (confirmar){
                                case 1:
                                    David++;
                                    confirmar=0;
                                    break;
                                case 2:
                                    break;
                                default:
                                    printf("Comando invalido");
                                
                                }

                            } 
                            else if (VotoRepresentante == 67890)
                            {
                                printf("Vinicius // CONFIRMAR? [1]SIM [2]NÃO: ");
                                scanf("%i",&confirmar);
                                switch (confirmar){
                                case 1:
                                    Vinicius++;
                                    confirmar=0;
                                    break;
                                case 2:
                                    break;
                                default:
                                    printf("Comando invalido");
                                
                                }

                            }
                            else if (VotoRepresentante == 98765)
                            {
                                printf("Pollyana // CONFIRMAR? [1]SIM [2]NÃO: ");
                                scanf("%i",&confirmar);
                                switch (confirmar){
                                case 1:
                                    Pollyana++;
                                    confirmar=0;
                                    break;
                                case 2:
                                    Pollyana=Pollyana;
                                    break;
                                default:
                                    printf("Comando invalido");
                                
                                }
                            }
                            else if (VotoRepresentante == 43210)
                            {
                                printf("Karla // CONFIRMAR? [1]SIM [2]NÃO: ");
                                scanf("%i",&confirmar);
                                switch (confirmar){
                                case 1:
                                    Karla++;
                                    confirmar=0;
                                    break;
                                case 2:
                                    Karla=Karla;
                                    break;
                                default:
                                    printf("Comando invalido");
                                
                                }
                            }
                            else if (VotoRepresentante == 48444)
                            {
                                printf("Dyego // CONFIRMAR? [1]SIM [2]NÃO: ");
                                scanf("%i",&confirmar);
                                switch (confirmar){
                                case 1:
                                    Dyego++;
                                    confirmar=0;
                                    break;
                                case 2:
                                    Dyego=Dyego;
                                    break;
                                default:
                                    printf("Comando invalido");
                                
                                }
                            } 
                            else
                            {
                             printf("Nulo // CONFIRMAR? [1]SIM [2]NÃO: ");
                                scanf("%i",&confirmar);
                                switch (confirmar){
                                case 1:
                                    NuloRepresentante++;
                                    confirmar=0;
                                    break;
                                case 2:
                                    Dyego=Dyego;
                                    break;
                                default:
                                    printf("Comando invalido");   
                                }
                            }   
                            
                            system("clear||cls");
                            printf("                                         UNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
                            printf(" ______________________________________________________________________________________________________________________\n");
                            printf(" |             VOTO PARA PRESIDENTE DO GREMIO               ||                    JUSTIÇA ESTUDANTIL                  |\n");
                            printf(" |                                                          ||                                                        |\n");
                            printf(" |                                                          ||                      1    2    3                       |\n");
                            printf(" |                                                          ||                      4    5    6                       |\n");
                            printf(" |                                                          ||                      7    8    9                       |\n");
                            printf(" |                         _   _                            ||                           0                            |\n");
                            printf(" |                                                          ||                                                        |\n");
                            printf(" |                                                          ||             BRANCO     CORRIGIR     CONFIRMAR          |\n");
                            printf(" |__________________________________________________________||________________________________________________________|\n");
                            printf("Voto: ");
                            scanf("%i",&VotoPresidente);
                            if (VotoPresidente == 00) {
                                printf("Branco // CONFIRMAR? [1]SIM [2]NÃO: ");
                                scanf("%i",&confirmar);
                                switch (confirmar)
                                {
                                    case 1:
                                        BrancoPresidente++;
                                        confirmar=0;
                                        break;
                                    case 2:
                                        break;
                                    default:
                                        printf("Comando invalido");
                                }
                            } 
                            else if (VotoPresidente == 40)
                            {
                                printf("Hadija // CONFIRMAR? [1]SIM [2]NÃO: ");
                                scanf("%i",&confirmar);
                                switch (confirmar)
                                {
                                case 1:
                                    Hadija++;
                                    confirmar=0;
                                    break;
                                case 2:
                                    break;
                                default:
                                    printf("Comando invalido");
                                
                                }

                            } 
                            else if (VotoPresidente == 80)
                            {
                                printf("Lavinia // CONFIRMAR? [1]SIM [2]NÃO: ");
                                scanf("%i",&confirmar);
                                switch (confirmar)
                                {
                                case 1:
                                    Lavinia++;
                                    confirmar=0;
                                    break;
                                case 2:
                                    break;
                                default:
                                    printf("Comando invalido");
                                
                                }
                            } 
                            else 
                            {
                                printf("NuloRepresentante // CONFIRMAR? [1]SIM [2]NÃO: ");
                                scanf("%i",&confirmar);
                                switch (confirmar)
                                {
                                    case 1:
                                    NuloPresidente++;
                                    confirmar=0;
                                    break;
                                case 2:
                                    break;
                                default:
                                    printf("Comando invalido");

                                }
                                

                            }
                        }
                    } while (numero_eleitores!=0);
            }
                break;
            case 3:
                //APURAÇÃO DE VOTOS
                system("clear||cls");
                printf("                                         UNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
                printf("                                                    Apuração dos votos\n");
                printf("Total de votos:\n\n");
                printf("Representantes.\n");
                printf("David Else:%i\n",David);
                printf("Vinicius While:%i\n",Vinicius);
                printf("Pollyana Return:%i\n",Pollyana);
                printf("Karla Float:%i\n",Karla);
                printf("Dyego Main:%i\n",Dyego);
                printf("Brancos para representante:%i\n",BrancoRepresentante);
                printf("Nulos para representante:%i\n\n",NuloRepresentante);
                printf("Presidencia");
                printf("Hadija Printf:%i\n",Hadija);
                printf("Lavinia Scanf:%i\n",Lavinia);
                printf("Brancos para representante:%i\n",BrancoPresidente);
                printf("Nulos para representante:%i\n\n",NuloPresidente);  
                system("pause");
                break;
            case 4:
                //ENCERRAMENTO DO SISTEMA
                system("clear||cls");
                printf("                                         UNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
                printf("\n\nSistema encerrado;\n\n");
                system("pause");
                return(0);
                break;
            default:
                //COMANDO INVALIDO
            system("clear||cls");
            printf("                                         UNIVERSIDADE FEDERAL RURAL DO SEMI-ÁRIDO\n\n\n");
            printf("\nComando Invalido\n\n");   
            system("pause"); 
            }
    } while (menu1!=4);
    system("pause");
    return 0;
}