#include <stdio.h>
#include <string.h>

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
    	int cod1 =1, cod2 =2; // variável com array para receber código (EX: A01) até 4 caracteres
    	char cidade1[50], cidade2[50]; // variável com array para receber cidade com até 50 caracteres
    	unsigned long int pop1, pop2; // variável para receber números maiores e somente positivos, para armazenar a população acima de 2 bilhões
    	float area1, area2, pib1, pib2, densipop1, densipop2, pibpcapita1, pibpcapita2, superpoder1, superpoder2; // variável tipo flutuante para receber a área em formato Km², Pib, Densidade Populacional e Pip p Capta, etc..
    	int ptur1, ptur2, escolha1, escolha2; // variável tipo inteiro para receber o número de pontos turísticos e escolhas de caracteristicas para comparacao 

        printf("╔═════════════════════════════════════════════╗\n");
        printf("║▒▒▒▒▒▒▒▒▒▒▒▒ CADASTRO DA CARTA 1 ▒▒▒▒▒▒▒▒▒▒▒▒║\n");  
        printf("╚═════════════════════════════════════════════╝\n");  

    	// Entrada de dados para a Carta 1
   	printf("Insira os dados da Carta 1:\n"); // exibindo mensagem solicitando a inclusão de dados
    	printf("\nInforme o Estado: "); // exibindo mensagem solicitando a inclusão de dados 
    	scanf(" %s", &estado1); // recebendo os dados para estado
    	//printf("\nCódigo da Carta (ex: 01):"); // exibindo mensagem solicitando a inclusão de dados codigo da carta
    	//scanf("%c", cod1); // recebendo os dados para Código e armazenando na variável cod1
    	printf("\nNome da Cidade: "); // exibindo mensagem solicitando a inclusão de dados Cidade
    	scanf("%s", cidade1);  // recebendo os dados para Cidade e armazenando na variável cidade1
    	printf("\nPopulação: "); // exibindo mensagem solicitando a inclusão de dados População
    	scanf("%lu", &pop1); // recebendo os dados para População e armazenando na variável pop1
    	printf("\nÁrea (em km²): "); // exibindo mensagem solicitando a inclusão de dados Area
    	scanf("%f", &area1); // recebendo os dados para area e armazenando na variável area1
    	printf("\nPIB (em bilhões de reais): "); // exibindo mensagem solicitando a inclusão de dados PIB
    	scanf("%f", &pib1); // recebendo os dados para PIP e armazenando na variável pib1
    	printf("\nNúmero de Pontos Turísticos: ");  // exibindo mensagem solicitando a inclusão de dados Pontos Turísticos
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
    	printf("\nInforme o Estado: ");
	   scanf(" %s", &estado2);
    	//printf("\nCódigo da Carta (ex: 02): ");
    	//scanf("%c", cod2);
    	printf("\nNome da Cidade: ");
    	scanf("%s", cidade2); 
    	printf("\nPopulação: ");
    	scanf("%lu", &pop2);
    	printf("\nÁrea (em km²): ");
    	scanf("%f", &area2);
    	printf("\nPIB (em bilhões de reais): ");
    	scanf("%f", &pib2);
    	printf("\nNúmero de Pontos Turísticos: ");
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
        printf("║ ■ ESTADO:                 %d                       ║\n", estado1);  
        printf("║ ■ CÓDIGO:                 %d                       ║\n", cod1);  
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
        printf("║ ■ ESTADO:                 %d                       ║\n", estado2);  
        printf("║ ■ CÓDIGO:                 %d                       ║\n", cod2);  
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
      printf("ESCOLHA O PRIMEIRO ATRIBUTO: ");
      scanf("%d", &escolha1);
      do {
         printf("\n ESCOLHA O SEGUNDO ATRIBUTO: ");
         scanf("%d", &escolha2);
        if (escolha2 == escolha1) {
            printf("Erro: Voce nao pode escolher o mesmo atributo duas vezes. Tente novamente.\n");
            printf("Pressione ENTER para continuar...\n");
            getchar(); // espera usuário apertar ENTER
        }
      } while (escolha2 == escolha1);
      
        // Exibe a mensagem de Comparações das cartas 
        printf("╔═══════════════════════════════╗\n");
        printf("║     COMPARACAO DAS CARTAS     ║\n");
        printf("╚═══════════════════════════════╝\n \n"); 
         
        switch (escolha1)
        {
        case 1:
              printf("╔══════════════════════════╗\n");
              printf("║   ATRIBUTO - POPULACAO   ║\n");
              printf("╚══════════════════════════╝\n");
              printf("■ CARTA 1 - CIDADE: %s - POPULACAO: %lu \n■ CARTA 2 - CIDADE: %s -  POPULACAO: %lu \n ", cidade1, pop1, cidade2, pop2); 
              printf("Resultado: %s\n", (pop1 > pop2) ? "Carta 1 venceu" : (pop2 > pop1) ? "Carta 2 venceu" : "Empate");  
              break;
        case 2:
              printf("╔══════════════════════╗\n");
              printf("║   ATRIBUTO - AREA    ║\n");
              printf("╚══════════════════════╝\n"); 
              printf("■ CARTA 1 - CIDADE: %s - AREA: %.2f \n■ CARTA 2 - CIDADE: %s -  AREA: %.2f \n ", cidade1, area1, cidade2, area2);              
              printf("Resultado: %s\n", (area1 > area2) ? "Carta 1 venceu" : (area2 > area1) ? "Carta 2 venceu" : "Empate");                                                               
            break;
        case 3:
              printf("╔══════════════════════════╗\n");
              printf("║     ATRIBUTO - PIB       ║\n");
              printf("╚══════════════════════════╝\n");
              printf("■ CARTA 1 - CIDADE: %s - PIB: %.2f \n■ CARTA 2 - CIDADE: %s  - PIB: %.2f \n", cidade1, pib1, cidade2, pib2); 
              printf("Resultado: %s\n", (pib1 > pib2) ? "Carta 1 venceu" : (pib2 > pib1) ? "Carta 2 venceu" : "Empate");  
            break;
        case 4:
              printf("╔═════════════════════════════════╗\n");
              printf("║   ATRIBUTO - PONTOS TURISTICOS  ║\n");
              printf("╚═════════════════════════════════╝\n");
              printf("■ CARTA 1 - CIDADE: %s - PONTOS TURISTICOS: %d \n■ CARTA 2 - CIDADE: %s  - PONTOS TURISTICOS: %d \n", cidade1, ptur1, cidade2, ptur2); 
              printf("Resultado: %s\n", (ptur1 > ptur2) ? "Carta 1 venceu" : (ptur2 > ptur1) ? "Carta 2 venceu" : "Empate");  
            break;
        case 5:
             printf("╔══════════════════════════════════════╗\n");
             printf("║   ATRIBUTO - DENSIDADE POPULACIONAL  ║\n");
             printf("╚══════════════════════════════════════╝\n");
             printf("■ CARTA 1 - CIDADE: %s - DENSIDADE POPULACIONAL: %.2f \n■ CARTA 2 - CIDADE: %s  - DENSIDADE POPULACIONAL: %.2f \n", cidade1, densipop1, cidade2, densipop2); 
             printf("Resultado: %s\n", (densipop1 < densipop2) ? "Carta 1 venceu" : (densipop1 > densipop2) ? "Carta 2 venceu" : "Empate");  
            break; 
        default:
            printf("Opcao invalida!\n");
            printf("Pressione ENTER para continuar...\n");
            getchar(); // espera usuário apertar ENTER    
            goto menucarac; // salta para escolha de 2 caracteristicas menu
        }
        switch (escolha2)
                {
        case 1:
              printf("╔══════════════════════════╗\n");
              printf("║   ATRIBUTO - POPULACAO   ║\n");
              printf("╚══════════════════════════╝\n");
              printf("■ CARTA 1 - CIDADE: %s - POPULACAO: %lu \n■ CARTA 2 - CIDADE: %s -  POPULACAO: %lu \n ", cidade1, pop1, cidade2, pop2); 
              printf("Resultado: %s\n", (pop1 > pop2) ? "Carta 1 venceu" : (pop2 > pop1) ? "Carta 2 venceu" : "Empate");                                                                                              
              break;
        case 2:
              printf("╔══════════════════════╗\n");
              printf("║   ATRIBUTO - AREA    ║\n");
              printf("╚══════════════════════╝\n");
              printf("■ CARTA 1 - CIDADE: %s - AREA: %.2f \n■ CARTA 2 - CIDADE: %s -  AREA: %.2f \n ", cidade1, area1, cidade2, area2);  
              printf("Resultado: %s\n", (area1 > area2) ? "Carta 1 venceu" : (area2 > area1) ? "Carta 2 venceu" : "Empate");                                                            
            break;
        case 3:
              printf("╔══════════════════════════╗\n");
              printf("║     ATRIBUTO - PIB       ║\n");
              printf("╚══════════════════════════╝\n");
              printf("■ CARTA 1 - CIDADE: %s - PIB: %.2f \n■ CARTA 2 - CIDADE: %s  - PIB: %.2f \n", cidade1, pib1, cidade2, pib2);  
              printf("Resultado: %s\n", (pib1 > pib2) ? "Carta 1 venceu" : (pib2 > pib1) ? "Carta 2 venceu" : "Empate");  
            break;
        case 4:
              printf("╔═════════════════════════════════╗\n");
              printf("║   ATRIBUTO - PONTOS TURISTICOS  ║\n");
              printf("╚═════════════════════════════════╝\n");
              printf("■ CARTA 1 - CIDADE: %s - PONTOS TURISTICOS: %d \n■ CARTA 2 - CIDADE: %s  - PONTOS TURISTICOS: %d \n", cidade1, ptur1, cidade2, ptur2); 
              printf("Resultado: %s\n", (ptur1 > ptur2) ? "Carta 1 venceu" : (ptur2 > ptur1) ? "Carta 2 venceu" : "Empate");     
            break;
        case 5:
             printf("╔══════════════════════════════════════╗\n");
             printf("║   ATRIBUTO - DENSIDADE POPULACIONAL  ║\n");
             printf("╚══════════════════════════════════════╝\n");
             printf("■ CARTA 1 - CIDADE: %s - DENSIDADE POPULACIONAL: %.2f \n■ CARTA 2 - CIDADE: %s  - DENSIDADE POPULACIONAL: %.2f \n", cidade1, densipop1, cidade2, densipop2); 
             printf("Resultado: %s\n", (densipop1 < densipop2) ? "Carta 1 venceu" : (densipop1 > densipop2) ? "Carta 2 venceu" : "Empate");  
            break; 
        default:
            printf("Opcao invalida!\n");
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
