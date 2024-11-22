Manual de Uso do Projeto UNIP-PIM-IV
Descrição do Projeto
O projeto UNIP-PIM-IV é um sistema simples em C para login, cadastro de indústrias e consulta de relatórios. Ele simula a administração de indústrias com funcionalidades de login, cadastro de dados e visualização de registros armazenados em arquivos binários.

Funcionalidades:
Login: Acesso ao sistema com usuário e senha predefinidos.
Cadastro de Indústria: Cadastro de informações de indústrias, como nome do responsável, nome da empresa, CNPJ, etc.
Consulta de Relatórios: Exibição dos registros de indústrias cadastradas.
Requisitos do Sistema
Softwares Necessários:
Para clonar, compilar e rodar o código, você precisa ter os seguintes programas instalados:

Git: Para clonar o repositório do GitHub.
Compilador C: Um compilador de C como o GCC para compilar o código.
Editor de Texto: Um editor de texto para visualizar e editar o código (como VS Code, Sublime Text, ou qualquer outro de sua preferência).
Instalação do Git:
Windows:
Baixe o Git aqui e siga o assistente de instalação.
Linux:
Execute o comando:
bash
Copiar código
sudo apt-get install git
MacOS:
Execute o comando:
bash
Copiar código
brew install git
Instalação do GCC (Compilador de C):
Windows:
Você pode instalar o MinGW ou usar o Code::Blocks que já inclui o GCC.
Alternativamente, instale o MSYS2 e siga as instruções do site oficial.
Linux:
Execute o comando:
bash
Copiar código
sudo apt-get install build-essential
MacOS:
Instale o Xcode Command Line Tools:
bash
Copiar código
xcode-select --install
Como Acessar o Código no GitHub
O código está hospedado no GitHub no repositório UNIP-PIM-IV. Para acessar, siga estas etapas:

Abra o navegador e vá até a página do repositório no GitHub: https://github.com/seu-usuario/UNIP-PIM-IV

Na página do repositório, você verá um botão verde chamado Code. Clique nele para copiar o link do repositório.

Como Clonar o Repositório
Abra o terminal (ou prompt de comando no Windows) no diretório onde deseja salvar o código.

Execute o comando abaixo, substituindo o link do repositório pelo link copiado do GitHub:

bash
Copiar código
git clone https://github.com/seu-usuario/UNIP-PIM-IV.git
Após o clone ser concluído, entre no diretório do projeto:

bash
Copiar código
cd UNIP-PIM-IV
Como Compilar o Código
Com o código clonado em seu computador, o próximo passo é compilá-lo. Siga as etapas abaixo:

1. Abra o terminal (ou prompt de comando).
2. Navegue até o diretório onde você clonou o repositório.
3. Compile o código usando o GCC com o seguinte comando:
bash
Copiar código
gcc -o unip_pim_iv main.c
Esse comando irá gerar um executável chamado unip_pim_iv.

Como Rodar o Código
Após a compilação, para rodar o código gerado, execute o seguinte comando:

bash
Copiar código
./unip_pim_iv
Isso iniciará o programa. Você verá o menu de opções para login, cadastro e consulta de relatórios.

Explicação do Código
Aqui está uma explicação do que cada parte do código faz:

1. Login
O código verifica se o usuário e senha inseridos correspondem aos valores registrados (no caso, "admin" e "1234"). Se os dados estiverem corretos, o programa avança para o menu; caso contrário, é encerrado.
2. Cadastro de Indústria
A função cadastrarIndustria coleta informações sobre uma indústria, como nome, CNPJ, telefone, etc., e as armazena em um arquivo binário chamado industria.dat.
3. Consulta de Relatórios
A função consultarRelatorios lê os dados do arquivo industria.dat e exibe todos os registros de indústrias cadastradas.
Estrutura de Dados:
A estrutura Industria armazena os dados sobre a indústria, incluindo campos como nome_responsavel, cnpj, telefone, etc.
Arquivo de Dados:
O arquivo de dados industria.dat é utilizado para armazenar os registros de indústrias de forma binária.
Considerações Finais
Este é um sistema básico, com funcionalidades de login e cadastro, utilizando a linguagem C. O projeto pode ser expandido para incluir novas funcionalidades, como a edição e exclusão de registros, ou até mesmo uma interface gráfica.

Para contribuir, basta fazer um fork do repositório e enviar um pull request com suas melhorias!
