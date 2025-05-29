#include <stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    int menor;
    int cont = 1;

    while(cont == 1) {
        printf("Digite o valor 1", &num1);
        scanf("%d", &num1);

        printf("Digite o valor 2", &num2);
        scanf("%d", &num2);

        printf("Digite o valor 3", &num3);
        scanf("%d", &num3);

        if(num1 <= num2 && num1 <= num3) {
            menor = num1;
        } else if (num2 <= num1 && num2 <= num3){
            menor = num2;
        } else {
            menor = num3;
        }

        printf("O menor valor é %d\n", menor);
    }

    return 0;
}