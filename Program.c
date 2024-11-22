#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição de estrutura para dados da indústria
typedef struct {
    char nome_responsavel[50];
    char nome_empresa[50];
    char cnpj[20];
    char razao_social[50];
    char telefone[20];
    char endereco[100];
    char email[50];
    char data_abertura[11];
} Industria;

// Funções para login, cadastro e consulta
void login();
void cadastrarIndustria();
void consultarRelatorios();

int main() {
    login();
    int opcao;
    do {
        printf("\nMenu:\n1. Cadastrar Relatório\n2. Gerenciar Relatórios\n3. Consultar Relatórios\n4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: cadastrarIndustria(); break;
            case 2: /* Função de gerenciamento */ break;
            case 3: consultarRelatorios(); break;
            case 4: printf("Saindo...\n"); break;
            default: printf("Opção inválida.\n");
        }
    } while(opcao != 4);

    return 0;
}

// Função para login
void login() {
    char usuario[20], senha[20];
    char usuario_registrado[20] = "admin";  // Exemplo de usuário e senha
    char senha_registrada[20] = "1234";     // Estes dados podem ser lidos de um arquivo

    printf("Login\n");
    printf("Usuário: ");
    scanf("%s", usuario);
    printf("Senha: ");
    scanf("%s", senha);

    if (strcmp(usuario, usuario_registrado) == 0 && strcmp(senha, senha_registrada) == 0) {
        printf("Login realizado com sucesso!\n");
    } else {
        printf("Usuário ou senha incorretos. Encerrando o programa.\n");
        exit(1);
    }
}

// Função para cadastrar uma nova indústria
void cadastrarIndustria() {
    Industria industria;
    FILE *file = fopen("industria.dat", "ab"); // Abre em modo de adição binária
    if (!file) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    // Preenchimento dos dados
    printf("Nome do responsável: ");
    scanf(" %[^\n]", industria.nome_responsavel);
    printf("Nome da empresa: ");
    scanf(" %[^\n]", industria.nome_empresa);
    printf("CNPJ: ");
    scanf(" %[^\n]", industria.cnpj);
    printf("Razão social: ");
    scanf(" %[^\n]", industria.razao_social);
    printf("Telefone: ");
    scanf(" %[^\n]", industria.telefone);
    printf("Endereço: ");
    scanf(" %[^\n]", industria.endereco);
    printf("Email: ");
    scanf(" %[^\n]", industria.email);
    printf("Data de abertura (DD/MM/AAAA): ");
    scanf(" %[^\n]", industria.data_abertura);

    fwrite(&industria, sizeof(Industria), 1, file);
    fclose(file);
    printf("Cadastro realizado com sucesso.\n");
}

// Função para consultar relatórios cadastrados
void consultarRelatorios() {
    Industria industria;
    FILE *file = fopen("industria.dat", "rb"); // Abre em modo de leitura binária
    if (!file) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("\nRelatórios Cadastrados:\n");
    while (fread(&industria, sizeof(Industria), 1, file)) {
        printf("Nome do Responsável: %s\n", industria.nome_responsavel);
        printf("Nome da Empresa: %s\n", industria.nome_empresa);
        printf("CNPJ: %s\n", industria.cnpj);
        printf("Razão Social: %s\n", industria.razao_social);
        printf("Telefone: %s\n", industria.telefone);
        printf("Endereço: %s\n", industria.endereco);
        printf("Email: %s\n", industria.email);
        printf("Data de Abertura: %s\n", industria.data_abertura);
        printf("-----------------------------\n");
    }

    fclose(file);
}
