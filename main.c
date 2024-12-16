// Inclui a biblioteca padrão de entrada e saída.
#include <stdio.h>
// Inclui a biblioteca padrão de utilidades.
#include <stdlib.h> 

// Função principal do programa.
void main()
{
    // Variável para armazenar o primeiro número digitado pelo usuário.
    int numero1;
    // Variável para armazenar o segundo número digitado pelo usuário. 
    int numero2; 
    // Inicializa a variável 'divisao' que contará os divisores de cada número.  
    int divisao = 0; 

    // Solicita ao usuário que digite o primeiro número.
    printf("Digite o primeiro numero: ");
    // Lê o primeiro número digitado e armazena na variável 'numero1'.
    scanf("%d", &numero1); 

    // Solicita ao usuário que digite o segundo número.
    printf("Digite o segundo numero: ");
    // Lê o segundo número digitado e armazena na variável 'numero2'.
    scanf("%d", &numero2); 

    // Verifica se o primeiro número é maior que 0 e menor que o segundo número.
    if ((numero1 > 0) && (numero1 < numero2))
    {
        // Loop que itera do primeiro número até o segundo número.
        for (; numero1 <= numero2; numero1++)
        {
            // Loop que itera de 1 até o número atual (numero1).
            for (int i = 1; i <= numero1; i++)
            {
                // Verifica se 'i' é um divisor de 'numero1'.
                if (numero1 % i == 0)
                {
                    divisao++; // Se for divisor, incrementa o contador 'divisao'.
                }
            }
            // Verifica se o número de divisores é igual a 2.
            if (divisao == 2)
            {
                // Se o número tem exatamente 2 divisores, é primo.
                printf("O numero %d e primo.\n", numero1);
            }
            else
            {
                // Caso contrário, não é primo.
                printf("O numero %d não e primo.\n", numero1);
            }
            // Reseta o contador 'divisao' para o próximo número.
            divisao = 0; 
        }
    }
    else
    {
        // Mensagem de erro se a condição não for atendida.
        printf("O primeiro numero deve ser menor que o segundo e maior que 0.");
    }
    // Retorna 0 para indicar que o programa terminou com sucesso.
    return 0; 
}
