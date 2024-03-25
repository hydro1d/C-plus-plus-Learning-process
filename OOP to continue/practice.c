#include <stdio.h>
int main() {
 int code1,code2,unit1,unit2;
 float price1,price2;
 scanf("%d %d %f %d %d %f",&code1,&unit1,&price1,&code2,&unit2,&price2);
 printf("valor a pagar = R$ %0.2f\n",((unit1*price1)+(unit2*price2)));
 return 0;
}