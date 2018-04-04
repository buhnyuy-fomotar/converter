#include<stdio.h>
#include<math.h>
int main()
{
int a, b, r, x;
scanf("%d%d", &a,&b);
while(x!=0)
{


r = a % b;
int e;
e=a/b;
int f;
f=e-r;
if (f==0)
{
    printf("\n");
}
else {
printf("\t\n%d",r);
x = f % b;

printf("\t\n%d",x);
x==a;
}

}
}
