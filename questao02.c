#include <stdio.h>

int fatorial(int n, int f){
int resultado;
while(n>1){
f=1;
resultado=(n*f);
f=f-1;
}
return (resultado);
}
int main(void){
int resultado;
int n;
int f;

printf("Digite o numero a ser fatorado:\n");
scanf("%d", &n);
resultado=fatorial(n,f);
printf("%d", resultado);
}