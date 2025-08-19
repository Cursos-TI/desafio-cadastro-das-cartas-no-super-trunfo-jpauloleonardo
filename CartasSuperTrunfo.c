#include <stdio.h>

int main(){
    // Atributos das duas cartas
    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;

    // Cadastro da primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("População: ");
    scanf("%d", &Populacao1);
    printf("Área: ");
    scanf("%f", &Area1);
    printf("PIB: ");
    scanf("%f", &PIB1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    // Cadastro da segunda carta
    printf("Digite os dados da segunda carta:\n");
    printf("População: ");
    scanf("%d", &Populacao2);
    printf("Área: ");
    scanf("%f", &Area2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    // Exibição dos dados
    printf("\n===== Dados da Primeira Carta =====\n");
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Número de pontos turísticos: %d\n", PontosTuristicos1);

    printf("\n===== Dados da Segunda Carta =====\n");
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Número de pontos turísticos: %d\n", PontosTuristicos2);

    return 0;












}
