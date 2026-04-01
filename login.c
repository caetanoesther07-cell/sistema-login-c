#include <stdio.h>
#include <string.h>

int main() {
    char usuario[20];
    char senha[20];

    // Dados corretos
    char usuario_correto[] = "admin";
    char senha_correta[] = "1234";

    int tentativas = 3;

    while (tentativas > 0) {
        printf("Usuario: ");
        scanf("%s", usuario);

        printf("Senha: ");
        scanf("%s", senha);

        if (strcmp(usuario, usuario_correto) == 0 && strcmp(senha, senha_correta) == 0) {
            printf("\nAcesso liberado!\n");
            break;
        } else {
            tentativas--;
            printf("\nDados incorretos! Tentativas restantes: %d\n\n", tentativas);
        }
    }

    if (tentativas == 3) {
        printf("Acesso bloqueado!\n");
    }

    return 0;
}