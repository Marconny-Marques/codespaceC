#include <stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    int menor;
    int cont;

    while(cont!=0) {
        printf("Digite o valor 1", &num2);
        scanf("%.2f", num1);

        printf("Digite o valor 2", &num2);
        scanf("%.2f", num2);

        printf("Digite o valor 3", &num3);
        scanf("%.2f", num3);

        if(num1< num2 && num3) {
            printf("O menor valor é: ", num1);
        } else if (num2 < num1 && num3){
            printf("O menor valor é: ", num2);
        } else {
            printf("O menor valor é: ", num3);
        }
    }

    return 0;
}