/*Nivel Mestre
Nesse nivel, alterei a logica das peças Torre, Bispo e Rainha, utilizando funções através da recursividade, assim melhorando a legibilidade e facilidade de entendimento do codigo*/
#include <stdio.h>

void movimentoTorre(int casasTorre){ //criando funções com a viariavel casas + nome da peça, para facilitar uma futura correção, se necessario.
        if(casasTorre > 0){
            printf("Direita\n"); 
            movimentoTorre(casasTorre - 1); // reduzindo o numero de casas a serem movidas
        }
}

void movimentoBispo(int casasBispo){
    if(casasBispo > 0 ){
       for(int cima = 0; cima < 3; cima++){
         printf("Cima\n");
            if(cima < 2){ // Garante que 'Direita' não seja impresso após o ultimo 'cima'
                for(int direita = 0; direita < 1; direita++){
                    printf("Direita\n");
                }
            }
       }

    }
}

void movimentoRainha(int casasRainha){
    if(casasRainha > 0){
        printf("Esquerda\n");
        movimentoRainha(casasRainha - 1);
    }
}

int main(){
    printf("=========================\n");
    printf("         Xadrez\n");
    printf("=========================\n");

    int opcao, peca;// crianção das variaveis para movimento do bispo e da rainha
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
            movimentoTorre(5); // Chamando função para executar o movimento da torre
            break;
        case 2:
            movimentoBispo(5);
            break;

        case 3:
            printf("A Rainha se movimenta:\n");
            movimentoRainha(8);
            break;
        
        case 4:
            printf("O Cavalo se movimenta:\n");
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