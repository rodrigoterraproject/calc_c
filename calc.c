// Função para adição
float adicao(float num1, float num2) {
    return num1 + num2;
}

// Função para subtração
float subtracao(float num1, float num2) {
    return num1 - num2;
}

// Função para multiplicação
float multiplicacao(float num1, float num2) {
    return num1 * num2;
}

// Função para divisão
float divisao(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Erro! Divisão por zero não é permitida.\n");
        return 0; // Ou qualquer valor indicando erro
    }
}

int main() {
    float num1, num2, resultado;
    char operador;

    printf("Digite um operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    switch (operador) {
        case '+':
            resultado = adicao(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = subtracao(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = multiplicacao(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            resultado = divisao(num1, num2);
            if (resultado != 0) {
                printf("Resultado: %.2f\n", resultado);
            }
            break;
        default:
            printf("Operador inválido!\n");
    }

    return 0;
}
