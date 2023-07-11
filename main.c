#include <stdio.h>
#include <stdlib.h>


float vin = 0.0,
      r = 0.0,
      vled = 0.0,
      iled = 0.0;
  
int main() {

  
  printf(" LED CALC  v1.0" "\n");
  printf("autor: Luis Gustavo" "\n");
  printf("digite o valor de vin:  " "\n");
  scanf("%f",&vin );
  printf("\n\n");
  printf("digite o valor de vled:  " "\n");
  scanf("%f",&vled );
  printf("\n\n");
  printf("digite o valor da corrente:  " "\n");
  scanf("%f",&iled );
  printf("\n\n");
  
  printf("vled = %.2f\n\n", vled);
  printf("vin = %.2f\n\n", vin);
  printf("vin = %.2f\n\n", iled);

  
    
  r= (vin - vled)/ iled;
  printf ("resistecia é %.2f\n\n", r);
    
  


  
  return 0;
}
