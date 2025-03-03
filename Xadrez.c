#include <stdio.h>

int main(){
    printf("=========================\n");
    printf("         Xadrez\n");
    printf("=========================\n");

    int opcao, peca, movimentoBispo = 0, movimentoRainha = 0; // crianção das variaveis para movimento do bispo e da rainha
    printf("Escolha uma opção: \n");
    printf("1. Jogar \n");
    printf("2. Regras \n");
    printf("3. Sair\n");
    printf("> ");
    scanf("%d", &opcao);

    switch (opcao) // Criando um switch para o usuario escolher qual peça ele deseja ver o movimento
    {
    case 1:
        printf("Escolha uma peça\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("> ");
        scanf("%d", &peca);
        switch (peca)
        {
        case 1:
            printf("A Torre se movimenta:\n");
                for (int i = 0; i < 5; i++){ // usando for para simular o movimento da Torre
                    printf("Direita\n");
                }
            break;
        case 2:
            printf("O Bispo se movimenta:\n");
                while(movimentoBispo < 5){ 
                    printf("Cima, Direita\n");
                    movimentoBispo++;
                }
            break;

        case 3:
            printf("A Rainha se movimenta:\n");
                do{ // a Rainha de move ao menos uma vez para a esquerda, depois o while verifica a condição
                    printf("Esquerda\n");
                    movimentoRainha++;
                } while (movimentoRainha < 8);
            break;

        default:
                printf("Opção Invalida!"); // Caso o usuario digite outra opção
            break;
        }

        break;
        
    case 2:
        printf("Regras...");      
        printf("O jogo consiste em 3 peças:\n");
        printf("Torre: Move-se em linha reta horizontalmente ou verticalmente.\n");
        printf("Bispo: Move-se na diagonal.\n");
        printf("Rainha: Move-se em todas as direções.\n"); 
        break;

    case 3:
        printf("Saindo do jogo...");
        break;

    default:
        printf("Opção Invalida!");
        break;
    }
    return 0;
}