
#include <stdio.h>
#include <string.h>
#include "functions.h"

int main(){
    int a, b, total;
    double c, t, a1, b1;
    char operador[3];

    strcpy(operador, ""); 

    printf("Escolha um operador matematico que desejar:\n");
    printf("Adicao: '+'\n");
    printf("Subtracao: '-'\n");
    printf("Divisao: '/'\n");
    printf("Multiplicacao: '*'\n");
    printf("Potencia: '**'\n");
    printf("Raiz Quadrada: '//'\n\n");
    printf("Digite: ");
    scanf("%2s", operador);

    if (strcmp(operador, "+") == 0) {
        printf("\nO formato dessa conta sera: 'a + b' \n");
        printf("Digite o valor de 'a': ");
        scanf("%d", &a);
        printf("\nDigite o valor de 'b': ");
        scanf("%d", &b);
        total = add(a,b);
        printf("\nTotal: %d\n", total);

    } 
    else if (strcmp(operador, "-") == 0) {
        printf("\nO formato dessa conta sera: 'a - b' \n");
        printf("Digite o valor de 'a': ");
        scanf("%d", &a);
        printf("\nDigite o valor de 'b': ");
        scanf("%d", &b);
        total = sub(a,b);
        printf("\nTotal: %d\n", total);

    } 
    else if (strcmp(operador, "*") == 0) {
        printf("\nO formato dessa conta sera: 'a * b' \n");
        printf("Digite o valor de 'a': ");
        scanf("%d", &a);
        printf("\nDigite o valor de 'b': ");
        scanf("%d", &b);
        total = mul(a,b);
        printf("\nTotal: %d\n", total);

    } 
    else if (strcmp(operador, "/") == 0) {
        printf("\nO formato dessa conta sera: 'a / b' \n");
        printf("Digite o valor de 'a': ");
        scanf("%lf", &a1);
        printf("\nDigite o valor de 'b': ");
        scanf("%lf", &b1);
        if(b1 == 0){
            printf("Conta matematica invalida, pois o divisor eh igual a 0\n");
            return 1;
        }
        t = divi(a1,b1);
        printf("\nTotal: %.2lf\n", t);

    } 
    else if (strcmp(operador, "//") == 0) {
        printf("\nEssa conta será a raiz quadrada de 'a'\n");
        printf("Digite o valor de 'a': ");
        scanf("%d", &a);
        c = (double)a;
        t = raiz(c);
        printf("\nTotal: %.2lf\n", t);

    } 
    else if (strcmp(operador, "**") == 0) {
        printf("\nO formato dessa conta sera: base = 'a' , expoente = 'b' \n");
        printf("Digite o valor de 'a': ");
        scanf("%d", &a);
        printf("\nDigite o valor de 'b': ");
        scanf("%d", &b);
        if(b < 0 ){
            printf("Apenas expoentes positivos são permitidos!!!\n");
                return 1;
        }
        total = pot(a,b);
        printf("\nTotal: %d\n", total);

    } 
    else {
        printf("\nOperador inválido!\n");
    }

    return 0;
}