#include <stdio.h>
#include <stdlib.h>

int main(){
char sexo;
int idade;
float peso,altura;
char i;
printf("digite seu sexo M(MASCULINO) ou F(FEMININO)\n");

scanf("%c",&sexo);



printf("digite sua idade\n");

scanf("%d", &idade);

printf("digite seu altura e peso COM UM PONTO (.) PARA SEPARAR OS DECIMAIS\n");

scanf("%f%f", &altura,&peso);

printf("seu sexo: %c sua idade: %d sua altura: %.2f seu peso: %.2f e seu mmc esta em: %.2f\n" ,sexo,idade,altura,peso, peso/(altura*altura));
printf("e so isso\n");

system("pause");
return 0;
}
