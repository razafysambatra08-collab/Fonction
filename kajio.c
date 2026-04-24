#include<stdio.h>
#include<stdlib.h>
int somme (int a, int b);
int soustraire (int a, int b);
int fois (int a, int b);
int divise (int a, int b);
int kajio(int a, int b, char c);
void resultat (int res);
int somme (int a, int b)
{
    return (a+b);
}
int soustraire (int a, int b)
{
    return(a-b);
}
int fois(int a, int b)
{
    return (a*b);
}
int divise(int a, int b)
{
    return(a/b);
}
 int kajio(int a, int b, char c)
{
    if (c=='+')
    {
        return (somme(a,b));
    }
   else if (c=='-')
    {
        return (soustraire(a,b));
    }
   else if (c=='/')
    {
        return (divise(a,b));
    }
   else if (c=='x')
    {
        return(fois(a,b));
    }
}
void resultat(int res)
{
    printf("Le résultat est : %d\n", res);
}
int main (int nbarg, char **par)
{
    int res, a, b; char c;
    a=atoi(par[1]);
    b=atoi(par[3]);
    c=*par[2];
    res=kajio(a,b,c);
    resultat(res);
    return 0;
}

