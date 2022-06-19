#include <iostream>
int main() {

float ttc, cmc, dpc, vlc, R1,R2,R3;

printf("Informe o tamanho do tanque de combustivel:\n");	
scanf("%f",&ttc);

printf("Informe o consumo medio do carro:\n");	
scanf("%f",&cmc);

printf("Informe a distancia que sera percorrida:\n");	
scanf("%f",&dpc);

printf("Informe o valor do litro de combustivel:\n");	
scanf("%f",&vlc);

R1 = dpc/cmc;
R2 = (dpc/cmc)/ttc;
R3 = (dpc/cmc)*vlc;

printf("\nsera necessario %.2fL para a viagem",R1);	
printf("\nsera necessario %.2f rebastecimentos",R2);	
printf("\nValor total gasto: %.2f",R3);	









}

