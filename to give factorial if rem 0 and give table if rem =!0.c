#include<stdio.h>
main()
{
int f=1,a=1,i,b;
do
{
printf ("enter a no:");
scanf("%d" ,&i);
if(i%2==0)
{
for(int c=1; c<=i; c++)
{
f=f*c;
}
printf(" factorial is %d",f);
}
else
{
while(b<=10)
{
printf("%d *%d= %d\n", i, b, i*b);
b++;
}
}
a++;
}
while( a<=5);
}




