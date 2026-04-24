/*Variables
i:entier
y:réel
x:réel
T:tableau chaîne de caractère
DEBUT
AFFICHER: "Entrer la commande "
LIRE : T[6][]
y=0
x=T[5][0]
POUR (T[1][i] allant de T[1][2] à T[2])
SI (T[1][i]!='x' && T[1][i+2]=='^')
  y=y+T[1][i]*pow(x,T[1][i+3])
  i=i+5
FIN SI
SI  (T[1][i]=='x' && T[1][i+1]=='^')
  y=y+pow(x,T[1][i+2])
  i=i+4
FIN SI
SI(T[1][i]=='x' && T[1][i+1]!='^')
  y=y+x
  i=i+2
FIN SI
SI (T[1][i]!='x' && T[1][i+1]!='x')
  y=y+T[1][i]
  i=i+2
FIN SI
FIN POUR
AFFICHER : y
FIN 
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float calcul(char *T, int x, int a);
void aff (float y);

void aff (float y)
{
  printf("y = %f\n", y);
}

float calcul( char *T, int x, int a)
{
  int i; float y=0;
  if (a<6 || a>6)
  {
    printf("Erreur de syntaxe , veuiller réessayer comme ceci: ");
    printf("./calculer y=polynome_sans_espace pour x = 5");
  }
  i=2; 
  while(T[i]!='\0')
  {
    if (T[i]!='x' && T[i+2]=='^')
    {
      y += T[i] - '0'*pow(x,T[i+3] - '0');
      i+=5;
    }
    else if (T[i]=='x' && T[i+1]=='^')
    {
      y += pow(x,T[i+2] - '0');
      i+=4;
    }
    else if (T[i]=='x' && T[i+1]!='^')
    {
      y+=x;
      i+=2;
    }
    else if (T[i]!='x' && T[i+1]!='x')
    {
      y+=T[i] - '0';
      i+=2;
    }
  }
  return (y);
}

int main(int nbarg, char **par)
{
  int x; float y;
  x=atoi(par[5]);
  y=calcul(par[1], x, nbarg);
  aff(y);
  return (0);
}