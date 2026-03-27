#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[] = "10";
    char b[] = "-20";
    char c[] = "3.14";

    int x = atoi(a);
    int y = atoi(b);
    double z = atof(c);

    printf("%d\n", x);
    printf("%d\n", abs(y));
    printf("%.2f\n", z);

    return 0;
}