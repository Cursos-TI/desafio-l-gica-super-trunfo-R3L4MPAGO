#include <stdio.h>
#include <string.h>

int main(){

    char Vencedor[20];
    int Escolha;

    // VARIÁVEIS DA CARTA 1
    char Estado_1;
    char Codigo_1[5];

    char NomeDaCidade_1[20];
    unsigned long int Populacao_1;
    float Area_1;
    float PIB_1;
    int PontosTuristicos_1;
 
    float DensidadePopulacional_1;
    float PIBperCapita_1;

    float SuperPoder_1;

    // VARIÁVEIS DA CARTA 2
    char Estado_2;
    char Codigo_2[5];

    char NomeDaCidade_2[20];
    unsigned long int Populacao_2;
    float Area_2;
    float PIB_2;
    int PontosTuristicos_2;

    float DensidadePopulacional_2;
    float PIBperCapita_2;

    float SuperPoder_2;

    // CARTA 1
    printf("\n===== CARTA 1 =====\n");
    printf("Carta 1: Uma letra de 'A' a 'H': [char] \n");
    scanf(" %c", &Estado_1);

    printf("Carta 1: Insira a letra do estado seguida de um número de 01 a 04: [char[5]] \n");
    scanf(" %s", Codigo_1);
        
    printf("Carta 1: Insira o nome da cidade (sem espaços e sem acentos): [char[20]] \n");
    scanf(" %s", NomeDaCidade_1);
        
    printf("Carta 1: Insira o número de habitantes: [int] \n");
    scanf(" %lu", &Populacao_1);
        
    printf("Carta 1: Insira a área da cidade em quilômetros quadrados: [float] \n");
    scanf(" %f", &Area_1);
        
    printf("Carta 1: Insira o Produto Interno Bruto da cidade: [float] \n");
    scanf(" %f", &PIB_1);

    printf("Carta 1: Insira a quantidade de pontos turísticos: [int] \n");
    scanf(" %d", &PontosTuristicos_1);

    // CARTA 2
    printf("\n===== CARTA 2 =====\n");
    printf("Carta 2: Uma letra de 'A' a 'H': [char] \n");
    scanf(" %c", &Estado_2);

    printf("Carta 2: Insira a letra do estado seguida de um número de 01 a 04: [char[5]] \n");
    scanf(" %s", Codigo_2);
        
    printf("Carta 2: Insira o nome da cidade (sem espaços e sem acentos): [char[20]] \n");
    scanf(" %s", NomeDaCidade_2);
        
    printf("Carta 2: Insira o número de habitantes: [int] \n");
    scanf(" %lu", &Populacao_2);
    
    printf("Carta 2: Insira a área da cidade em quilômetros quadrados: [float] \n");
    scanf(" %f", &Area_2);
        
    printf("Carta 2: Insira o Produto Interno Bruto da cidade: [float] \n");
    scanf(" %f", &PIB_2);

    printf("Carta 2: Insira a quantidade de pontos turísticos: [int] \n");
    scanf(" %d", &PontosTuristicos_2);

    DensidadePopulacional_1 = Populacao_1 / Area_1;
    DensidadePopulacional_2 = Populacao_2 / Area_2;

    PIBperCapita_1 = PIB_1 / Populacao_1;
    PIBperCapita_2 = PIB_2 / Populacao_2;

    SuperPoder_1 = Populacao_1 + Area_1 + PIB_1 + PontosTuristicos_1 + PIBperCapita_1 + (1 / DensidadePopulacional_1);
    SuperPoder_2 = Populacao_2 + Area_2 + PIB_2 + PontosTuristicos_2 + PIBperCapita_1 + (1 / DensidadePopulacional_2);

    printf("\nEscolha com qual atributo terá a comparação\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf(" %d", &Escolha);
    
    switch (Escolha){
        case 1:
            if (Populacao_1 > Populacao_2){
                strcpy(Vencedor, "Carta 1 venceu!");
            } else if (Populacao_1 == Populacao_2){
                strcpy(Vencedor, "Empate!");
            } else{
                strcpy(Vencedor, "Carta 2 venceu!");
            }

            printf("\n===== RESULTADO =====\n");
            printf("\n%s contra %s\n", NomeDaCidade_1, NomeDaCidade_2);
            printf("\nAtributo usado na comparação: População\n");
            printf("Carta 1: %lu\n", Populacao_1);
            printf("Carta 2: %lu\n", Populacao_2);
            printf("\n%s\n", Vencedor);
            break;

        case 2:
            if (Area_1 > Area_2){
                strcpy(Vencedor, "Carta 1 venceu!");
            } else if (Area_1 == Area_2){
                strcpy(Vencedor, "Empate!");
            } else{
                strcpy(Vencedor, "Carta 2 venceu!");
            }

            printf("\n===== RESULTADO =====\n");
            printf("\n%s contra %s\n", NomeDaCidade_1, NomeDaCidade_2);
            printf("\nAtributo usado na comparação: Área\n");
            printf("Carta 1: %.2f\n", Area_1);
            printf("Carta 2: %.2f\n", Area_2);
            printf("\n%s\n", Vencedor);
            break;

        case 3:
            if (PIB_1 > PIB_2){
                strcpy(Vencedor, "Carta 1 venceu!");
            } else if (PIB_1 == PIB_2){
                strcpy(Vencedor, "Empate!");
            } else{
                strcpy(Vencedor, "Carta 2 venceu!");
            }

            printf("\n===== RESULTADO =====\n");
            printf("\n%s contra %s\n", NomeDaCidade_1, NomeDaCidade_2);
            printf("\nAtributo usado na comparação: PIB\n");
            printf("Carta 1: %.2f\n", PIB_1);
            printf("Carta 2: %.2f\n", PIB_2);
            printf("\n%s\n", Vencedor);
            break;

        case 4:
            if (PontosTuristicos_1 > PontosTuristicos_2){
                strcpy(Vencedor, "Carta 1 venceu!");
            } else if (PontosTuristicos_1 == PontosTuristicos_2){
                strcpy(Vencedor, "Empate!");
            } else{
                strcpy(Vencedor, "Carta 2 venceu!");
            }

            printf("\n===== RESULTADO =====\n");
            printf("\n%s contra %s\n", NomeDaCidade_1, NomeDaCidade_2);
            printf("\nAtributo usado na comparação: Pontos Turísticos\n");
            printf("Carta 1: %d\n", PontosTuristicos_1);
            printf("Carta 2: %d\n", PontosTuristicos_2);
            printf("\n%s\n", Vencedor);
            break;

        case 5:
            if (DensidadePopulacional_1 < DensidadePopulacional_2){
                strcpy(Vencedor, "Carta 1 venceu!");
            } else if (DensidadePopulacional_1 == DensidadePopulacional_2){
                strcpy(Vencedor, "Empate!");
            } else{
                strcpy(Vencedor, "Carta 2 venceu!");
            }

            printf("\n===== RESULTADO =====\n");
            printf("\n%s contra %s\n", NomeDaCidade_1, NomeDaCidade_2);
            printf("\nAtributo usado na comparação: Densidade Populacional\n");
            printf("Carta 1: %.2f\n", DensidadePopulacional_1);
            printf("Carta 2: %.2f\n", DensidadePopulacional_2);
            printf("\n%s\n", Vencedor);
            break;
    }

    return 0;
}