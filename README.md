# Resumo de AEDS

**1. Variáveis e Tipos de Dados:**

```c
#include <stdio.h>

int main() {
    // Declaração de variáveis com tipos de dados:
    int idade = 25; // Inteiro (número inteiro)
    float altura = 1.75; // Ponto flutuante (número decimal)
    char inicial = 'J'; // Caractere (um único caractere)

    // Imprime os valores das variáveis:
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Inicial: %c\n", inicial);

    return 0;
}
```

**#include <stdio.h>:** Inclui a biblioteca padrão de entrada e saída, necessária para usar funções como `printf`.
**int main():** Função principal, ponto de entrada do programa.
**int, float, char:** Tipos de dados que definem o tipo de informação que uma variável pode armazenar.
**Declaração de Variáveis:** `int idade = 25;` declara uma variável chamada `idade` do tipo `int` e inicializa com o valor 25.
**printf():** Imprime texto e valores de variáveis na tela.

**2. Operadores:**

```c
#include <stdio.h>

int main() {
    int numero1 = 10;
    int numero2 = 5;

    // Operadores aritméticos:
    int soma = numero1 + numero2; // Adição
    int subtracao = numero1 - numero2; // Subtração
    int multiplicacao = numero1 * numero2; // Multiplicação
    int divisao = numero1 / numero2; // Divisão
    int modulo = numero1 % numero2; // Resto da divisão

    // Operadores de comparação:
    int igual = numero1 == numero2; // Verifica se é igual
    int diferente = numero1 != numero2; // Verifica se é diferente
    int maior = numero1 > numero2; // Verifica se é maior
    int menor = numero1 < numero2; // Verifica se é menor
    int maiorIgual = numero1 >= numero2; // Verifica se é maior ou igual
    int menorIgual = numero1 <= numero2; // Verifica se é menor ou igual

    // Operadores lógicos:
    int eLogico = numero1 > 5 && numero2 < 10; // E lógico
    int ouLogico = numero1 < 0 || numero2 > 10; // Ou lógico
    int negacao = !(numero1 == 10); // Negação

    // Imprime os resultados:
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    // ... e assim por diante para os outros resultados

    return 0;
}
```

**Operadores Aritméticos:** Realizam operações matemáticas como adição, subtração, multiplicação, divisão e módulo.
**Operadores de Comparação:** Comparam valores e retornam um valor booleano (verdadeiro ou falso).
**Operadores Lógicos:** Combinam expressões booleanas usando "e", "ou" e "negação".

**3. Estruturas de Controle:**

```c
#include <stdio.h>

int main() {
    int idade = 20;

    // Estrutura de controle if-else:
    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    } else {
        printf("Você é menor de idade.\n");
    }

    // Estrutura de controle switch-case:
    int diaSemana = 3;
    switch (diaSemana) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        default:
            printf("Dia inválido.\n");
    }

    // Estrutura de controle for:
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

    // Estrutura de controle while:
    int contador = 0;
    while (contador < 10) {
        printf("%d\n", contador);
        contador++;
    }

    return 0;
}
```

**if-else:** Executa um bloco de código se uma condição for verdadeira, e outro bloco se for falsa.
**switch-case:** Escolhe entre diferentes blocos de código com base no valor de uma variável.
**for:** Repete um bloco de código um número determinado de vezes.
**while:** Repete um bloco de código enquanto uma condição for verdadeira.

**4. Funções e Procedimentos:**

```c
#include <stdio.h>

// Função que calcula a soma de dois números:
int soma(int num1, int num2) {
    return num1 + num2;
}

// Procedimento que imprime uma mensagem:
void imprimirMensagem() {
    printf("Olá, mundo!\n");
}

int main() {
    int resultado = soma(5, 3); // Chama a função soma
    printf("A soma é: %d\n", resultado);

    imprimirMensagem(); // Chama o procedimento imprimirMensagem

    return 0;
}
```

**Funções:** Blocos de código reutilizáveis que podem receber dados de entrada (parâmetros) e retornar um valor.
**Procedimentos (ou funções void):** Blocos de código reutilizáveis que não retornam um valor, mas podem executar ações.
**Chamada de Função:** `int resultado = soma(5, 3);` chama a função `soma` e armazena o valor retornado na variável `resultado`.

Dicas para a Prova:

 Pratique a resolução de exercícios.
 Entenda o funcionamento de cada estrutura de controle.
 Revise os tipos de dados e operadores.
 Faça um resumo de cada conceito importante.

Lembre-se: A prática leva à perfeição! Com este guia e bastante estudo, você estará pronto para dominar a linguagem C e ter sucesso na prova. Boa sorte!

//Conteúdo futuro

- futuro
    
    Revisão Extra:
    
    Arrays: Coleções de elementos do mesmo tipo de dados.
    Ponteiros: Variáveis que armazenam endereços de memória.
    Estruturas: Permite agrupar variáveis de diferentes tipos de dados em uma única estrutura.
    
    **5. Arrays:**
    
    ```c
    #include <stdio.h>
    
    int main() {
        // Declarando um array de inteiros com 5 elementos:
        int numeros[5];
    
        // Inicializando o array:
        numeros[0] = 10;
        numeros[1] = 20;
        numeros[2] = 30;
        numeros[3] = 40;
        numeros[4] = 50;
    
        // Acessando elementos do array:
        printf("Primeiro elemento: %d\n", numeros[0]);
        printf("Terceiro elemento: %d\n", numeros[2]);
    
        // Percorrendo o array com um loop for:
        for (int i = 0; i < 5; i++) {
            printf("Elemento %d: %d\n", i, numeros[i]);
        }
    
        return 0;
    }
    ```
    
    **Declaração:** `int numeros[5];` declara um array chamado `numeros` de tamanho 5, capaz de armazenar 5 inteiros.
    **Inicialização:** Cada elemento do array pode ser inicializado individualmente ou com uma lista de valores.
    **Acessar Elementos:** Use a notação `numeros[índice]` para acessar um elemento específico.
    **Percorrer o Array:** Loops `for` são úteis para iterar sobre cada elemento do array.
    
    **6. Ponteiros:**
    
    ```c
    #include <stdio.h>
    
    int main() {
        int numero = 10;
    
        // Declarando um ponteiro para int:
        int *ponteiro = &numero;
    
        // Imprimindo o valor do ponteiro (endereço de memória):
        printf("Endereço de memória: %p\n", ponteiro);
    
        // Imprimindo o valor que o ponteiro aponta:
        printf("Valor do ponteiro: %d\n", *ponteiro);
    
        // Modificando o valor que o ponteiro aponta:
        *ponteiro = 20;
    
        // Imprimindo o valor modificado da variável original:
        printf("Valor da variável: %d\n", numero);
    
        return 0;
    }
    
    ```
    
    **Declaração:** `int *ponteiro = &numero;` declara um ponteiro chamado `ponteiro` que aponta para a variável `numero`.
    **Operador de Endereço (&):** Retorna o endereço de memória de uma variável.
    **Operador de Desreferência (*):** Acessa o valor que o ponteiro está apontando.
    **Ponteiros e Arrays:** Ponteiros podem ser usados para iterar sobre arrays de forma eficiente.
    
    **7. Estruturas:**
    
    ```c
    #include <stdio.h>
    
    // Definindo uma estrutura chamada "Pessoa":
    struct Pessoa {
        char nome[50];
        int idade;
        float altura;
    };
    
    int main() {
        // Criando uma variável da estrutura "Pessoa":
        struct Pessoa pessoa1;
    
        // Atribuindo valores aos membros da estrutura:
        strcpy(pessoa1.nome, "João");
        pessoa1.idade = 25;
        pessoa1.altura = 1.80;
    
        // Imprimindo os valores dos membros da estrutura:
        printf("Nome: %s\n", pessoa1.nome);
        printf("Idade: %d\n", pessoa1.idade);
        printf("Altura: %.2f\n", pessoa1.altura);
    
        return 0;
    }
    ```
    
    **Definição:** `struct Pessoa { ... };` define uma estrutura chamada `Pessoa` com membros como `nome`, `idade` e `altura`.
    **Criação de Variável:** `struct Pessoa pessoa1;` cria uma variável chamada `pessoa1` da estrutura `Pessoa`.
    **Acessando Membros:** Use a notação `pessoa1.nome`, `pessoa1.idade`, etc. para acessar os membros da estrutura.
    
    Dicas Extra:
    
    **Passagem de Parâmetros por Valor e Referência:** Entenda a diferença entre passar variáveis por valor (cópia) e por referência (endereço) para funções.
    **Alocação Dinâmica de Memória**: Use `malloc` e `free` para alocar e liberar memória durante a execução do programa.
    
    Lembre-se: Aprender a linguagem C é como aprender um novo idioma, exige tempo e dedicação. Continue praticando, explorando novos recursos e experimentando diferentes conceitos para dominar completamente essa ferramenta poderosa!


# ABAIXO TODOS OS CONCEITOS ENSINADOS APLICADOS NUMA CALCULADORA    

### Código aplicando todos os conceitos ensinados

- variáveis
- switch
- for
- do-while
- procedimento(void)
- funções(return e declaração de tipo de variáveis)

```c
#include <stdio.h>
#include <math.h>

// Procedimento para mostrar o menu de opções
void mostrarMenu() {
    printf("Escolha a operação:\n");
    printf("1. Adição (+)\n");
    printf("2. Subtração (-)\n");
    printf("3. Multiplicação (*)\n");
    printf("4. Divisão (/)\n");
    printf("5. Potência (^)\n");
    printf("6. Raiz Quadrada (√)\n");
    printf("7. Sair\n");
}

// Função para calcular a potência (base^expoente)
double potencia(double base, int expoente) {
    double resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

// Função para realizar cálculos baseados na operação escolhida
double calcular(double num1, double num2, char operacao) {
//recebe a escolha através do char na main que é passado para exectutar na função
    switch (operacao) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
                return 0;
            }
        case '^':
            return potencia(num1, (int)num2);
        case 'r':
            if (num1 >= 0) {
                return sqrt(num1);
            } else {
                printf("Erro: Não é possível calcular a raiz de um número negativo.\n");
                return 0;
            }
        default:
            printf("Operação inválida!\n");
            return 0;
    }
}

int main() {
    int opcao;
    double num1, num2, resultado;

    // Calculadora roda até que o usuário escolha sair
    do {
        mostrarMenu();  // Mostra o menu de opções
        printf("Digite sua escolha: ");
        scanf("%d", &opcao);

        // Usamos um 'if' para verificar se é necessário receber dois
        // números ou apenas um
        if (opcao >= 1 && opcao <= 5) {
            printf("Digite o primeiro número: ");
            scanf("%lf", &num1);

            printf("Digite o segundo número: ");
            scanf("%lf", &num2);
        } else if (opcao == 6) {
            printf("Digite o número para calcular a raiz quadrada: ");
            scanf("%lf", &num1);
        }

        // Executa a operação escolhida
        switch (opcao) {
            case 1: // Adição
                resultado = calcular(num1, num2, '+');
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 2: // Subtração
                resultado = calcular(num1, num2, '-');
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 3: // Multiplicação
                resultado = calcular(num1, num2, '*');
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 4: // Divisão
                resultado = calcular(num1, num2, '/');
                if (num2 != 0) {
                    printf("Resultado: %.2lf\n", resultado);
                }
                break;
            case 5: // Potência
                resultado = calcular(num1, num2, '^');
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 6: // Raiz Quadrada
                resultado = calcular(num1, 0, 'r');
                if (num1 >= 0) {
                    printf("Resultado: %.2lf\n", resultado);
                }
                break;
            case 7: // Sair
                printf("Encerrando a calculadora...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }

    } while (opcao != 7); // Repete o programa até que o usuário escolha sair

    return 0;
}
```
