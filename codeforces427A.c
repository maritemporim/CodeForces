#include <stdio.h>

int main(void)
{
int n,q,i=0;
int aux;
scanf("%d",&n);
while(i<n)
{
scanf("%d",&q);
aux = i;
if( q == -1)
{
aux --;
}
i++;
}
printf("%d",aux);
}