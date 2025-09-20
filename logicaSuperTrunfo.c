#include <stdio.h>

int main() {  
   
    int opcao; //variável para receber opção do primeiro MENU DE OPÇÕES

    inicio: // Rotulo para poder saltar de volta ao inicio
    printf("╔═══════════════════════════════════╗\n");  // Primeiro MENU - Título feito com caracteres da tabela ASCII para ficar mais fluflu O_o
    printf("║▒▒▒ DESAFIO SUPER TRUNFO PAÍSES  ▒▒║\n");  
    printf("╠═══════════════════════════════════╣\n");              
    printf("║ ■ ( 1 ) INICIAR JOGO              ║\n");  
    printf("║ ■ ( 2 ) REGRAS                    ║\n");  
    printf("║ ■ ( 3 ) SAIR                      ║\n");  
    printf("╚═══════════════════════════════════╝\n \n \n");  

    printf("Escolha uma opcao [1, 2 ou 3] ");
    scanf("%d", &opcao);
	
    if (opcao == 1) {
    	// Declaração das variáveis para os dados das cartas
    	char estado1, estado2; //variável para receber estado  
    	char cod1[4], cod2[4]; // variável com array para receber código (EX: A01) até 4 caracteres
    	char cidade1[50], cidade2[50]; // variável com array para receber cidade com até 50 caracteres
    	unsigned long int pop1, pop2; // variável para receber números maiores e somente positivos, para armazenar a população acima de 2 bilhões
    	float area1, area2, pib1, pib2, densipop1, densipop2, pibpcapita1, pibpcapita2, superpoder1, superpoder2; // variável tipo flutuante para receber a área em formato Km², Pib, Densidade Populacional e Pip p Capta, etc..
    	int ptur1, ptur2, carac1, carac2; // variável tipo inteiro para receber o número de pontos turísticos e escolhas de caracteristicas para comparacao 

        printf("╔═════════════════════════════════════════════╗\n");
        printf("║▒▒▒▒▒▒▒▒▒▒▒▒ CADASTRO DA CARTA 1 ▒▒▒▒▒▒▒▒▒▒▒▒║\n");  
        printf("╚═════════════════════════════════════════════╝\n");  

    	// Entrada de dados para a Carta 1
   	    printf("Insira os dados da Carta 1:\n"); // exibindo mensagem solicitando a inclusão de dados
    	printf("Informe o Estado: "); // exibindo mensagem solicitando a inclusão de dados 
    	scanf("%c", &estado1); // recebendo os dados para estado
    	printf("Código da Carta (ex: 01):"); // exibindo mensagem solicitando a inclusão de dados codigo da carta
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
    	printf("╔═════════════════════════════════════╗\n");
    	printf("║ A CARTA FOI CADASTRADA COM SUCESSO!!║\n");
    	printf("╚═════════════════════════════════════╝\n");
        printf("Pressione ENTER para continuar...\n");
        getchar(); // espera usuário apertar ENTER  

        printf("╔═════════════════════════════════════════════╗\n");
        printf("║▒▒▒▒▒▒▒▒▒▒ CADASTRO DA CARTA 2 ▒▒▒▒▒▒▒▒▒▒▒▒▒▒║\n");  
        printf("╚═════════════════════════════════════════════╝\n");  

	// Entrada de dados para a Carta 2
    	printf("\nInsira os dados da Carta 2:\n");
    	printf("Informe o Estado: ");
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

        // Exibindo a mensagem de confirmação 
        printf("╔═══════════════════════════════════════╗\n");
        printf("║  A CARTA FOI CADASTRADA COM SUCESSO!! ║\n");
        printf("╚═══════════════════════════════════════╝\n \n \n"); 
        printf("Pressione ENTER para continuar...\n");
        getchar(); // espera usuário apertar ENTER   

    	// Nível Aventureiro - Calcular a densidade populacional 
    	densipop1 = (float) pop1 / area1; // Calculo da Densidade Populacional da Carta 1 : população da cidade dividida pela área
    	densipop2 = (float) pop2 / area2; 

     	// Nível Aventureiro - Calcular o PIB per capita
    	pibpcapita1 = (float) pib1 * 1000000000.0 / pop1; // PIB multiplicado por 1.000.000.000 para converter em reais e depois dividido pela população
    	pibpcapita2 = (float) pib2 * 1000000000.0 / pop2; 

    	// Nível Mestre (comparações e Super Poder)
    	superpoder1 = pop1 + area1 + pib1 + ptur1 + pibpcapita1 + (1.0 / densipop1); // Super Poder será a soma de todos os atributos, mas densidade entra invertida (1/densidade)
    	superpoder2 = pop2 + area2 + pib2 + ptur2 + pibpcapita2 + (1.0 / densipop2);

    	printf("      ╔════════════════════════════════╗\n");
    	printf("      ║ EXIBINDO AS CARTAS CADASTRADAS ║\n");
    	printf("      ╚════════════════════════════════╝\n \n");

        // Exibindo as cartas na tabela feita com caracteres ASCII \o/
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
        printf("Pressione ENTER para continuar...\n");
        getchar(); // espera usuário apertar ENTER  

   	 //  MENU DE ESCOLHA DE CARACTERISTICAS PARA COMPARACAO
        menucarac:
    	printf("╔═════════════════════════════════╗\n");
    	printf("║▒▒▒ ESCOLHA 2 CARACTERISTICAS ▒▒▒║\n");  
    	printf("╠═════════════════════════════════╣\n");              
    	printf("║ ( 1 ) POPULACAO                 ║\n");  
    	printf("║ ( 2 ) AREA                      ║\n");  
    	printf("║ ( 3 ) PIB                       ║\n"); 
   	    printf("║ ( 4 ) PONTOS TURISTICOS         ║\n");
        printf("║ ( 5 ) DENSIDADE DEMOGRAFICA     ║\n");
    	printf("╚═════════════════════════════════╝\n \n \n");  
        printf("PRIMEIRA CARACTERISTICA: ");
        scanf("%d", &carac1);
        printf("SEGUNDA CARACTERISTICA: ");
        scanf("%d", &carac2);

        // Exibe a mensagem de Comparações das cartas 
        printf("╔═══════════════════════════════╗\n");
        printf("║     COMPARACAO DAS CARTAS     ║\n");
        printf("╚═══════════════════════════════╝\n \n"); 
         
        switch (carac1)
        {
        case 0:
              printf("╔══════════════════════════╗\n");
              printf("║   ATRIBUTO - POPULACAO   ║\n");
              printf("╚══════════════════════════╝\n"); 
              if (pop1 > pop2){ 
                  printf("■ CARTA 1 - CIDADE: %s - POPULACAO: %lu \n■ CARTA 2 - CIDADE: %s -  POPULACAO: %lu \n■ RESULTADO: A CARTA 1 VENCEU \n", cidade1, pop1, cidade2, pop2);
              } else if (pop1 < pop2){     
                  printf("■ CARTA 1 - CIDADE: %s - POPULACAO: %lu \n■ CARTA 2 - CIDADE: %s -  POPULACAO: %lu \n■ RESULTADO: A CARTA 2 VENCEU \n", cidade1, pop1, cidade2, pop2);
              } else{                                                                                                             
                  printf("■ CARTA 1 - CIDADE: %s - POPULACAO: %lu \n■ CARTA 2 - CIDADE: %s -  POPULACAO: %lu \n■ RESULTADO: EMPATE !!!  \n", cidade1, pop1, cidade2, pop2);
              }
              break;
        case 1:
              printf("╔══════════════════════╗\n");
              printf("║   ATRIBUTO - AREA    ║\n");
              printf("╚══════════════════════╝\n"); 
              if (area1 > area2){
                 printf("■ CARTA 1 - CIDADE: %s - AREA: %.2f \n■ CARTA 2 - CIDADE: %s -  AREA: %.2f \n■ RESULTADO: A CARTA 1 VENCEU \n", cidade1, area1, cidade2, area2);
              } else if (area1 < area2){     
                 printf("■ CARTA 1 - CIDADE: %s - AREA: %.2f \n■ CARTA 2 - CIDADE: %s -  AREA: %.2f \n■ RESULTADO: A CARTA 2 VENCEU \n", cidade1, area1, cidade2, area2);
              } else{
                 printf("■ CARTA 1 - CIDADE: %s - AREA: %.2f \n■ CARTA 2 - CIDADE: %s -  AREA: %.2f \n■ RESULTADO: EMPATE !!! \n", cidade1, area1, cidade2, area2);   
              }                                                                       
            break;
        case 2:
              printf("╔══════════════════════════╗\n");
              printf("║     ATRIBUTO - PIB       ║\n");
              printf("╚══════════════════════════╝\n"); 
              if (pib1 > pib2){
                 printf("■ CARTA 1 - CIDADE: %s - PIB: %.2f \n■ CARTA 2 - CIDADE: %s  - PIB: %.2f \n■ RESULTADO: A CARTA 1 VENCEU \n", cidade1, pib1, cidade2, pib2);
              } else if (pib1 < pib2){
                 printf("■ CARTA 1 - CIDADE: %s - PIB: %.2f \n■ CARTA 2 - CIDADE: %s  - PIB: %.2f \n■ RESULTADO: A CARTA 2 VENCEU \n", cidade1, pib1, cidade2, pib2);
              } else{
                 printf("■ CARTA 1 - CIDADE: %s - PIB: %.2f \n■ CARTA 2 - CIDADE: %s  - PIB: %.2f \n■ RESULTADO: EMPATE !!! \n", cidade1, pib1, cidade2, pib2);
              }   
            break;
        case 3:
              printf("╔═════════════════════════════════╗\n");
              printf("║   ATRIBUTO - PONTOS TURISTICOS  ║\n");
              printf("╚═════════════════════════════════╝\n"); 
              if (ptur1 > ptur2){
                 printf("■ CARTA 1 - CIDADE: %s - PONTOS TURISTICOS: %d \n■ CARTA 2 - CIDADE: %s  - PONTOS TURISTICOS: %d \n■ RESULTADO: A CARTA 1 VENCEU \n", cidade1, ptur1, cidade2, ptur2);
              } else if (ptur1 < ptur2){      
                 printf("■ CARTA 1 - CIDADE: %s - PONTOS TURISTICOS: %d \n■ CARTA 2 - CIDADE: %s  - PONTOS TURISTICOS: %d \n■ RESULTADO: A CARTA 2 VENCEU \n", cidade1, ptur1, cidade2, ptur2);
              } else {
                 printf("■ CARTA 1 - CIDADE: %s - PONTOS TURISTICOS: %d \n■ CARTA 2 - CIDADE: %s  - PONTOS TURISTICOS: %d \n■ RESULTADO: EMPATE !!!  \n", cidade1, ptur1, cidade2, ptur2);
              }                                                                                   
            break;
        case 4:
             printf("╔══════════════════════════════════════╗\n");
             printf("║   ATRIBUTO - DENSIDADE POPULACIONAL  ║\n");
             printf("╚══════════════════════════════════════╝\n"); 
             if (densipop1 < densipop2){
                printf("■ CARTA 1 - CIDADE: %s - DENSIDADE POPULACIONAL: %.2f \n■ CARTA 2 - CIDADE: %s  - DENSIDADE POPULACIONAL: %.2f \n■ RESULTADO: A CARTA 1 VENCEU \n", cidade1, densipop1, cidade2, densipop2);
             } else if (densipop1 > densipop2){     
               printf("■ CARTA 1 - CIDADE: %s - DENSIDADE POPULACIONAL: %.2f \n■ CARTA 2 - CIDADE: %s  - DENSIDADE POPULACIONAL: %.2f \n■ RESULTADO: A CARTA 2 VENCEU \n", cidade1, densipop1, cidade2, densipop2);
             } else {
               printf("■ CARTA 1 - CIDADE: %s - DENSIDADE POPULACIONAL: %.2f \n■ CARTA 2 - CIDADE: %s  - DENSIDADE POPULACIONAL: %.2f \n■ RESULTADO: EMPATE !!! \n", cidade1, densipop1, cidade2, densipop2); 
             }
            break; 
        default:
            printf("Opcao invalida!\n");
            printf("Pressione ENTER para continuar...\n");
            getchar(); // espera usuário apertar ENTER    
            goto menucarac; // salta para escolha de 2 caracteristicas menu
        }
        switch (carac2)
        {
        case 0:
              printf("╔══════════════════════════╗\n");
              printf("║   ATRIBUTO - POPULACAO   ║\n");
              printf("╚══════════════════════════╝\n"); 
              if (pop1 > pop2){ 
                  printf("■ CARTA 1 - CIDADE: %s - POPULACAO: %lu \n■ CARTA 2 - CIDADE: %s -  POPULACAO: %lu \n■ RESULTADO: A CARTA 1 VENCEU \n", cidade1, pop1, cidade2, pop2);
              } else if (pop1 < pop2){     
                  printf("■ CARTA 1 - CIDADE: %s - POPULACAO: %lu \n■ CARTA 2 - CIDADE: %s -  POPULACAO: %lu \n■ RESULTADO: A CARTA 2 VENCEU \n", cidade1, pop1, cidade2, pop2);
              } else{                                                                                                             
                  printf("■ CARTA 1 - CIDADE: %s - POPULACAO: %lu \n■ CARTA 2 - CIDADE: %s -  POPULACAO: %lu \n■ RESULTADO: EMPATE !!!  \n", cidade1, pop1, cidade2, pop2);
              }
              break;
        case 1:
              printf("╔══════════════════════╗\n");
              printf("║   ATRIBUTO - AREA    ║\n");
              printf("╚══════════════════════╝\n"); 
              if (area1 > area2){
                 printf("■ CARTA 1 - CIDADE: %s - AREA: %.2f \n■ CARTA 2 - CIDADE: %s -  AREA: %.2f \n■ RESULTADO: A CARTA 1 VENCEU \n", cidade1, area1, cidade2, area2);
              } else if (area1 < area2){     
                 printf("■ CARTA 1 - CIDADE: %s - AREA: %.2f \n■ CARTA 2 - CIDADE: %s -  AREA: %.2f \n■ RESULTADO: A CARTA 2 VENCEU \n", cidade1, area1, cidade2, area2);
              } else{
                 printf("■ CARTA 1 - CIDADE: %s - AREA: %.2f \n■ CARTA 2 - CIDADE: %s -  AREA: %.2f \n■ RESULTADO: EMPATE !!! \n", cidade1, area1, cidade2, area2);   
              }                                                                       
              break;
        case 2:
              printf("╔══════════════════════════╗\n");
              printf("║     ATRIBUTO - PIB       ║\n");
              printf("╚══════════════════════════╝\n"); 
              if (pib1 > pib2){
                 printf("■ CARTA 1 - CIDADE: %s - PIB: %.2f \n■ CARTA 2 - CIDADE: %s  - PIB: %.2f \n■ RESULTADO: A CARTA 1 VENCEU \n", cidade1, pib1, cidade2, pib2);
              } else if (pib1 < pib2){
                 printf("■ CARTA 1 - CIDADE: %s - PIB: %.2f \n■ CARTA 2 - CIDADE: %s  - PIB: %.2f \n■ RESULTADO: A CARTA 2 VENCEU \n", cidade1, pib1, cidade2, pib2);
              } else{
                 printf("■ CARTA 1 - CIDADE: %s - PIB: %.2f \n■ CARTA 2 - CIDADE: %s  - PIB: %.2f \n■ RESULTADO: EMPATE !!! \n", cidade1, pib1, cidade2, pib2);
              }   
              break;
        case 3:
              printf("╔═════════════════════════════════╗\n");
              printf("║   ATRIBUTO - PONTOS TURISTICOS  ║\n");
              printf("╚═════════════════════════════════╝\n"); 
              if (ptur1 > ptur2){
                 printf("■ CARTA 1 - CIDADE: %s - PONTOS TURISTICOS: %d \n■ CARTA 2 - CIDADE: %s  - PONTOS TURISTICOS: %d \n■ RESULTADO: A CARTA 1 VENCEU \n", cidade1, ptur1, cidade2, ptur2);
              } else if (ptur1 < ptur2){      
                 printf("■ CARTA 1 - CIDADE: %s - PONTOS TURISTICOS: %d \n■ CARTA 2 - CIDADE: %s  - PONTOS TURISTICOS: %d \n■ RESULTADO: A CARTA 2 VENCEU \n", cidade1, ptur1, cidade2, ptur2);
              } else {
                 printf("■ CARTA 1 - CIDADE: %s - PONTOS TURISTICOS: %d \n■ CARTA 2 - CIDADE: %s  - PONTOS TURISTICOS: %d \n■ RESULTADO: EMPATE !!!  \n", cidade1, ptur1, cidade2, ptur2);
              }                                                                                   
              break;
        case 4:
             printf("╔══════════════════════════════════════╗\n");
             printf("║   ATRIBUTO - DENSIDADE POPULACIONAL  ║\n");
             printf("╚══════════════════════════════════════╝\n"); 
             if (densipop1 < densipop2){
                printf("■ CARTA 1 - CIDADE: %s - DENSIDADE POPULACIONAL: %.2f \n■ CARTA 2 - CIDADE: %s  - DENSIDADE POPULACIONAL: %.2f \n■ RESULTADO: A CARTA 1 VENCEU \n", cidade1, densipop1, cidade2, densipop2);
             } else if (densipop1 > densipop2){     
               printf("■ CARTA 1 - CIDADE: %s - DENSIDADE POPULACIONAL: %.2f \n■ CARTA 2 - CIDADE: %s  - DENSIDADE POPULACIONAL: %.2f \n■ RESULTADO: A CARTA 2 VENCEU \n", cidade1, densipop1, cidade2, densipop2);
             } else {
               printf("■ CARTA 1 - CIDADE: %s - DENSIDADE POPULACIONAL: %.2f \n■ CARTA 2 - CIDADE: %s  - DENSIDADE POPULACIONAL: %.2f \n■ RESULTADO: EMPATE !!! \n", cidade1, densipop1, cidade2, densipop2); 
             }
             break;
        default:
            printf("Opcao invalida!\n");
            printf("Pressione ENTER para continuar...\n");
            getchar(); // espera usuário apertar ENTER    
            goto menucarac; // salta para escolha de 2 caracteristicas menu
        }
    }    
    else if (opcao == 2) {
        printf("╔══════════════════════════╗\n");
        printf("║     REGRAS DO JOGO       ║\n");
        printf("╚══════════════════════════╝\n"); 
        printf("1. Cada jogador cadastra os atributos da sua carta: Ex. populacao, area, PIB e pontos turisticos.\n");
        printf("2. Escolhe-se duas cartas e duas caracteristicas para comparar.\n");
        printf("3. O programa mostra qual carta venceu em cada caracteristica.\n");
        printf("Pressione ENTER para continuar...\n");
        getchar(); // espera usuário apertar ENTER
        goto inicio;
    }
    else {
        printf("\nSaindo do jogo...\n");
    }

    return 0;
}
