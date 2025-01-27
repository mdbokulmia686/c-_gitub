#include <stdio.h>
int main() 
{
// int a;
// long long int b;
// char c;
// float d;
// double e;
// scanf("%d %lld %c %f %lf",&a ,&b, &c, &d ,&e);
// printf("%d\n%lld\n%c\n%0.2f\n%0.1lf",a,b,c,d,e);

  int num;
  long long long_num;
  char ch;
  float f_num;
  double d_num;

  scanf("%d %lld %c %f %lf", &num, &long_num, &ch, &f_num, &d_num);

  printf("%d\n", num);
  printf("%lld\n", long_num);
  printf("%c\n", ch);
  printf("%.2f\n", f_num); 
  printf("%.1lf\n", d_num);  
  return 0;
}