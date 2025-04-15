#include <stdio.h>
#include <string.h>

int main(){

    char Vencedor_1[20], Vencedor_2[20], Atributo_1[25], Atributo_2[25];
    float Atributo_Quantidade_1, Atributo_Quantidade_2, Atributo_Quantidade_3, Atributo_Quantidade_4;

    int Escolha_1, Escolha_2;

    // VARIÁVEIS DA CARTA 1
    char Estado_1;
    char Codigo_1[5], NomeDaCidade_1[20];

    unsigned long int Populacao_1;
    float Area_1, PIB_1;
    int PontosTuristicos_1;

    float DensidadePopulacional_1, PIBperCapita_1;

    float SuperPoder_1;

    // VARIÁVEIS DA CARTA 2
    char Estado_2;
    char Codigo_2[5], NomeDaCidade_2[20];

    unsigned long int Populacao_2;
    float Area_2, PIB_2;
    int PontosTuristicos_2;

    float DensidadePopulacional_2, PIBperCapita_2;

    float SuperPoder_2;

    // CARTA 1
    printf("\n===== CARTA 1 =====\n");
    printf("Carta 1: Uma letra de 'A' a 'H': [char]\n");
    scanf(" %c", &Estado_1);

    printf("Carta 1: Insira a letra do estado seguida de um número de 01 a 04: [char[5]]\n");
    scanf(" %s", Codigo_1);
        
    printf("Carta 1: Insira o nome da cidade (sem espaços e sem acentos): [char[20]]\n");
    scanf(" %s", NomeDaCidade_1);
        
    printf("Carta 1: Insira o número de habitantes: [int]\n");
    scanf(" %lu", &Populacao_1);
        
    printf("Carta 1: Insira a área da cidade em quilômetros quadrados: [float]\n");
    scanf(" %f", &Area_1);
        
    printf("Carta 1: Insira o Produto Interno Bruto da cidade: [float]\n");
    scanf(" %f", &PIB_1);

    printf("Carta 1: Insira a quantidade de pontos turísticos: [int]\n");
    scanf(" %d", &PontosTuristicos_1);

    // CARTA 2
    printf("\n===== CARTA 2 =====\n");
    printf("Carta 2: Uma letra de 'A' a 'H': [char]\n");
    scanf(" %c", &Estado_2);

    printf("Carta 2: Insira a letra do estado seguida de um número de 01 a 04: [char[5]]\n");
    scanf(" %s", Codigo_2);
        
    printf("Carta 2: Insira o nome da cidade (sem espaços e sem acentos): [char[20]]\n");
    scanf(" %s", NomeDaCidade_2);
        
    printf("Carta 2: Insira o número de habitantes: [int]\n");
    scanf(" %lu", &Populacao_2);
    
    printf("Carta 2: Insira a área da cidade em quilômetros quadrados: [float]\n");
    scanf(" %f", &Area_2);
        
    printf("Carta 2: Insira o Produto Interno Bruto da cidade: [float]\n");
    scanf(" %f", &PIB_2);

    printf("Carta 2: Insira a quantidade de pontos turísticos: [int]\n");
    scanf(" %d", &PontosTuristicos_2);

    DensidadePopulacional_1 = Populacao_1 / Area_1;
    DensidadePopulacional_2 = Populacao_2 / Area_2;

    PIBperCapita_1 = PIB_1 / Populacao_1;
    PIBperCapita_2 = PIB_2 / Populacao_2;

    SuperPoder_1 = Populacao_1 + Area_1 + PIB_1 + PontosTuristicos_1 + PIBperCapita_1 + (1 / DensidadePopulacional_1);
    SuperPoder_2 = Populacao_2 + Area_2 + PIB_2 + PontosTuristicos_2 + PIBperCapita_2 + (1 / DensidadePopulacional_2);

    printf("\nEscolha o primeiro atributo na qual terá a comparação\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf(" %d", &Escolha_1);
    
    switch (Escolha_1){
        case 1:
            strcpy(Atributo_1, "População");
            Atributo_Quantidade_1 = Populacao_1;
            Atributo_Quantidade_2 = Populacao_2;
            break;

        case 2:
            strcpy(Atributo_1, "Área");
            Atributo_Quantidade_1 = Area_1;
            Atributo_Quantidade_2 = Area_2;
            break;

        case 3:
            strcpy(Atributo_1, "PIB");
            Atributo_Quantidade_1 = PIB_1;
            Atributo_Quantidade_2 = PIB_2;
            break;

        case 4:
            strcpy(Atributo_1, "Pontos Turísticos");
            Atributo_Quantidade_1 = PontosTuristicos_1;
            Atributo_Quantidade_2 = PontosTuristicos_2;
            break;

        case 5:
            strcpy(Atributo_1, "Densidade Populacional");
            Atributo_Quantidade_1 = DensidadePopulacional_1;    
            Atributo_Quantidade_2 = DensidadePopulacional_2;
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
            return 1;
    }

    printf("\nEscolha o segundo atributo na qual terá a comparação\n");

    if (Escolha_1 != 1) printf("1. População\n");
    if (Escolha_1 != 2) printf("2. Área\n");
    if (Escolha_1 != 3) printf("3. PIB\n");
    if (Escolha_1 != 4) printf("4. Pontos Turísticos\n");
    if (Escolha_1 != 5) printf("5. Densidade Demográfica\n");

    scanf(" %d", &Escolha_2);

    if (Escolha_2 == Escolha_1){
        printf("Essa opção não existe. Tente Novamente.\n");
        return 1;
    } else{
        switch (Escolha_2){
            case 1:
                strcpy(Atributo_2, "População");
                Atributo_Quantidade_3 = Populacao_1;
                Atributo_Quantidade_4 = Populacao_2;
                break;

            case 2:
                strcpy(Atributo_2, "Área");
                Atributo_Quantidade_3 = Area_1;
                Atributo_Quantidade_4 = Area_2;
                break;

            case 3:
                strcpy(Atributo_2, "PIB");
                Atributo_Quantidade_3 = PIB_1;
                Atributo_Quantidade_4 = PIB_2;
                break;

            case 4:
                strcpy(Atributo_2, "Pontos Turísticos");
                Atributo_Quantidade_3 = PontosTuristicos_1;
                Atributo_Quantidade_4 = PontosTuristicos_2;
                break;

            case 5:
                strcpy(Atributo_2, "Densidade Populacional");
                Atributo_Quantidade_3 = DensidadePopulacional_1;
                Atributo_Quantidade_4 = DensidadePopulacional_2;
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
                return 1;
        }

        if (strcmp(Atributo_1, "Densidade Populacional") == 0){
            if (Atributo_Quantidade_1 < Atributo_Quantidade_2) {
                strcpy(Vencedor_1, "Carta 1 venceu!");
            } else if (Atributo_Quantidade_1 > Atributo_Quantidade_2) {
                strcpy(Vencedor_1, "Carta 2 venceu!");
            } else {
                strcpy(Vencedor_1, "Empate!");
            }
        } else{
            if (Atributo_Quantidade_1 > Atributo_Quantidade_2) {
                strcpy(Vencedor_1, "Carta 1 venceu!");
            } else if (Atributo_Quantidade_1 < Atributo_Quantidade_2) {
                strcpy(Vencedor_1, "Carta 2 venceu!");
            } else {
                strcpy(Vencedor_1, "Empate!");
            }
        }

        if (strcmp(Atributo_2, "Densidade Populacional") == 0){
            if (Atributo_Quantidade_3 < Atributo_Quantidade_4) {
                strcpy(Vencedor_2, "Carta 1 venceu!");
            } else if (Atributo_Quantidade_3 > Atributo_Quantidade_4) {
                strcpy(Vencedor_2, "Carta 2 venceu!");
            } else {
                strcpy(Vencedor_2, "Empate!");
            }
        } else{
            if (Atributo_Quantidade_3 > Atributo_Quantidade_4) {
                strcpy(Vencedor_2, "Carta 1 venceu!");
            } else if (Atributo_Quantidade_3 < Atributo_Quantidade_4) {
                strcpy(Vencedor_2, "Carta 2 venceu!");
            } else {
                strcpy(Vencedor_2, "Empate!");
            }
        }

        printf("\n===== RESULTADO =====\n");
        printf("\n%s contra %s\n", NomeDaCidade_1, NomeDaCidade_2);
        printf("\nAtributos usados nas comparações: %s e %s\n", Atributo_1, Atributo_2);

        printf("Carta 1 (%s): %.0f\n", Atributo_1, Atributo_Quantidade_1);
        printf("Carta 2 (%s): %.0f\n", Atributo_1, Atributo_Quantidade_2);
        printf("%s\n", Vencedor_1);

        printf("\nCarta 1 (%s): %.0f\n", Atributo_2, Atributo_Quantidade_3);
        printf("Carta 2 (%s): %.0f\n", Atributo_2, Atributo_Quantidade_4);
        printf("%s", Vencedor_2);

    }

    return 0;
}