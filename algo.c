#include <stdio.h>
//a simple calculator
int main()
{
  char c;
  double n1,n2;

  printf("enter an aperator (+;-;*;/):");
  scanf("%c",&c);

  printf("enter n1 and n2:");
  scanf("%lf", &n1);
  scanf("%lf", &n2);

  switch(c)
  {
    case '+':
    printf("%.2lf + %.2lf = %.2lf",n1,n2,n1+n2);
    break;

    case '-':
    printf("%.2lf - %.2lf = %.2lf",n1,n2,n1-n2);
    break;

    case '*':
    printf("%.2lf * %.2lf = %.2lf",n1,n2,n1*n2);
    break;

    case '/':
    printf("%.2lf / %.2lf = %.2lf",n1,n2,n1/n2);
    break;
  }
  return 0;
}
