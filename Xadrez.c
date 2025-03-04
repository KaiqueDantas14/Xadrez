// nivel aventureiro
// nesse nível irei adicionar a logica da movimentação do cavalo: O cavalo se movimenta duas casas e depois faz um movimento perpendicular, ou seja, se move duas vezes para frente e uma vez para o lado, o lado pode ser para a esquerda ou direita.
#include <stdio.h>

int main(){
    printf("=========================\n");
    printf("         Xadrez\n");
    printf("=========================\n");

    int opcao, peca, movimentoBispo = 0, movimentoRainha = 0;// crianção das variaveis para movimento do bispo e da rainha
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
        printf("4. Cavalo\n");
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
        
        case 4:
                for(int x = 2; x > 0; x--){  // Laço externo para cima
                    printf("Cima\n");

                    for(int y = 1; y > 0; y--){  // Laço interno que só vai rodar uma vez no final das duas iterações do movimento vertical
                     
                        if(x == 1){ // Só imprime "Direita" após a última iteração do movimento para cima
                            printf("Direita\n");
                        }
                    }
                }
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
        printf("Cavalo: se move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um L.");
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