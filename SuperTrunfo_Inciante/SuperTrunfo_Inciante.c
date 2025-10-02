#include <stdio.h>

int main() {
    printf("BEM VINDO AO SUPER TRUNFO!\n");

    char estadoLETRA1[2] , codigoCIDADE1[4] , nomeCIDADE1[50] , estadoLETRA2[2] , codigoCIDADE2[4] , nomeCIDADE2[50];
    int populacaoCIDADE1 , pontosturisticosCIDADE1 , populacaoCIDADE2 , pontosturisticosCIDADE2;
    float areaCIDADE1 , pibCIDADE1 , areaCIDADE2 , pibCIDADE2;

// INFORMAÇÕES DA PRIMEIRA CARTA
// IRÁ SER ARMAZENADA NA VARIÁVEL 1, POIS SERÁ A PRIMEIRA CARTA.
// NÃO PONHA ESPAÇOS NOS NOMES DAS CIDADES, POIS O PROGRAMA NÃO RECONHECE.
// NÃO PONHA ACENTOS "                   ", POIS O PROGRAMA NÃO RECONHECE.
//------------------------------------------------------------------------------------------------

    printf("Cadastro da primeira carta:\n");

    printf("Digite a sigla do estado da primeira carta (Ex: SP, RJ...):\n");
    scanf("%s", &estadoLETRA1);
    
    printf("Digite um código para a cidade da primeira carta (EX: 001, A02, 1B3...):\n");
    scanf("%s", &codigoCIDADE1);

    printf("Digite o nome da cidade da primeira carta (não insira acentos nem espaços): \n");
    scanf("%s", &nomeCIDADE1);

    printf("Digite a população da cidade da primeira carta: \n");
    scanf("%d", &populacaoCIDADE1);

    printf("Digite a área da cidade em km² da primeira carta: \n");
    scanf("%f", &areaCIDADE1);

    printf("Digite o PIB da cidade em R$ da primeira carta (Ex: 1432.50): \n");
    scanf("%f", &pibCIDADE1);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticosCIDADE1);

//------------------------------------------------------------------------------------------------
// INFORMAÇÕES DA SEGUNDA CARTA

    printf("Cadastro da segunda carta:\n");
    
    printf("Digite a sigla do estado da segunda carta (Ex: SP, RJ...):\n");
    scanf("%s" , &estadoLETRA2);

    printf("Digite um código para a cidade da segunda carta (Ex: 001, A02, 1B3...):\n");
    scanf("%s" , &codigoCIDADE2);

    printf("Digite o nome da cidade da segunda carta (não insira acentos nem espaços): \n");
    scanf("%s" , &nomeCIDADE2);

    printf("Digite a população da cidade da segunda carta: \n");
    scanf("%d" , &populacaoCIDADE2);

    printf("Digite a área da cidade em km² da segunda carta: \n");
    scanf("%f" , &areaCIDADE2);

    printf("Digite o PIB da cidade em R$ da segunda carta (Ex: 1432.50): \n");
    scanf("%f" , &pibCIDADE2);
    
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d" , &pontosturisticosCIDADE2);

//------------------------------------------------------------------------------------------------
// AQUI SERÁ INFORMADO AS INFORMAÇÕES DIGITADAS DAS CARTAS 1 E 2 EM SEQUENCIA

    printf("CARTA 1:\n");
    printf("Estado: %s\n" , estadoLETRA1);
    printf("Código: %s\n" , codigoCIDADE1);
    printf("Cidade: %s\n" , nomeCIDADE1);
    printf("População: %d\n" , populacaoCIDADE1);
    printf("Área em km²: %.2f\n" , areaCIDADE1);
    printf("PIB em R$: R$ %.2f\n" , pibCIDADE1);
    printf("Pontos Turísticos: %d\n" , pontosturisticosCIDADE1);
    printf("------------------------------\n");

    printf("CARTA 2:\n");
    printf("Estado: %s\n" , estadoLETRA2);
    printf("Código: %s\n" , codigoCIDADE2);
    printf("Cidade: %s\n" , nomeCIDADE2);
    printf("População: %d\n" , populacaoCIDADE2);
    printf("Área em km²: %.2f\n" , areaCIDADE2);
    printf("PIB em R$: R$ %.2f\n" , pibCIDADE2);
    printf("Pontos Turísticos: %d\n" , pontosturisticosCIDADE2);
    printf("------------------------------\n");

//FINAL DO PROGRAMA
    return 0;
}
//------------------------------------------------------------------------------------------------