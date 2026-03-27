#include <stdio.h>
#include <stdlib.h>

int main() {
    char int_str1[] = "10";
    char int_str2[] = "-20";
    char float_str[] = "3.14";

    int a = atoi(int_str1);
    int b = atoi(int_str2);
    double c = atof(float_str);

    printf("%d\n", a);           // 10
    printf("%d\n", abs(b));      // 20
    printf("%.2f\n", c);         // 3.14

    return 0;
}