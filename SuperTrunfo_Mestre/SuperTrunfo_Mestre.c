#include <stdio.h>

int main() {

    printf("\n BEM VINDO AO SUPER TRUNFO!\n");

    char estadoLETRA1[2] , codigoCIDADE1[4] , nomeCIDADE1[50] , estadoLETRA2[2] , codigoCIDADE2[4] , nomeCIDADE2[50];
    int populacaoCIDADE1 , pontosturisticosCIDADE1 , populacaoCIDADE2 , pontosturisticosCIDADE2;
    float areaCIDADE1 , pibCIDADE1 , areaCIDADE2 , pibCIDADE2;
    float densidadeCIDADE1 , pibpercapitaCIDADE1 , superPODER1 , densidadeCIDADE2 , pibpercapitaCIDADE2 , superPODER2;

//------------------------------------------------------------------------------------------------
// INFORMAÇÕES DA PRIMEIRA CARTA (VARIÁVEL 1)

    printf("\n Cadastro da primeira carta:\n");

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
// CÁLCULO DE CÁLCULOS DE DENSIDADE, PIB PER CAPITA E SUPER PODER.

    densidadeCIDADE1 = (float) (populacaoCIDADE1 / areaCIDADE1);
    pibpercapitaCIDADE1 = (float) (pibCIDADE1 / populacaoCIDADE1);
    superPODER1 = (float) (densidadeCIDADE1 + pibpercapitaCIDADE1 + pontosturisticosCIDADE1);

    densidadeCIDADE2 = (float) (populacaoCIDADE1 / areaCIDADE2);
    pibpercapitaCIDADE2 = (float) (pibCIDADE2 / populacaoCIDADE2);
    superPODER2 = (float) (densidadeCIDADE2 + pibpercapitaCIDADE2 + pontosturisticosCIDADE2);

//------------------------------------------------------------------------------------------------
// AQUI SERÁ INFORMADO AS INFORMAÇÕES DIGITADAS DAS CARTAS 1 E 2 EM SEQUENCIA
// O RESULTADO DOS CÁLCULOS DE DENSIDADE, PIB PER CAPITA E SUPER PODER TAMBÉM SERÁ INFORMADO EM SEQUENCIA

    printf("\n Carta 1:\n");
    printf("Cidade: %s\n" , nomeCIDADE1);
    printf("Estado: %s\n" , estadoLETRA1);
    printf("Código: %s\n" , codigoCIDADE1);
    printf("População: %d\n" , populacaoCIDADE1);
    printf("Área em km²: %.2f\n" , areaCIDADE1);
    printf("PIB em R$: %.2f\n" , pibCIDADE1);
    printf("Pontos turísticos: %d\n" , pontosturisticosCIDADE1);
    printf("Densidade demográfica: %.2f\n" , densidadeCIDADE1);
    printf("PIB per capita: %.2f\n" , pibpercapitaCIDADE1);
    printf("Super Poder: %.2f\n" , superPODER1);


    printf("\n Carta 2:\n");
    printf("Cidade: %s\n" , nomeCIDADE2);
    printf("Estado: %s\n" , estadoLETRA2);
    printf("Código: %s\n" , codigoCIDADE2);
    printf("População: %d\n" , populacaoCIDADE2);
    printf("Área em km²: %.2f\n" , areaCIDADE2);
    printf("PIB em R$: %.2f\n" , pibCIDADE2);
    printf("Pontos turísticos: %d\n" , pontosturisticosCIDADE2);
    printf("Densidade demográfica: %.2f\n" , densidadeCIDADE2);
    printf("PIB per capita: %.2f\n" , pibpercapitaCIDADE2);
    printf("Super Poder: %.2f\n" , superPODER2);

//------------------------------------------------------------------------------------------------
// COMPARAÇÃO DE QUAL CARTA TEM O MAIOR ATRIBUTO (EXCETO ESTADO, CÓDIGO E NOME DA CIDADE)

    printf("\n Comparações entre as cartas:\n");

    printf("\n Comparação de população: \n");
    if (populacaoCIDADE1 > populacaoCIDADE2) {
        printf("A carta 1 tem a maior população!\n");
    } else if (populacaoCIDADE2 > populacaoCIDADE1) {
        printf("A carta 2 tem a maior população!\n");
    } else { 
        printf("As duas cartas tem a mesma população!\n");
    }
    
    printf("\n Comparação de área: \n");
    if (areaCIDADE1 > areaCIDADE2) {
        printf("A carta 1 tem a maior área!\n");
    } else if (areaCIDADE2 > areaCIDADE1) {
        printf("A carta 2 tem a maior área!\n");
    } else { 
        printf("As duas cartas tem a mesma área!\n");
    }
    
    printf("\n Comparação de PIB: \n");
    if (pibCIDADE1 > pibCIDADE2) {
        printf("A carta 1 tem o maior PIB!\n");
    } else if (pibCIDADE2 > pibCIDADE1) {
        printf("A carta 2 tem o maior PIB!\n");
    } else { 
        printf("As duas cartas tem o mesmo PIB!\n");
    }

    printf("\n comparação de pontos turísticos: \n");
    if (pontosturisticosCIDADE1 > pontosturisticosCIDADE2) {
        printf("A carta 1 tem a maior quantidade de pontos turísticos!\n");
    } else if (pontosturisticosCIDADE2 > pontosturisticosCIDADE2) {
        printf("A carta 2 tem a maior quantidade de pontos turísticos!\n");
    } else {
        printf("As duas cartas tem a mesma quantidade de pontos turísticos!\n");
    }

    printf("\n comparação de densidade demográfica: \n");
    if (densidadeCIDADE1 > densidadeCIDADE2) {
        printf("A carta 1 tem a maior densidade demográfica!\n");
    } else if (densidadeCIDADE2 > densidadeCIDADE1) {
        printf("A carta 2 tem a maior densidade demográfica!\n");
    } else { 
        printf("As duas cartas tem a mesma densidade demográfica!\n");
    }

    printf("\n comparação de PIB per capita: \n");
    if (pibpercapitaCIDADE1 > pibpercapitaCIDADE2) {
        printf("A carta 1 tem o maior PIB per capita!\n");
    } else if (pibpercapitaCIDADE2 > pibpercapitaCIDADE1) {
        printf("A carta 2 tem o maior PIB per capita!\n");
    } else {
        printf("As duas cartas tem o mesmo PIB per capita!\n");
    }

    printf("\n comparação de super poder: \n");
    if (superPODER1 > superPODER2) {
        printf("A carta 2 ganhou pois tem o menor super poder!\n");
    } else if (superPODER2 > superPODER1) {
        printf("A carta 1 ganhou pois tem o menor super poder!\n");
    } else {
        printf("As duas cartem possuem o mesmo super poder!\n");
    }

//------------------------------------------------------------------------------------------------
// FINALIZAÇÃO DO PROGRAMA
    return 0;
    

    
    }
    
    
    
    
    
    
    


    
    
