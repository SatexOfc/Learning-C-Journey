#include <stdio.h>
#include <string.h>

int main(){
    char usuario[50], user2[50];
    char senha[9], senha2[9];
    int entrou = 0;
    int tentativas = 0;
    int contaExiste = 0;
    //int contaFeita = 0;
    

    while (tentativas < 3 && entrou == 0){
        printf("---- Sistema de Login --\n");
        printf("Olá! Bem-vindo ao sistema de login.\n");
        printf("------------------------------\n");
        printf("\n");
        printf("Se você deseja ja tiver uma conta, digite 1. Se você deseja criar uma conta, digite 2: ");
        int opcao;
        scanf("%d", &opcao);

        if (contaExiste == 1){
            switch (opcao){
            case 1:
                printf("Você escolheu fazer login.\n");

                printf("------------------------------\n");
                printf("Digite seu nome de usuário: ");
                scanf("%49s", user2);
                printf("Digite a senha (8 caracteres): ");
                scanf("%8s", senha2);
                if (strcmp(senha, senha2) != 0 || strcmp(usuario, user2) != 0)
                {

                    printf("Senha incorreta. Tente novamente.\n");
                }
                else
                {

                    printf("Login realizado com sucesso!\n");

                    entrou = 1;
                }

                tentativas++;

                break;

            case 2:

                if (contaExiste == 0){

                printf("Você escolheu criar uma conta.\n");
                printf("------------------------------\n");
                printf("Crie um nome de usuário: ");
                scanf("%49s", usuario);
                printf("Crie uma senha (8 caracteres): ");
                scanf("%8s", senha);
                printf("Conta criada com sucesso!\n");
                contaExiste = 1;
                //contaFeita = 1;

                }
                else{
                    printf("Você já possui uma conta. Faça login.\n");
                }

                break;

            default:

                printf("Opção inválida. Encerrando o programa.\n");

                return 0;
            }
        }
        else if (contaExiste == 0){
            printf("Você precisa criar uma conta antes de fazer login.\n");
            printf("------------------------------\n");
            printf("Crie um nome de usuário: ");
            scanf("%49s", usuario);
            printf("Crie uma senha (8 caracteres): ");
            scanf("%8s", senha);
            printf("Conta criada com sucesso!\n");
            contaExiste = 1;
            //contaFeita = 1;
        }
    }
       
    return 0;
}