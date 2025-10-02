#include <stdio.h>

int main() {

    printf("BEM VINDO AO SUPER TRUNFO!\n");

    char estadoLETRA1[2] , codigoCIDADE1[4] , nomeCIDADE1[50] , estadoLETRA2[2] , codigoCIDADE2[4] , nomeCIDADE2[50];
    int populacaoCIDADE1 , pontosturisticosCIDADE1 , populacaoCIDADE2 , pontosturisticosCIDADE2;
    float areaCIDADE1 , pibCIDADE1 , areaCIDADE2 , pibCIDADE2;
    float densidadeCIDADE1 , pibpercapitaCIDADE1 , densidadeCIDADE2 , pibpercapitaCIDADE2;

//------------------------------------------------------------------------------------------------
// INFORMAÇÕES DA PRIMEIRA CARTA (VARIÁVEL 1)

    printf("Cadastro da primeira carta:\n");

    printf("Digite a sigla do estado da primeira carta (Ex: SP, RJ...):\n");
    scanf("%s" , &estadoLETRA1);

    printf("Digite um código para a cidade da primeira carta (Ex: 001, A02, ABC...):\n");
    scanf("%s" , &codigoCIDADE1);

    printf("Digite o nome da cidade da primeira carta (não insira acentos nem espaços): \n");
    scanf("%s" , &nomeCIDADE1);

    printf("Digite a população da cidade da primeira carta: \n");
    scanf("%d" , &populacaoCIDADE1);

    printf("Digite a área da cidade em km² da primeira carta(Ex: 43242.43, 34.647): \n");
    scanf("%f" , &areaCIDADE1);

    printf("Digite o PIB da cidade em R$ da primeira carta (Ex: 1432.50): \n");
    scanf("%f" , &pibCIDADE1);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d" , &pontosturisticosCIDADE1);

//------------------------------------------------------------------------------------------------
// INFORMAÇÕES DA SEGUNDA CARTA (VARIÁVEL 2)

    printf("Cadastro da segunda carta:\n");

    printf("Digite a sigla do estado da segunda carta (Ex: SP, RJ...):\n");
    scanf("%s" , &estadoLETRA2);

    printf("Digite um código para a cidade da segunda carta (Ex: 001, A02, ABC...):\n");
    scanf("%s" , &codigoCIDADE2);

    printf("Digite o nome da cidade da segunda carta (não insira acentos nem espaços): \n");
    scanf("%s" , &nomeCIDADE2);

    printf("Digite a população da cidade da segunda carta: \n");
    scanf("%d" , &populacaoCIDADE2);

    printf("Digite a área da cidade em km² da segunda carta(Ex: 43242.43, 34.647): \n");
    scanf("%f" , &areaCIDADE2);

    printf("Digite o PIB da cidade em R$ da segunda carta (Ex: 1432.50): \n");
    scanf("%f" , &pibCIDADE2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d" , &pontosturisticosCIDADE2);


//------------------------------------------------------------------------------------------------

// FÓRMULAS DE CÁLCULO DE DENSIDADE E PIB PER CAPITA DAS CIDADES
    // DENSIDADE = POPULAÇÃO / ÁREA
    // PIB PER CAPITA = PIB / POPULAÇÃO

    densidadeCIDADE1 = (float) (populacaoCIDADE1 / areaCIDADE1);
    pibpercapitaCIDADE1 = (float) (pibCIDADE1 / populacaoCIDADE1);
    densidadeCIDADE2 = (float) (populacaoCIDADE2 / areaCIDADE2);
    pibpercapitaCIDADE2 = (float) (pibCIDADE2 / populacaoCIDADE2);

//------------------------------------------------------------------------------------------------

// AQUI SERÁ INFORMADO AS INFORMAÇÕES DIGITADAS DAS CARTAS 1 E 2 EM SEQUENCIA
// O RESULTADO DOS CÁLCULOS DE DENSIDADE E PIB PER CAPITA TAMBÉM SERÁ INFORMADO EM SEQUENCIA

    printf("CARTA 1: \n");
    printf("Estado: %s\n" , estadoLETRA1);
    printf("Código: %s\n" , codigoCIDADE1);
    printf("Cidade: %s\n" , nomeCIDADE1);
    printf("População: %d\n" , populacaoCIDADE1);
    printf("Área em km²: %.2f\n" , areaCIDADE1);
    printf("PIB em R$: R$ %.2f\n" , pibCIDADE1);
    printf("Pontos Turísticos: %d\n" , pontosturisticosCIDADE1);
    printf("Densidade Demográfica (hab/km²): %.2f\n" , densidadeCIDADE1);
    printf("PIB per capita em R$ (PIB/hab): R$ %.2f\n" , pibpercapitaCIDADE1);
    printf("------------------------------\n");

    
    printf("CARTA 2: \n");
    printf("Estado: %s\n" , estadoLETRA2);
    printf("Código: %s\n" , codigoCIDADE2);
    printf("Cidade: %s\n" , nomeCIDADE2);
    printf("População: %d\n" , populacaoCIDADE2);
    printf("Área em km²: %.2f\n" , areaCIDADE2);
    printf("PIB em R$: R$ %.2f\n" , pibCIDADE2);
    printf("Pontos Turísticos: %d\n" , pontosturisticosCIDADE2);
    printf("Densidade Demográfica (hab/km²): %.2f\n" , densidadeCIDADE2);
    printf("PIB per capita em R$ (PIB/hab): R$ %.2f\n" , pibpercapitaCIDADE2);
    printf("------------------------------\n");

// FINAL DO PROGRAMA
    return 0;
}

//------------------------------------------------------------------------------------------------