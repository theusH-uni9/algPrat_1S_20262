#include <stdio.h>

int main(){

int a, b, c, d, aux, num = 0;

printf("Por favor, digite o primeiro número: ");
scanf("%d", &a);

printf("Por favor, digite o segundo número: ");
scanf("%d", &b);

printf("Por favor, digite o terceiro número: ");
scanf("%d", &c);

printf("Por favor, digite o quarto número: ");
scanf("%d", &d);

printf("Os valores iniciais são:\nA = %d, \nB = %d, \nC = %d, \nD = %d\n", a, b, c, d);
// 6, 4, 2, 1

if (a > b){
    aux = a;
    a = b;
    b = aux;
    num++;
}
if (a > c){
    aux = a;
    a = c;
    c = aux;
    num++;
}
if (a > d){
    aux = a;
    a = d;
    d = aux;
    num++;
}
if (b > c){
    aux = b;
    b = c;
    c = aux;
    num++;
}
if (b > d){
    aux = b;
    b = d;
    d = aux;
    num++;
}
if (c > d){
    aux = c;
    c = d;
    d = aux;
    num++;
}
printf("\nOs valores finais são:\nA = %d, \nB = %d, \nC = %d, \nD = %d\nVerificações: %d\n", a, b, c, d, num);

    return 0;
}