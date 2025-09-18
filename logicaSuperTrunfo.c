#include <stdio.h>

int main() {  
    // Declaração das variáveis 
    char estado1, estado2; //variável para receber estado representando com uma letra de (A-H)
    char cod1[4], cod2[4]; // variável com array para receber código (EX: A01) até 4 caracteres
    char cidade1[50], cidade2[50]; // variável com array para receber cidade com até 50 caracteres
    unsigned long int pop1, pop2; // variável para receber números maiores e somente positivos, para armazenar a população acima de 2 bilhões
    float area1, area2, pib1, pib2, densipop1, densipop2, pibpcapita1, pibpcapita2, superpoder1, superpoder2; // variável tipo flutuante para receber a área em formato Km², Pib, Densidade Populacional e Pip p Capta, etc..
    int ptur1, ptur2; // variável tipo inteiro para receber o número de pontos turísticos

    // Título feito com caracteres da tabela ASCII para melhor vizualização e destaque.
    printf("      ╔═══════════════════════════════╗\n");
    printf("      ║  DESAFIO SUPER TRUNFO PAÍSES  ║\n");
    printf("      ╚═══════════════════════════════╝\n \n"); // pulando duas linhas

    // Entrada de dados para a Carta 1
    printf("Insira os dados da Carta 1:\n"); // exibindo mensagem solicitando a inclusão de dados
    printf("Informe uma letra de (A a H) correnpondente ao Estado: "); // exibindo mensagem solicitando a inclusão de dados 
    scanf(" %c", &estado1); // recebendo os dados para estado
    printf("Código da Carta (ex: 01): "); // exibindo mensagem solicitando a inclusão de dados codigo da carta
    scanf("%s", cod1); // recebendo os dados para Código e armazenando na variável cod1
    printf("Nome da Cidade: "); // exibindo mensagem solicitando a inclusão de dados Cidade
    scanf("%s", cidade1);  // recebendo os dados para Cidade e armazenando na variável cidade1
    printf("População: "); // exibindo mensagem solicitando a inclusão de dados População
    scanf("%lu", &pop1); // recebendo os dados para População e armazenando na variável pop1
    printf("Área (em km²): "); // exibindo mensagem solicitando a inclusão de dados Area
    scanf("%f", &area1); // recebendo os dados para area e armazenando na variável area1
    printf("PIB (em bilhões de reais): "); // exibindo mensagem solicitando a inclusão de dados PIB
    scanf("%f", &pib1); // recebendo os dados para PIP e armazenando na variável pib1
    printf("Número de Pontos Turísticos: ");  // exibindo mensagem solicitando a inclusão de dados Pontos Turísticos
    scanf("%d", &ptur1); // recebendo os dados para Pontos Tur. e armazenando na variável ptur1

    // Exibindo a mensagem de confirmação 
    printf("╔═══════════════════════════════════════╗\n");
    printf("║ A CARTA FOI CADASTRADA COM SUCESSO!!  ║\n");
    printf("╚═══════════════════════════════════════╝\n");  

    // Entrada de dados para a Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Informe uma letra de (A a H) correnpondente ao Estado: ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: 02): ");
    scanf("%s", cod2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2); 
    printf("População: ");
    scanf("%lu", &pop2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &ptur2);

    // Nível Aventureiro - Calcular a densidade populacional 
    densipop1 = (float) pop1 / area1; // Calculo da Densidade Populacional da Carta 1 : população da cidade dividida pela área
    densipop2 = (float) pop2 / area2; 

     // Nível Aventureiro - Calcular o PIB per capita
    pibpcapita1 = (float) pib1 * 1000000000.0 / pop1; // PIB multiplicado por 1.000.000.000 para converter em reais e depois dividido pela população
    pibpcapita2 = (float) pib2 * 1000000000.0 / pop2; 

    // Nível Mestre (comparações e Super Poder)
    superpoder1 = pop1 + area1 + pib1 + ptur1 + pibpcapita1 + (1.0 / densipop1); // Super Poder será a soma de todos os atributos, mas densidade entra invertida (1/densidade)
    superpoder2 = pop2 + area2 + pib2 + ptur2 + pibpcapita2 + (1.0 / densipop2);



    // Exibindo a mensagem de confirmação 
    printf("╔═══════════════════════════════════════╗\n");
    printf("║ A CARTA FOI CADASTRADA COM SUCESSO!!  ║\n");
    printf("╚═══════════════════════════════════════╝\n \n \n");  

    printf("      ╔════════════════════════════════╗\n");
    printf("      ║ EXIBINDO AS CARTAS CADASTRADAS ║\n");
    printf("      ╚════════════════════════════════╝\n \n");

       // Exibindo as cartas na tabela feita com caracteres ASCII para melhor vizualização
        printf("╔═══════════════════════════════════════════════════╗\n");
        printf("║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ CARTA 1 ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒║\n");  
        printf("╠═══════════════════════════════════════════════════╣\n");              
        printf("║ ■ ESTADO:                 %c                       ║\n", estado1);  
        printf("║ ■ CÓDIGO:                 %c%s                     ║\n", estado1, cod1);  
        printf("║ ■ CIDADE:                 %s                       \n", cidade1);  
        printf("║ ■ POPULAÇÃO:              %lu                      \n", pop1);  
        printf("║ ■ ÁREA:                   %.2f Km²                 \n", area1);  
        printf("║ ■ PIB:                    %.2f Bilhões             \n", pib1);
        printf("║ ■ PONTOS TURISTICOS:      %d                       \n", ptur1);
        printf("║ ■ DENSIDADE POPULACIONAL: %.2f  hab/km²            \n", densipop1);
        printf("║ ■ PIB PER CAPITA:         %.2f                     \n", pibpcapita1);
        printf("║ ■ SUPER PODER:            %.2f                     \n", superpoder1);
        printf("╚═══════════════════════════════════════════════════╝\n \n \n");  

        printf("╔═══════════════════════════════════════════════════╗\n");
        printf("║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ CARTA 2 ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒║\n");  
        printf("╠═══════════════════════════════════════════════════╣\n");              
        printf("║ ■ ESTADO:                 %c                       ║\n", estado2);  
        printf("║ ■ CÓDIGO:                 %c%s                     ║\n", estado2, cod2);  
        printf("║ ■ CIDADE:                 %s                        \n", cidade2);  
        printf("║ ■ POPULAÇÃO:              %lu                       \n", pop2);  
        printf("║ ■ ÁREA:                   %.2f Km²                  \n", area2);  
        printf("║ ■ PIB:                    %.2f Bilhões              \n", pib2);
        printf("║ ■ PONTOS TURISTICOS:      %d                        \n", ptur2);
        printf("║ ■ DENSIDADE POPULACIONAL: %.2f  hab/km²             \n", densipop2);
        printf("║ ■ PIB PER CAPITA:         %.2f                      \n", pibpcapita2);
        printf("║ ■ SUPER PODER:            %.2f                      \n", superpoder2);
        printf("╚═══════════════════════════════════════════════════╝\n \n \n");  

        // Exibe a mensagem de Comparações das cartas 
        printf("╔═══════════════════════════════════════╗\n");
        printf("║   RANKING - COMPARACAO DAS CARTAS     ║\n");
        printf("╚═══════════════════════════════════════╝\n \n"); 
         
        // Inicia instrução if-else para comparar os atributos das cartas
        printf("╔══════════════════════════╗\n");
        printf("║   ATRIBUTO - POPULACAO   ║\n");
        printf("╚══════════════════════════╝\n"); 
        
        if (pop1 > pop2){ 
           printf("■ CARTA 1 - CIDADE: %s - POPULACAO: %lu \n■ CARTA 2 - CIDADE: %s -  POPULACAO: %lu \n■ RESULTADO: A CARTA 1 VENCEU \n", cidade1, pop1, cidade2, pop2);
        } else {     
           printf("■ CARTA 1 - CIDADE: %s - POPULACAO: %lu \n■ CARTA 2 - CIDADE: %s -  POPULACAO: %lu \n■ RESULTADO: A CARTA 2 VENCEU \n", cidade1, pop1, cidade2, pop2);
        }        
        
        printf("\n╔═════════════════════╗\n");
        printf("║   ATRIBUTO - AREA    ║\n");
        printf("╚══════════════════════╝\n"); 
        if (area1 > area2){
           printf("■ CARTA 1 - CIDADE: %s - AREA: %.2f \n■ CARTA 2 - CIDADE: %s -  AREA: %.2f \n■ RESULTADO: A CARTA 1 VENCEU \n", cidade1, area1, cidade2, area2);
        } else {     
           printf("■ CARTA 1 - CIDADE: %s - AREA: %.2f \n■ CARTA 2 - CIDADE: %s -  AREA: %.2f \n■ RESULTADO: A CARTA 2 VENCEU \n", cidade1, area1, cidade2, area2);
        }        
        
        printf("\n╔═════════════════════╗\n");
        printf("║   ATRIBUTO - PIB     ║\n");
        printf("╚══════════════════════╝\n"); 
        if (pib1 > pib2){
           printf("■ CARTA 1 - CIDADE: %s - PIB: %.2f \n■ CARTA 2 - CIDADE: %s  - PIB: %.2f \n■ RESULTADO: A CARTA 1 VENCEU \n", cidade1, pib1, cidade2, pib2);
        } else {     
           printf("■ CARTA 1 - CIDADE: %s - PIB: %.2f \n■ CARTA 2 - CIDADE: %s  - PIB: %.2f \n■ RESULTADO: A CARTA 2 VENCEU \n", cidade1, pib1, cidade2, pib2);
        }        
        
        printf("\n╔═════════════════════════════════╗\n");
        printf("║   ATRIBUTO - PONTOS TURISTICOS   ║\n");
        printf("╚══════════════════════════════════╝\n"); 
        if (ptur1 > ptur2){
           printf("■ CARTA 1 - CIDADE: %s - PONTOS TURISTICOS: %d \n■ CARTA 2 - CIDADE: %s  - PONTOS TURISTICOS: %d \n■ RESULTADO: A CARTA 1 VENCEU \n", cidade1, ptur1, cidade2, ptur2);
        } else {     
           printf("■ CARTA 1 - CIDADE: %s - PONTOS TURISTICOS: %d \n■ CARTA 2 - CIDADE: %s  - PONTOS TURISTICOS: %d \n■ RESULTADO: A CARTA 2 VENCEU \n", cidade1, ptur1, cidade2, ptur2);
        }        
        
        printf("\n╔═════════════════════════════════════╗\n");
        printf("║   ATRIBUTO - DENSIDADE POPULACIONAL  ║\n");
        printf("╚══════════════════════════════════════╝\n"); 
        if (densipop1 < densipop2){
           printf("■ CARTA 1 - CIDADE: %s - DENSIDADE POPULACIONAL: %.2f \n■ CARTA 2 - CIDADE: %s  - DENSIDADE POPULACIONAL: %.2f \n■ RESULTADO: A CARTA 1 VENCEU \n", cidade1, densipop1, cidade2, densipop2);
        } else {     
           printf("■ CARTA 1 - CIDADE: %s - DENSIDADE POPULACIONAL: %.2f \n■ CARTA 2 - CIDADE: %s  - DENSIDADE POPULACIONAL: %.2f \n■ RESULTADO: A CARTA 2 VENCEU \n", cidade1, densipop1, cidade2, densipop2);
        }
        printf("\n╔══════════════════╗\n");
        printf("║   PIB PER CAPITA  ║\n");
        printf("╚═══════════════════╝\n"); 
        if (pibpcapita1 > pibpcapita2){
           printf("■ CARTA 1 - CIDADE: %s - PIB PER CAPITA: %.2f \n■ CARTA 2 - CIDADE: %s  - PIB PER CAPITA: %.2f \n■ RESULTADO: A CARTA 1 VENCEU \n", cidade1, pibpcapita1, cidade2, pibpcapita2);
        } else {     
           printf("■ CARTA 1 - CIDADE: %s - PIB PER CAPITA: %.2f \n■ CARTA 2 - CIDADE: %s  - PIB PER CAPITA: %.2f \n■ RESULTADO: A CARTA 2 VENCEU \n", cidade1, pibpcapita1, cidade2, pibpcapita2);
        }
        printf("\n╔═══════════════╗\n");
        printf("║   SUPER PODER  ║\n");
        printf("╚════════════════╝\n"); 
        if (superpoder1 > superpoder2){
           printf("■ CARTA 1 - CIDADE: %s - SUPER PODER: %.2f \n■ CARTA 2 - CIDADE: %s  - SUPER PODER: %.2f \n■ RESULTADO: A CARTA 1 VENCEU \n", cidade1, superpoder1, cidade2, superpoder2);
        } else {     
           printf("■ CARTA 1 - CIDADE: %s - SUPER PODER: %.2f \n■ CARTA 2 - CIDADE: %s  - SUPER PODER: %.2f \n■ RESULTADO: A CARTA 2 VENCEU \n", cidade1, superpoder1, cidade2, superpoder2);
        }    
    return 0;
    }