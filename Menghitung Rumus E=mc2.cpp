#include <stdio.h>
#include <conio.h>

int main()
{

float c=89.88,m,E;

printf("masukkan massa (kg) : ");scanf("%f", &m);
E=m*c*c;
printf("E = %.2f * %.2f * %.2f = %.2f J",m,c,c,E);
getch();
}
