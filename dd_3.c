//  #include<stdio.h>
//  int main()
//  {
//       int num;
//    long long long_num;
//    char ch;
//    float f_num;
//    double d_num;
//    scanf("%d %lld %c %f %lf", &num, &long_num, &ch, &f_num, &d_num);

//    printf("%d\n", num);
//    printf("%lld\n", long_num);
//    printf("%c\n", ch);
//    printf("%0.2f\n", f_num); 
//    printf("%0.1lf\n", d_num);  
//      return 0;
//  }
#include <stdio.h>

int main() 
{
    int int_value;
    long long long_long_value;
    char char_value;
    float float_value;
    double double_value;
    scanf("%d %lld %c %f %lf", &int_value, &long_long_value, &char_value, &float_value, &double_value);
    printf("%d\n", int_value);
    printf("%lld\n", long_long_value);
    printf("%c\n", char_value);
    printf("%0.2f\n", float_value);
    printf("%0.1lf\n", double_value);

    return 0;
}