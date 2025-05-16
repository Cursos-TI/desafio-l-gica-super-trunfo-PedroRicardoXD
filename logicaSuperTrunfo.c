#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define VERDE "\033[0;32m"
#define VERMELHO "\033[0;31m"
#define RESET "\033[0m"

int main(){

    setlocale(LC_NUMERIC, "C");// sei que isso não foi ensinado ainda mais eu tenho problemas com numeros errados. 
    
    
    char cidade1[50], estado1[3], ccarta1[5];// ponto de entrada carta 1
    float area1, pibbruto1, denpopulacional1;
    float SuperPoder1;
    int npturisticos1;
    unsigned long int habitantes1, ncarta1; // término da entrada da carta 1
    int OpcaoPrincipal, Atributo, AtributoEscolhido;

    char cidade2[50], estado2[3], ccarta2[5];// ponto de entrada da carta 2
    float area2, pibbruto2, denpopulacional2;
    float SuperPoder2;
    unsigned long int habitantes2, ncarta2;// término da entrada da carta 2
    int  npturisticos2;
    

    int VitoriasCarta1 = 0;
    int VitoriasCarta2 = 0;

    printf("BEM-VINDOS AO SUPER TRUNFO:CIDADES \n\n");

    printf("DADOS DA CIDADE 1 \n\n");                  
    
    printf("Dados da carta 1\n");
                                                                    //Inicio do questionario da carta 1
    printf("Digite o número da carta: \n");
    scanf("%lu", &ncarta1 );

    printf("Digite a sigla do estado: \n");
    scanf(" %[^\n]", estado1 );

    printf("Digite o codigo da carta: \n");
    scanf(" %[^\n]", ccarta1 );

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade1 );

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &habitantes1 );

    printf("Digite o tamanho da cidade em Km²: \n");
    scanf("%f", &area1 );

    printf("Digite o pib bruto da cidade: \n"); 
    scanf("%f", &pibbruto1 );

    printf("Digite o nº de ponto turisticos da cidade: \n");
    scanf("%d", &npturisticos1 );
                                                                //Fim da questionario da carta 1

    printf("DADOS DA CIDADE 2\n\n");                             // inicio do questionario da carta 2

    printf("Dados da carta 2\n");

    printf("Digite o número da carta: \n");
    scanf("%lu", &ncarta2);

    printf("Digite a sigla do estado: \n");
    scanf(" %[^\n]", estado2);

    printf("Digite o código da carta: \n");
    scanf(" %[^\n]", ccarta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &habitantes2);

    printf("Digite o tamanho da cidade em Km²: \n");
    scanf("%f", &area2 );

    printf("Digite o pib bruto da cidade: \n"); 
    scanf("%f", &pibbruto2 );

    printf("Digite o nº de ponto turisticos da cidade: \n");
    scanf("%d", &npturisticos2 );                                   //fim do questionario da carta 2

                                                                    //fim da do codigo da cidade 1 
    printf("\n****** DADOS DA CARTA 1 SUPER TRUNFO CIDADE ******\n");
                                                                    //inicio da visualização da carta 1

    denpopulacional1 = habitantes1 / area1;                                                                
    SuperPoder1 = habitantes1 + (pibbruto1 / habitantes1) + (1.0 / denpopulacional1);                                                                                                                       
    printf("Numero da carta: %lu \n", ncarta1);
    printf("Estado: %s \n", estado1);
    printf("Codigo da Carta da cidade: %s \n", ccarta1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População da cidade: %lu \n",habitantes1);
    printf("Area em Km²: %.2f \n", area1);
    printf("Pib bruto R$: %.2f \n", pibbruto1);
    printf("Ponto turistico: %d \n", npturisticos1);
    printf("Densidade populacional é de: %.2f hab/km²\n" ,habitantes1 / area1);
    printf("PIB per capita da cidade é de R$%.2f por habitante \n", pibbruto1 / habitantes1);
    printf("O super poder da carta é: %.2f\n", SuperPoder1);

    printf("\n****** DADOS DA CARTA 2 SUPER TRUNFO ******\n");
                                                                    //inicio da visualização da carta 2

    denpopulacional2 = habitantes2 / area2;                                                                
    SuperPoder2 = habitantes2 + (pibbruto2 / habitantes2) + (1.0 / denpopulacional2);
    printf("Numero da carta: %lu \n", ncarta2);
    printf("Estado: %s \n", estado2);
    printf("Codigo da Carta da cidade: %s \n", ccarta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População da cidade: %lu \n",habitantes2);
    printf("Area em Km²: %.2f \n", area2);
    printf("Pib bruto R$: %.2f \n", pibbruto2);
    printf("Ponto turistico: %d \n", npturisticos2);
    printf("Densidade populacional é de: %.2f hab/km²\n " ,habitantes2 / area2);
    printf("PIB per capita da cidade é de R$%.2f por habitante \n ", pibbruto2 / habitantes2);
    printf("O super poder da carta é: %.2f\n", SuperPoder2);

    int pontos1 = 0, pontos2 = 0;

    // Suponha que o jogador escolheu o atributo 5: Densidade populacional
    int atributo1 = 5;
    
    switch (atributo1) {
        case 1:
            pontos1 += (habitantes1 > habitantes2) ? 1 : 0;
            pontos2 += (habitantes2 > habitantes1) ? 1 : 0;
            break;
        case 2:
            pontos1 += (pibbruto1 > pibbruto2) ? 1 : 0;
            pontos2 += (pibbruto2 > pibbruto1) ? 1 : 0;
            break;
        case 3:
            pontos1 += ((pibbruto1 / habitantes1) > (pibbruto2 / habitantes2)) ? 1 : 0;
            pontos2 += ((pibbruto2 / habitantes2) > (pibbruto1 / habitantes1)) ? 1 : 0;
            break;
        case 4:
            pontos1 += (npturisticos1 > npturisticos2) ? 1 : 0;
            pontos2 += (npturisticos2 > npturisticos1) ? 1 : 0;
            break;
        case 5: // Menor densidade populacional vence
            pontos1 += ((habitantes1 / area1) < (habitantes2 / area2)) ? 1 : 0;
            pontos2 += ((habitantes2 / area2) < (habitantes1 / area1)) ? 1 : 0;
            break;
        case 6:
            pontos1 += (SuperPoder1 > SuperPoder2) ? 1 : 0;
            pontos2 += (SuperPoder2 > SuperPoder1) ? 1 : 0;
            break;
        default:
            printf("Atributo inválido.\n");
    }
    
    printf("\n**********RESULTADO**********\n");
                                                                                                    // inicio do bloco de comparação entre as cartas
// primeira estrutura de decisão 

    if (habitantes1 > habitantes2 ) {
    printf("%sVencedora, Carta 1: %s (%lu habitantes)%s\n",VERDE, cidade1, habitantes1, RESET);
    printf("%sPerdedora, Carta 2: %s (%lu habitantes)%s\n",VERMELHO, cidade2, habitantes2, RESET);
    VitoriasCarta1++;
} else {
    printf("%sVencedora, carta 2: %s (%lu habitantes)%s\n",VERDE, cidade2, habitantes2, RESET);
    printf("%sPerdedora, Carta 1: %s (%lu habitantes)%s\n",VERMELHO, cidade1, habitantes1, RESET);
    VitoriasCarta2++;
}               
// fim da primeira estrutura de decisão

// segunda estrutura de decisão 
    if (pibbruto1 > pibbruto2)
    {
        printf("%sVencedora, carta 1: %s (R$ %.2f)%s\n",VERDE, cidade1, pibbruto1, RESET);
        printf("%sPerdedora, carta 2: %s (R$ %.2f)%s\n",VERMELHO, cidade2, pibbruto2, RESET);
        VitoriasCarta1++; 
    }else{
        printf("%sVencedora, carta 2: %s(R$ %.2f)%s\n",VERDE, cidade2, pibbruto2,RESET);
        printf("%sPerdedora, carta 1: %s(R$ %.2f)%s\n",VERMELHO, cidade1, pibbruto1,RESET);
        VitoriasCarta2++;
    }
//fim da segunda estrutura de decisão 

//terceira estrututura de decisão
    if ((pibbruto1 / habitantes1) > (pibbruto2 / habitantes2))
    {
        printf("%sVencedora, carta 1: - %s (PIB per capita: R$ %.2f)%s\n",VERDE, cidade1, pibbruto1 / habitantes1,RESET);
        printf("%sPerdedora carta 2: - %s PIB per capita: R$ %.2f)%s\n",VERMELHO, cidade2, pibbruto2 / habitantes2,RESET);
        VitoriasCarta1++;
    }else{
        printf("Vencedora, carta 2: %s%s (PIB per capita: R$ %.2f)%s\n",VERDE, cidade2, pibbruto2 / habitantes2, RESET);
        printf("%sPerdedora carta 2: - %s PIB per capita: R$ %.2f)%s\n",VERMELHO, cidade1, pibbruto1 / habitantes1,RESET);
        VitoriasCarta2++;
    }
//fim da terceira estrutura de decisão

// quarta estrutura de decisão
    if (npturisticos1 > npturisticos2)
    {
       printf("%sVencedora, carta 1: %s (%d pontos turisticos)%s\n",VERDE, cidade1, npturisticos1,RESET);
       printf("%sPerdedora, carta 2: %s (%d pontos turisticos)%s\n",VERMELHO, cidade2, npturisticos2,RESET);
       VitoriasCarta1++;
    }else{
        printf("%sVencedora, carta 2: %s(%d pontos turisticos)%s\n",VERDE, cidade2, npturisticos2,RESET);
        printf("%sPerdedora, carta 1: %s(%d pontos turisticos)%s\n",VERMELHO, cidade1, npturisticos1,RESET);
        VitoriasCarta2++;
    }
// fim da quarta estrutura de decisão

//quinta estrutura de decisão
    if ((habitantes1 / area1) > (habitantes2 / area2))
    {
        printf("%sVencedora, carta 1: %s (Densidade: %.2f hab/km²)%s\n",VERDE, cidade1, habitantes1 / area1, RESET);
        printf("%sPerdedora, carta 2: %s (Densidade: %.2f hab/km²)%s\n",VERMELHO, cidade2, habitantes2 / area2, RESET);
        VitoriasCarta1++;
    }else{
        printf("%sVencedora, carta 2: %s (Densidade: %.2f hab/km²)%s\n",VERDE, cidade2, habitantes2 / area2,RESET);
        printf("%sPerdedora, carta 1: %s (Densidade: %.2f hab/km²)%s\n",VERMELHO, cidade1, habitantes1 / area1,RESET);
        VitoriasCarta2++;
    }                                
//fim da quinta estrutura de decisão

//sexta estutura de decisão 
    if (SuperPoder1 > SuperPoder2)
    {
        printf("%sVencedora, carta 1:  %s (Super Poder: %.2f)%s\n",VERDE, cidade1, SuperPoder1,RESET);
        printf("%sPerdedora, carta 2:  %s (Super Poder: %.2f)%s\n",VERMELHO, cidade2, SuperPoder2,RESET);
        VitoriasCarta1++;
    }else{
        printf("%sVencedora, carta 2:  %s (Super Poder: %.2f)%s\n",VERDE,cidade2, SuperPoder2,RESET);
        printf("%sPerdedora, carta 1:  %s (Super Poder: %.2f)%s\n",VERMELHO,cidade1, SuperPoder1,RESET);
        VitoriasCarta2++;
    }
// fim da sexta estrutura de decisão 
                                                                                                // inicio do bloco de comparação entre as cartas
printf("\n********** VENCEDOR TOTAL DOS ATRIBUTOS **********\n");

if (VitoriasCarta1 > VitoriasCarta2) {
    printf("%sA carta 1 (%s) é a vencedora absoluta com %d vitórias!%s\n", VERDE, cidade1, VitoriasCarta1, RESET);
} else if (VitoriasCarta2 > VitoriasCarta1) {
    printf("%sA carta 2 (%s) é a vencedora absoluta com %d vitórias!%s\n", VERDE, cidade2, VitoriasCarta2, RESET);
} else {
    printf("%sEmpate! Ambas as cartas têm %d vitórias.%s\n", VERMELHO, VitoriasCarta1, RESET);
}
    printf("===== MENU PRINCIPAL =====\n");                                 /// Menu principal de atributos 
    printf("Escolha uma opção\n");
    printf("1 - Mostrar atributos da Carta 1\n");
    printf("2 - Mostrar atributos da Carta 2\n");
    scanf("%d", &OpcaoPrincipal);

switch (OpcaoPrincipal)
{
case 1: 
    printf("Quais opções você deseja comparar?\n");
    printf("1 - Número de habitantes\n");
    printf("2 - PIB bruto\n");
    printf("3 - PIB per capita\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - Super Poder\n");
    printf("%d", &Atributo);

    case 2:
    printf("Quais opções você deseja comparar?\n");
    printf("1 - Número de habitantes\n");
    printf("2 - PIB bruto\n");
    printf("3 - PIB per capita\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - Super Poder\n");
    scanf("%d", &Atributo);

    switch (Atributo)
    {
    case 1:
        printf("Número de habitantes:\n");
        printf("Carta 1: %lu\n", habitantes1 );
        printf("Carta 2: %lu\n", habitantes2 );
        if (habitantes1 > habitantes2) {
            printf("A carta 1 (%s) é a vencedora!\n", cidade1);
        } else if (habitantes2 > habitantes1) {
            printf("A carta 2 (%s) é a vencedora!\n", cidade2);
        } else {
            printf("Empate! Ambas as cartas têm o mesmo número de habitantes.\n");
        }
        break;

    case 2:
        printf("PIB bruto:\n");
        printf("Carta 1: %.2f\n", pibbruto1 ); 
        printf("Carta 2: %.2f\n", pibbruto2 );
        if (pibbruto1 > pibbruto2) {
            printf("A carta 1 (%s) é a vencedora!\n", cidade1);
        } else if (pibbruto2 > pibbruto1) {
            printf("A carta 2 (%s) é a vencedora!\n", cidade2);
        } else {
            printf("Empate! Ambas as cartas têm o mesmo PIB bruto.\n");
        }
        break;
    case 3:
        printf("PIB per capita:\n");
        printf("Carta 1: %.2f\n", pibbruto1 / habitantes1 );   
        printf("Carta 2: %.2f\n", pibbruto2 / habitantes2 );
        if ((pibbruto1 / habitantes1) > (pibbruto2 / habitantes2)) {
            printf("A carta 1 (%s) é a vencedora!\n", cidade1);
        } else if ((pibbruto2 / habitantes2) > (pibbruto1 / habitantes1)) {
            printf("A carta 2 (%s) é a vencedora!\n", cidade2);
        } else {
            printf("Empate! Ambas as cartas têm o mesmo PIB per capita.\n");
        }
        break;
    case 4:
        printf("Número de pontos turísticos:\n");
        printf("Carta 1: %d\n", npturisticos1 );
        printf("Carta 2: %d\n", npturisticos2 );
        if (npturisticos1 > npturisticos2) {
            printf("A carta 1 (%s) é a vencedora!\n", cidade1);
        } else if (npturisticos2 > npturisticos1) {
            printf("A carta 2 (%s) é a vencedora!\n", cidade2);
        } else {
            printf("Empate! Ambas as cartas têm o mesmo número de pontos turísticos.\n");
        }
        break;
    case 5:
        printf("Densidade populacional:\n");
        printf("Carta 1: %.2f\n", habitantes1 / area1);
        printf("Carta 2: %.2f\n", habitantes2 / area2);
        if ((habitantes1 / area1) < (habitantes2 / area2)) {
            printf("A carta 1 (%s) é a vencedora!\n", cidade1);
        } else if ((habitantes2 / area2) < (habitantes1 / area1)) {
            printf("A carta 2 (%s) é a vencedora!\n", cidade2);
        } else {
            printf("Empate! Ambas as cartas têm a mesma densidade populacional.\n");
        }
        break;
    case 6:
        printf("Super Poder:\n");
        printf("Carta 1: %.2f\n", SuperPoder1 );   
        printf("Carta 2: %.2f\n", SuperPoder2 );
        if (SuperPoder1 > SuperPoder2) {
            printf("A carta 1 (%s) é a vencedora!\n", cidade1);
        } else if (SuperPoder2 > SuperPoder1) {
            printf("A carta 2 (%s) é a vencedora!\n", cidade2);
        } else {
            printf("Empate! Ambas as cartas têm o mesmo super poder.\n");
        }
        break;    
    default:
        printf("\nOpcao principal invalida.\n");
        break;
    }
    break;

default: 
    printf("\nOpcao principal invalida.\n");
    break;
}

switch (Atributo)
{
case 1: 
    printf("Número de habitantes:\n");
    printf("Carta 2: %lu\n", habitantes2 );
    printf("Carta 1: %lu\n", habitantes1 );
    if (habitantes1 > habitantes2) {
        printf("A carta 1 (%s) é a vencedora!\n", cidade1);
    } else if (habitantes2 > habitantes1) {
        printf("A carta 2 (%s) é a vencedora!\n", cidade2);
    } else {
        printf("Empate! Ambas as cartas têm o mesmo número de habitantes.\n");
    }

    
    break;
case 2:
    printf("PIB bruto:\n");
    printf("Carta 2: %.2f\n", pibbruto2 );
    printf("Carta 1: %.2f\n", pibbruto1 );
    if (pibbruto1 > pibbruto2) {
        printf("A carta 1 (%s) é a vencedora!\n", cidade1);
    } else if (pibbruto2 > pibbruto1) {
        printf("A carta 2 (%s) é a vencedora!\n", cidade2);
    } else {
        printf("Empate! Ambas as cartas têm o mesmo PIB bruto.\n");
    }
    break;
case 3:
    printf("PIB per capita:\n");
    printf("Carta 2: %.2f\n", pibbruto2 / habitantes2 );
    printf("Carta 1: %.2f\n", pibbruto1 / habitantes1 );
    if ((pibbruto1 / habitantes1) > (pibbruto2 / habitantes2)) {
        printf("A carta 1 (%s) é a vencedora!\n", cidade1);
    } else if ((pibbruto2 / habitantes2) > (pibbruto1 / habitantes1)) {
        printf("A carta 2 (%s) é a vencedora!\n", cidade2);
    } else {
        printf("Empate! Ambas as cartas têm o mesmo PIB per capita.\n");
    }
    break;
case 4:
    printf("Número de pontos turísticos:\n");
    printf("Carta 2: %d\n", npturisticos2 );
    printf("Carta 1: %d\n", npturisticos1 );
    if (npturisticos1 > npturisticos2) {
        printf("A carta 1 (%s) é a vencedora!\n", cidade1);
    } else if (npturisticos2 > npturisticos1) {
        printf("A carta 2 (%s) é a vencedora!\n", cidade2);
    } else {
        printf("Empate! Ambas as cartas têm o mesmo número de pontos turísticos.\n");
    }
    break;
case 5:
    printf("Densidade populacional:\n");
    printf("Carta 2: %.2f\n", habitantes2 / area2 );
    printf("Carta 1: %.2f\n", habitantes1 / area1 );
    if ((habitantes1 / area1) > (habitantes2 / area2)) {
        printf("A carta 1 (%s) é a vencedora!\n", cidade1);
    } else if ((habitantes2 / area2) > (habitantes1 / area1)) {
        printf("A carta 2 (%s) é a vencedora!\n", cidade2);
    } else {
        printf("Empate! Ambas as cartas têm a mesma densidade populacional.\n");
    }
    break;
case 6: 
    printf("Super Poder:\n");
    printf("Carta 2: %.2f\n", SuperPoder2 );
    printf("Carta 1: %.2f\n", SuperPoder1 );
    if (SuperPoder1 > SuperPoder2) {
        printf("A carta 1 (%s) é a vencedora!\n", cidade1);
    } else if (SuperPoder2 > SuperPoder1) {
        printf("A carta 2 (%s) é a vencedora!\n", cidade2);
    } else {
        printf("Empate! Ambas as cartas têm o mesmo super poder.\n");
    }
    break;
default:
    printf("\nOpcao principal invalida.\n");
    break;
}
return 0;
}